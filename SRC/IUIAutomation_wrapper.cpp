///////////////////////////////////////////////////////////////////////////////
//
// IUIAutomation_wrapper.cpp
//
//
///////////////////////////////////////////////////////////////////////////////

#include "parameters.hpp"

#include <autobahn/autobahn.hpp>
#include <boost/asio.hpp>
#include <boost/version.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <iostream>
#include <memory>
#include <string>
#include <thread>
#include <tuple>
#include <vector>

#include <windows.h>
#include <comutil.h>  
#include <comdef.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include <ole2.h>
#include <uiautomation.h>
#include <UIAutomation.h>
#include <UIAutomationClient.h>
#include "exec.h"

#pragma comment(lib, "comsuppw.lib") 

using namespace std;


void  _AddAutomationEventHandler( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_AddAutomationEventHandler";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _AddFocusChangedEventHandler( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_AddFocusChangedEventHandler";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _AddPropertyChangedEventHandler ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_AddPropertyChangedEventHandler";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _AddPropertyChangedEventHandlerNativeArray ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_AddPropertyChangedEventHandlerNativeArray";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _AddStructureChangedEventHandler ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_AddStructureChangedEventHandler";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _CheckNotSupported ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_CheckNotSupported";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _CompareElements ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_CompareElements";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _CompareRuntimeIds ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_CompareRuntimeIds";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _CreateAndCondition ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_CreateAndCondition";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _CreateAndConditionFromArray ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_CreateAndConditionFromArray";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _CreateAndConditionFromNativeArray ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_CreateAndConditionFromNativeArray";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _CreateCacheRequest ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_CreateCacheRequest";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _CreateFalseCondition ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_CreateFalseCondition";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _CreateNotCondition ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_CreateNotCondition";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _CreateOrCondition ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_CreateOrCondition";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _CreateOrConditionFromArray ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_CreateOrConditionFromArray";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _CreateOrConditionFromNativeArray ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_CreateOrConditionFromNativeArray";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _CreatePropertyCondition ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_CreatePropertyCondition";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _CreatePropertyConditionEx ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_CreatePropertyConditionEx";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _CreateProxyFactoryEntry ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_CreateProxyFactoryEntry";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _CreateTreeWalker ( string message, autobahn::wamp_invocation invocation ) {
		
	string sub = "_CreateTreeWalker";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _CreateTrueCondition ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_CreateTrueCondition";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _ElementFromHandle ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_ElementFromHandle";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _ElementFromHandleBuildCache ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_ElementFromHandleBuildCache";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _ElementFromIAccessible ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_ElementFromIAccessible";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _ElementFromIAccessibleBuildCache ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_ElementFromIAccessibleBuildCache";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _ElementFromPoint ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_ElementFromPoint";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _ElementFromPointBuildCache ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_ElementFromPointBuildCache";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _GetFocusedElement ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_GetFocusedElement";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _GetFocusedElementBuildCache ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_GetFocusedElementBuildCache";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _GetPatternProgrammaticName ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_GetPatternProgrammaticName";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _GetPropertyProgrammaticName ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_GetPropertyProgrammaticName";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _GetRootElement ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_GetRootElement";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _GetRootElementBuildCache ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_GetRootElementBuildCache";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _IntNativeArrayToSafeArray ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_IntNativeArrayToSafeArray";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _IntSafeArrayToNativeArray ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_IntSafeArrayToNativeArray";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _PollForPotentialSupportedPatterns ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_PollForPotentialSupportedPatterns";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _PollForPotentialSupportedProperties ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_PollForPotentialSupportedProperties";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _RectToVariant ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_RectToVariant";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _RemoveAllEventHandlers ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_RemoveAllEventHandlers";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _RemoveAutomationEventHandler ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_RemoveAutomationEventHandler";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _RemoveFocusChangedEventHandler ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_RemoveFocusChangedEventHandler";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _RemovePropertyChangedEventHandler ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_RemovePropertyChangedEventHandler";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _RemoveStructureChangedEventHandler ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_RemoveStructureChangedEventHandler";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _SafeArrayToRectNativeArray ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_SafeArrayToRectNativeArray";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}

void  _VariantToRect ( string message, autobahn::wamp_invocation invocation ) {
	
	string sub = "_VariantToRect";
	cerr << "Entered " << sub << endl;
	
	invocation->result(make_tuple(sub, message));
}



IUIAutomation *g_pAutomation = NULL;


HRESULT InitializeUIAutomation()
{
    CoInitialize(NULL);
    HRESULT hr =
        CoCreateInstance(__uuidof(CUIAutomation),
            NULL, CLSCTX_INPROC_SERVER,
            __uuidof(IUIAutomation),
            (void**)&g_pAutomation);
    return (hr);
}



HRESULT _GetTopLevelWindowByName ( string message, autobahn::wamp_invocation invocation ) {


	
	string sub = "_GetTopLevelWindowByName";
	cerr << "Entered " << sub << endl;
	
#if 0
	
	LPWSTR windowName = NULL;
	int wchars_num =  MultiByteToWideChar( CP_UTF8 , 0 , message.c_str() , -1, NULL , 0 );
    wchar_t* wstr = new wchar_t[wchars_num];
    MultiByteToWideChar( CP_UTF8 , 0 , message.c_str() , -1, wstr , wchars_num );

	windowName = wstr;   //rember to delete[] wstr;
	cerr << "windowName: " << windowName << endl;
	
    if (windowName == NULL)
    {
        return NULL;
    }

    VARIANT varProp;
    varProp.vt = VT_BSTR;
    varProp.bstrVal = SysAllocString(windowName);
    if (varProp.bstrVal == NULL)
    {
		std:exit(0);
        return NULL;
    }
#endif


	HRESULT                   hr       = NULL;
	IUIAutomationElement    * pDesktop = NULL;
	IUIAutomationElement    * pFirst   = NULL;
	IUIAutomationTreeWalker * pWalk    = NULL;

	hr = InitializeUIAutomation();
	//hr = g_pAutomation->GetRootElement(&pDesktop);
	hr = g_pAutomation->get_ControlViewWalker(&pWalk);


cleanup:

#if 0

    if (g_pAutomation != NULL)
		cerr << "g_pAutomation: " << g_pAutomation << endl;
		//cerr << "g_ppAutomation: " << g_ppAutomation << endl;
        //g_ppAutomation->Release();


    if (pRoot != NULL)
        pRoot->Release();

    if (pCondition != NULL)
        pCondition->Release();


	 if (wstr != NULL)
	    delete[] wstr;


    VariantClear(&varProp);
	invocation->result(make_tuple(pFound));
	
#endif
	
    return NULL;
}
