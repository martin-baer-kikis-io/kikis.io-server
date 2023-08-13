///////////////////////////////////////////////////////////////////////////////
//
// exec.cpp
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
#include "exec.h"

#pragma comment(lib, "comsuppw.lib") 

using namespace std;

// g_func_names_v
vector<string> g_func_names_v{"AddAutomationEventHandler", "AddFocusChangedEventHandler", "AddPropertyChangedEventHandler", "AddPropertyChangedEventHandlerNativeArray", "AddStructureChangedEventHandler", "CheckNotSupported", "CompareElements", "CompareRuntimeIds", "CreateAndCondition", "CreateAndConditionFromArray", "CreateAndConditionFromNativeArray", "CreateCacheRequest", "CreateFalseCondition", "CreateNotCondition", "CreateOrCondition", "CreateOrConditionFromArray", "CreateOrConditionFromNativeArray", "CreatePropertyCondition", "CreatePropertyConditionEx", "CreateProxyFactoryEntry", "CreateTreeWalker", "CreateTrueCondition", "ElementFromHandle", "ElementFromHandleBuildCache", "ElementFromIAccessible", "ElementFromIAccessibleBuildCache", "ElementFromPoint", "ElementFromPointBuildCache", "GetFocusedElement", "GetFocusedElementBuildCache", "GetPatternProgrammaticName", "GetPropertyProgrammaticName", "GetRootElement", "GetRootElementBuildCache", "IntNativeArrayToSafeArray", "IntSafeArrayToNativeArray", "PollForPotentialSupportedPatterns", "PollForPotentialSupportedProperties", "RectToVariant", "RemoveAllEventHandlers", "RemoveAutomationEventHandler", "RemoveFocusChangedEventHandler", "RemovePropertyChangedEventHandler", "RemoveStructureChangedEventHandler", "SafeArrayToRectNativeArray", "VariantToRect", "GetTopLevelWindowByName" };



// exec 
//
// first pass of this design is to just call IUIAutomation methods in response to a
// text "method" string and a " message, invocation " string of space seperated arguments: ie passing
//  message, invocation s to methods.

void exec(autobahn::wamp_invocation invocation)
{
    auto method  = invocation->argument<string>(0);
    auto message = invocation->argument<string>(1);

	auto fname 	=  g_func_names_v[0];  // initializing with auto
	auto findex	= 0;
	
	//
	// get function index for the switch statement
	//
	for (findex ; findex <= FNAMES_LAST; findex++) {
		
		fname = g_func_names_v[findex];
	
		if( fname.compare(method) == 0 ) {
			//invocation->result(make_tuple(fname, findex));
			break;
		}
	}
	
	//
	// switch on the function name index.
	//
	switch (findex) 
	{
        case  AddAutomationEventHandler: 
			_AddAutomationEventHandler( message, invocation );
			break;
        case  AddFocusChangedEventHandler:
			_AddFocusChangedEventHandler( message, invocation );
			break;
        case  AddPropertyChangedEventHandler:
			_AddPropertyChangedEventHandler ( message, invocation );
			break;		
        case  AddPropertyChangedEventHandlerNativeArray: 	
			_AddPropertyChangedEventHandlerNativeArray ( message, invocation );
			break;
        case  AddStructureChangedEventHandler:
			_AddStructureChangedEventHandler ( message, invocation );
			break;		
        case  CheckNotSupported:
			_CheckNotSupported ( message, invocation );
			break;		
        case  CompareElements:
			_CompareElements ( message, invocation );
			break;		
        case  CompareRuntimeIds:
			_CompareRuntimeIds ( message, invocation );
			break;		
        case  CreateAndCondition:
			_CreateAndCondition ( message, invocation );
			break;		
        case  CreateAndConditionFromArray:
			_CreateAndConditionFromArray ( message, invocation );
			break;		
        case  CreateAndConditionFromNativeArray:
			_CreateAndConditionFromNativeArray ( message, invocation );	
			break;		
        case  CreateCacheRequest:
			_CreateCacheRequest ( message, invocation );
			break;		
        case  CreateFalseCondition:
			_CreateFalseCondition ( message, invocation );
			break;		
        case  CreateNotCondition:
			_CreateNotCondition ( message, invocation );
			break;		
        case  CreateOrCondition:
			_CreateOrCondition ( message, invocation );
			break;		
        case  CreateOrConditionFromArray:
			_CreateOrConditionFromArray ( message, invocation );
			break;		
        case  CreateOrConditionFromNativeArray:
			_CreateOrConditionFromNativeArray ( message, invocation );
			break;		
        case  CreatePropertyCondition:
			_CreatePropertyCondition ( message, invocation );
			break;		
        case  CreatePropertyConditionEx:
			_CreatePropertyConditionEx ( message, invocation );
			break;		
        case  CreateProxyFactoryEntry:
			_CreateProxyFactoryEntry ( message, invocation );
			break;		
        case  CreateTreeWalker:
			_CreateTreeWalker ( message, invocation );
			break;		
        case  CreateTrueCondition:
			_CreateTrueCondition ( message, invocation );
			break;		
        case  ElementFromHandle:
			_ElementFromHandle ( message, invocation );
			break;		
        case  ElementFromHandleBuildCache:
			_ElementFromHandleBuildCache ( message, invocation );
			break;		
        case  ElementFromIAccessible:
			_ElementFromIAccessible ( message, invocation );
			break;		
        case  ElementFromIAccessibleBuildCache:
			_ElementFromIAccessibleBuildCache ( message, invocation );
			break;		
        case  ElementFromPoint:
			_ElementFromPoint ( message, invocation );
			break;		
        case  ElementFromPointBuildCache:
			_ElementFromPointBuildCache ( message, invocation );
			break;		
        case  GetFocusedElement:
			_GetFocusedElement ( message, invocation );
			break;		
        case  GetFocusedElementBuildCache:
			_GetFocusedElementBuildCache ( message, invocation );
			break;		
        case  GetPatternProgrammaticName:
			_GetPatternProgrammaticName ( message, invocation );
			break;		
        case  GetPropertyProgrammaticName:
			_GetPropertyProgrammaticName ( message, invocation );
			break;		
        case  GetRootElement:
			_GetRootElement ( message, invocation );
			break;		
        case  GetRootElementBuildCache:
			_GetRootElementBuildCache ( message, invocation );
			break;		
        case  IntNativeArrayToSafeArray:
			_IntNativeArrayToSafeArray ( message, invocation );
			break;		
        case  IntSafeArrayToNativeArray:
			_IntSafeArrayToNativeArray ( message, invocation );
			break;		
        case  PollForPotentialSupportedPatterns:
			_PollForPotentialSupportedPatterns ( message, invocation );
			break;		
        case  PollForPotentialSupportedProperties:
			_PollForPotentialSupportedProperties ( message, invocation );
			break;		
        case  RectToVariant:
			_RectToVariant ( message, invocation );
			break;		
        case  RemoveAllEventHandlers:
			_RemoveAllEventHandlers ( message, invocation );
			break;		
        case  RemoveAutomationEventHandler:
			_RemoveAutomationEventHandler ( message, invocation );
			break;		
        case  RemoveFocusChangedEventHandler:
			_RemoveFocusChangedEventHandler ( message, invocation );
			break;		
        case  RemovePropertyChangedEventHandler:
			_RemovePropertyChangedEventHandler ( message, invocation );
			break;		
        case  RemoveStructureChangedEventHandler:
			_RemoveStructureChangedEventHandler ( message, invocation );
			break;		
        case  SafeArrayToRectNativeArray:
			_SafeArrayToRectNativeArray ( message, invocation );
			break;		
        case  VariantToRect:
			_VariantToRect ( message, invocation );
			break;
		case  GetTopLevelWindowByName:
			_GetTopLevelWindowByName ( message, invocation );
			break;
															
        default: 	cerr << "Hit the default option in the switch" << endl;
					break;


    }
	
}

