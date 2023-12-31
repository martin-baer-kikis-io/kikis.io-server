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

IUIAutomation *TW_g_pAutomation = NULL;

HRESULT TW_InitializeUIAutomation()
{
    CoInitialize(NULL);
    HRESULT hr =
        CoCreateInstance(__uuidof(CUIAutomation),
            NULL, CLSCTX_INPROC_SERVER,
            __uuidof(IUIAutomation),
            (void**)&TW_g_pAutomation);
    return (hr);
}

#endif

void walk_tree_from_root (IUIAutomationElement* pParent, int indent, autobahn::wamp_invocation invocation)
{


#if 1
	// InitializeUIAutomation
	//
	std::cerr << "DEBUG: Calling TW_InitializeUIAutomation() " << std::endl;
	HRESULT hr  = TW_InitializeUIAutomation();
	if (TW_g_pAutomation == NULL) {
		std::cerr << "DEBUG: TW_g_pAutomation is NULL. (" <<  std::oct << hr << ")   Exiting..." << std::endl;	
		std:exit(0);
	}
	std::cerr << "DEBUG: TW_g_pAutomation is not NULL" << std::endl;
	
#endif


	std::cerr << "DEBUG: entered walk_tree_from_root() " << std::endl;	
	std::cerr << "DEBUG: testing parent == NULL " << std::endl;	
	
    if (pParent == NULL)
        return;
	
	std::cerr << "DEBUG: Parent not NULL" << std::endl;	

    IUIAutomationTreeWalker* pControlWalker = NULL;
    IUIAutomationElement* pNode = NULL;

	std::cerr << "DEBUG: getting treeWalker" << std::endl;	
    TW_g_pAutomation->get_ControlViewWalker(&pControlWalker);
	
	std::cerr << "DEBUG: testing treeWalkeer == NULL " << std::endl;	
    if (pControlWalker == NULL)
        goto cleanup;

	std::cerr << "DEBUG: calling GetFirstChild " << std::endl;	
    pControlWalker->GetFirstChildElement(pParent, &pNode);
	
	std::cerr << "DEBUG: Testing if child is NULL" << std::endl;	
    if (pNode == NULL)
        goto cleanup;
	
	std::cerr << "DEBUG: Child is not NULL" << std::endl;	

	std::cerr << "DEBUG: reached  while statement" << std::endl;
	//std::cerr << "DEBUG: Exiting..." << std::endl;	
	//std:exit(0);
	
	int index = 0;
		
    while (pNode)
    {
		
		if ( index > 10 )
			goto cleanup;
		index++;
		
        BSTR desc;
		char* desc_str;
				
		std::cerr << "DEBUG: getting congtrol type" << std::endl;
        pNode->get_CurrentLocalizedControlType(&desc);
		desc_str =  _com_util::ConvertBSTRToString(desc);

        for (int x = 0; x <= indent; x++)
        {
            std::wcout << L"   ";
        }

		std::wcout << desc << L"\n";
		std::cerr << "DEBUG: printed control type (" << desc_str << ")" << std::endl;
				
		invocation->result(std::make_tuple(desc_str));

        SysFreeString(desc);
		delete[] desc_str;

        walk_tree_from_root(pNode, indent+1, invocation);
        IUIAutomationElement* pNext;
        pControlWalker->GetNextSiblingElement(pNode, &pNext);
        pNode->Release();
        pNode = pNext;

    }

cleanup:
    if (pControlWalker != NULL)
        pControlWalker->Release();

    if (pNode != NULL)
        pNode->Release();

    return;
}

