///////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) Crossbar.io Technologies GmbH and contributors
//
// Boost Software License - Version 1.0 - August 17th, 2003
//
// Permission is hereby granted, free of charge, to any person or organization
// obtaining a copy of the software and accompanying documentation covered by
// this license (the "Software") to use, reproduce, display, distribute,
// execute, and transmit the Software, and to prepare derivative works of the
// Software, and to permit third-parties to whom the Software is furnished to
// do so, all subject to the following:
//
// The copyright notices in the Software and this entire statement, including
// the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and
// all derivative works of the Software, unless such copies or derivative
// works are solely in the form of machine-executable object code generated by
// a source language processor.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
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


#include <windows.h>
#include <comutil.h>  
#include <comdef.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


#include <ole2.h>
#include <UIAutomation.h>
#include <uiautomation.h>

#pragma comment(lib, "comsuppw.lib") 


#if 1

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

#endif

void add(autobahn::wamp_invocation invocation)
{
	std::cerr << "Entered com.example.add: " << std::endl;

#if 0

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

#endif


	HRESULT                   hr       = NULL;
	IUIAutomationElement    * pDesktop = NULL;
	IUIAutomationElement    * pFirst   = NULL;
	IUIAutomationTreeWalker * pWalk    = NULL;

#if 1
	// InitializeUIAutomation
	//
	std::cerr << "DEBUG: Calling InitializeUIAutomation() " << std::endl;
	hr  = InitializeUIAutomation();
	if (g_pAutomation == NULL) {
		std::cerr << "DEBUG: g_pAutomation is NULL. (" <<  std::oct << hr << ")   Exiting..." << std::endl;	
		std:exit(0);
	}
	std::cerr << "DEBUG: g_pAutomation is not NULL" << std::endl;
#endif

	// GetRootElement
	//
	std::cerr << "DEBUG: calling GetRootElement" << std::endl;
    hr = g_pAutomation->GetRootElement(&pDesktop);
	if (pDesktop == NULL) {
		std::cerr << "DEBUG: pDesktop is NULL. (" <<  std::oct << hr << ")  Exiting..." << std::endl;		
		std::exit(0);
	}
	std::cerr << "DEBUG: pDesktop is not NULL" << std::endl;
	
	// get_ControlViewWalker
	//
	std::cerr << "DEBUG: calling ControlViewWalker" << std::endl;
	hr = g_pAutomation->get_ControlViewWalker(&pWalk);
	if ( pWalk == NULL) {
		std::cerr << "DEBUG: pWalk is NULL. (" << std::oct << hr << ")  Exiting..." << std::endl;	
		std::exit(0);
	}
	std::cerr << "DEBUG: pWalk is not NULL" << std::endl;	

	// GetFirstChildElement
	//
	std::cerr << "DEBUG: calling GetFirstChildElement" << std::endl;
	pWalk->GetFirstChildElement(pDesktop, &pFirst);
	if (pFirst == NULL) {
		std::cerr << "DEBUG: pFirst is NULL. (" << std::oct << hr << ")  Exiting..." << std::endl;	
		std::exit(0);
	}
	std::cerr << "DEBUG: pFirst is not NULL" << std::endl;
	
	//  ListDescendants
	//
	//std::cerr << "DEBUG: calling ListDescendants() " << std::endl;
	//ListDescendants( pDesktop, 2, invocation);
	
	std::cerr << "DEBUG: returning to main block" << std::endl;
	
}
