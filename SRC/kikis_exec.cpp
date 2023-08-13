///////////////////////////////////////////////////////////////////////////////
//
// kikis_exec.cpp
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
#include "kikis_exec.h"

#pragma comment(lib, "comsuppw.lib") 

using namespace std;

// g_func_names_v
std::vector<std::string> g_func_names_v{"AddAutomationEventHandler", "AddFocusChangedEventHandler", "AddPropertyChangedEventHandler", "AddPropertyChangedEventHandlerNativeArray", "AddStructureChangedEventHandler", "CheckNotSupported", "CompareElements", "CompareRuntimeIds", "CreateAndCondition", "CreateAndConditionFromArray", "CreateAndConditionFromNativeArray", "CreateCacheRequest", "CreateFalseCondition", "CreateNotCondition", "CreateOrCondition", "CreateOrConditionFromArray", "CreateOrConditionFromNativeArray", "CreatePropertyCondition", "CreatePropertyConditionEx", "CreateProxyFactoryEntry", "CreateTreeWalker", "CreateTrueCondition", "ElementFromHandle", "ElementFromHandleBuildCache", "ElementFromIAccessible", "ElementFromIAccessibleBuildCache", "ElementFromPoint", "ElementFromPointBuildCache", "GetFocusedElement", "GetFocusedElementBuildCache", "GetPatternProgrammaticName", "GetPropertyProgrammaticName", "GetRootElement", "GetRootElementBuildCache", "IntNativeArrayToSafeArray", "IntSafeArrayToNativeArray", "PollForPotentialSupportedPatterns", "PollForPotentialSupportedProperties", "RectToVariant", "RemoveAllEventHandlers", "RemoveAutomationEventHandler", "RemoveFocusChangedEventHandler", "RemovePropertyChangedEventHandler", "RemoveStructureChangedEventHandler", "SafeArrayToRectNativeArray", "VariantToRect" };

// pointer to the Windows SCreen Object
IUIAutomation *kikis_g_pAutomation = NULL;



HRESULT InitializeUIAutomation()
{
    CoInitialize(NULL);
    HRESULT hr =
        CoCreateInstance(__uuidof(CUIAutomation),
            NULL, CLSCTX_INPROC_SERVER,
            __uuidof(IUIAutomation),
            (void**)&kikis_g_pAutomation);
    return (hr);
}

// kikis_exec 
//
// first pass of this design is to just call IUIAutomation methods in response to a
// text "method" string and a "message" string of space seperated arguments: ie passing
// messages to methods.

void exec(autobahn::wamp_invocation invocation)
{
    auto method  = invocation->argument<std::string>(0);
    auto message = invocation->argument<std::string>(1);

	//kikis_function_list.emplace_back(A, "");	

	vector<tuple<int, string>> kikis_function_list;

	kikis_function_list.emplace_back(AddAutomationEventHandler, "AddAutomationEventHandler");

	auto result1 = get<string>(kikis_function_list[0]); // index in the vector, 0 - n
	auto result2 = get<int>(kikis_function_list[0]);

    std::cerr << "Procedure com.example.kikis_exec invoked: " << method << ", " << message << std::endl;

    invocation->result(std::make_tuple(result1, result2));
}

