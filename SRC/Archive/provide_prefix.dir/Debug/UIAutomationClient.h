

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for ..\..\..\..\..\..\Program Files (x86)\Windows Kits\10\Include\10.0.16299.0\um\UIAutomationClient.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __UIAutomationClient_h__
#define __UIAutomationClient_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IUIAutomationElement_FWD_DEFINED__
#define __IUIAutomationElement_FWD_DEFINED__
typedef interface IUIAutomationElement IUIAutomationElement;

#endif 	/* __IUIAutomationElement_FWD_DEFINED__ */


#ifndef __IUIAutomationElementArray_FWD_DEFINED__
#define __IUIAutomationElementArray_FWD_DEFINED__
typedef interface IUIAutomationElementArray IUIAutomationElementArray;

#endif 	/* __IUIAutomationElementArray_FWD_DEFINED__ */


#ifndef __IUIAutomationCondition_FWD_DEFINED__
#define __IUIAutomationCondition_FWD_DEFINED__
typedef interface IUIAutomationCondition IUIAutomationCondition;

#endif 	/* __IUIAutomationCondition_FWD_DEFINED__ */


#ifndef __IUIAutomationBoolCondition_FWD_DEFINED__
#define __IUIAutomationBoolCondition_FWD_DEFINED__
typedef interface IUIAutomationBoolCondition IUIAutomationBoolCondition;

#endif 	/* __IUIAutomationBoolCondition_FWD_DEFINED__ */


#ifndef __IUIAutomationPropertyCondition_FWD_DEFINED__
#define __IUIAutomationPropertyCondition_FWD_DEFINED__
typedef interface IUIAutomationPropertyCondition IUIAutomationPropertyCondition;

#endif 	/* __IUIAutomationPropertyCondition_FWD_DEFINED__ */


#ifndef __IUIAutomationAndCondition_FWD_DEFINED__
#define __IUIAutomationAndCondition_FWD_DEFINED__
typedef interface IUIAutomationAndCondition IUIAutomationAndCondition;

#endif 	/* __IUIAutomationAndCondition_FWD_DEFINED__ */


#ifndef __IUIAutomationOrCondition_FWD_DEFINED__
#define __IUIAutomationOrCondition_FWD_DEFINED__
typedef interface IUIAutomationOrCondition IUIAutomationOrCondition;

#endif 	/* __IUIAutomationOrCondition_FWD_DEFINED__ */


#ifndef __IUIAutomationNotCondition_FWD_DEFINED__
#define __IUIAutomationNotCondition_FWD_DEFINED__
typedef interface IUIAutomationNotCondition IUIAutomationNotCondition;

#endif 	/* __IUIAutomationNotCondition_FWD_DEFINED__ */


#ifndef __IUIAutomationCacheRequest_FWD_DEFINED__
#define __IUIAutomationCacheRequest_FWD_DEFINED__
typedef interface IUIAutomationCacheRequest IUIAutomationCacheRequest;

#endif 	/* __IUIAutomationCacheRequest_FWD_DEFINED__ */


#ifndef __IUIAutomationTreeWalker_FWD_DEFINED__
#define __IUIAutomationTreeWalker_FWD_DEFINED__
typedef interface IUIAutomationTreeWalker IUIAutomationTreeWalker;

#endif 	/* __IUIAutomationTreeWalker_FWD_DEFINED__ */


#ifndef __IUIAutomationEventHandler_FWD_DEFINED__
#define __IUIAutomationEventHandler_FWD_DEFINED__
typedef interface IUIAutomationEventHandler IUIAutomationEventHandler;

#endif 	/* __IUIAutomationEventHandler_FWD_DEFINED__ */


#ifndef __IUIAutomationPropertyChangedEventHandler_FWD_DEFINED__
#define __IUIAutomationPropertyChangedEventHandler_FWD_DEFINED__
typedef interface IUIAutomationPropertyChangedEventHandler IUIAutomationPropertyChangedEventHandler;

#endif 	/* __IUIAutomationPropertyChangedEventHandler_FWD_DEFINED__ */


#ifndef __IUIAutomationStructureChangedEventHandler_FWD_DEFINED__
#define __IUIAutomationStructureChangedEventHandler_FWD_DEFINED__
typedef interface IUIAutomationStructureChangedEventHandler IUIAutomationStructureChangedEventHandler;

#endif 	/* __IUIAutomationStructureChangedEventHandler_FWD_DEFINED__ */


#ifndef __IUIAutomationFocusChangedEventHandler_FWD_DEFINED__
#define __IUIAutomationFocusChangedEventHandler_FWD_DEFINED__
typedef interface IUIAutomationFocusChangedEventHandler IUIAutomationFocusChangedEventHandler;

#endif 	/* __IUIAutomationFocusChangedEventHandler_FWD_DEFINED__ */


#ifndef __IUIAutomationTextEditTextChangedEventHandler_FWD_DEFINED__
#define __IUIAutomationTextEditTextChangedEventHandler_FWD_DEFINED__
typedef interface IUIAutomationTextEditTextChangedEventHandler IUIAutomationTextEditTextChangedEventHandler;

#endif 	/* __IUIAutomationTextEditTextChangedEventHandler_FWD_DEFINED__ */


#ifndef __IUIAutomationChangesEventHandler_FWD_DEFINED__
#define __IUIAutomationChangesEventHandler_FWD_DEFINED__
typedef interface IUIAutomationChangesEventHandler IUIAutomationChangesEventHandler;

#endif 	/* __IUIAutomationChangesEventHandler_FWD_DEFINED__ */


#ifndef __IUIAutomationNotificationEventHandler_FWD_DEFINED__
#define __IUIAutomationNotificationEventHandler_FWD_DEFINED__
typedef interface IUIAutomationNotificationEventHandler IUIAutomationNotificationEventHandler;

#endif 	/* __IUIAutomationNotificationEventHandler_FWD_DEFINED__ */


#ifndef __IUIAutomationInvokePattern_FWD_DEFINED__
#define __IUIAutomationInvokePattern_FWD_DEFINED__
typedef interface IUIAutomationInvokePattern IUIAutomationInvokePattern;

#endif 	/* __IUIAutomationInvokePattern_FWD_DEFINED__ */


#ifndef __IUIAutomationDockPattern_FWD_DEFINED__
#define __IUIAutomationDockPattern_FWD_DEFINED__
typedef interface IUIAutomationDockPattern IUIAutomationDockPattern;

#endif 	/* __IUIAutomationDockPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationExpandCollapsePattern_FWD_DEFINED__
#define __IUIAutomationExpandCollapsePattern_FWD_DEFINED__
typedef interface IUIAutomationExpandCollapsePattern IUIAutomationExpandCollapsePattern;

#endif 	/* __IUIAutomationExpandCollapsePattern_FWD_DEFINED__ */


#ifndef __IUIAutomationGridPattern_FWD_DEFINED__
#define __IUIAutomationGridPattern_FWD_DEFINED__
typedef interface IUIAutomationGridPattern IUIAutomationGridPattern;

#endif 	/* __IUIAutomationGridPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationGridItemPattern_FWD_DEFINED__
#define __IUIAutomationGridItemPattern_FWD_DEFINED__
typedef interface IUIAutomationGridItemPattern IUIAutomationGridItemPattern;

#endif 	/* __IUIAutomationGridItemPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationMultipleViewPattern_FWD_DEFINED__
#define __IUIAutomationMultipleViewPattern_FWD_DEFINED__
typedef interface IUIAutomationMultipleViewPattern IUIAutomationMultipleViewPattern;

#endif 	/* __IUIAutomationMultipleViewPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationObjectModelPattern_FWD_DEFINED__
#define __IUIAutomationObjectModelPattern_FWD_DEFINED__
typedef interface IUIAutomationObjectModelPattern IUIAutomationObjectModelPattern;

#endif 	/* __IUIAutomationObjectModelPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationRangeValuePattern_FWD_DEFINED__
#define __IUIAutomationRangeValuePattern_FWD_DEFINED__
typedef interface IUIAutomationRangeValuePattern IUIAutomationRangeValuePattern;

#endif 	/* __IUIAutomationRangeValuePattern_FWD_DEFINED__ */


#ifndef __IUIAutomationScrollPattern_FWD_DEFINED__
#define __IUIAutomationScrollPattern_FWD_DEFINED__
typedef interface IUIAutomationScrollPattern IUIAutomationScrollPattern;

#endif 	/* __IUIAutomationScrollPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationScrollItemPattern_FWD_DEFINED__
#define __IUIAutomationScrollItemPattern_FWD_DEFINED__
typedef interface IUIAutomationScrollItemPattern IUIAutomationScrollItemPattern;

#endif 	/* __IUIAutomationScrollItemPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationSelectionPattern_FWD_DEFINED__
#define __IUIAutomationSelectionPattern_FWD_DEFINED__
typedef interface IUIAutomationSelectionPattern IUIAutomationSelectionPattern;

#endif 	/* __IUIAutomationSelectionPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationSelectionPattern2_FWD_DEFINED__
#define __IUIAutomationSelectionPattern2_FWD_DEFINED__
typedef interface IUIAutomationSelectionPattern2 IUIAutomationSelectionPattern2;

#endif 	/* __IUIAutomationSelectionPattern2_FWD_DEFINED__ */


#ifndef __IUIAutomationSelectionItemPattern_FWD_DEFINED__
#define __IUIAutomationSelectionItemPattern_FWD_DEFINED__
typedef interface IUIAutomationSelectionItemPattern IUIAutomationSelectionItemPattern;

#endif 	/* __IUIAutomationSelectionItemPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationSynchronizedInputPattern_FWD_DEFINED__
#define __IUIAutomationSynchronizedInputPattern_FWD_DEFINED__
typedef interface IUIAutomationSynchronizedInputPattern IUIAutomationSynchronizedInputPattern;

#endif 	/* __IUIAutomationSynchronizedInputPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationTablePattern_FWD_DEFINED__
#define __IUIAutomationTablePattern_FWD_DEFINED__
typedef interface IUIAutomationTablePattern IUIAutomationTablePattern;

#endif 	/* __IUIAutomationTablePattern_FWD_DEFINED__ */


#ifndef __IUIAutomationTableItemPattern_FWD_DEFINED__
#define __IUIAutomationTableItemPattern_FWD_DEFINED__
typedef interface IUIAutomationTableItemPattern IUIAutomationTableItemPattern;

#endif 	/* __IUIAutomationTableItemPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationTogglePattern_FWD_DEFINED__
#define __IUIAutomationTogglePattern_FWD_DEFINED__
typedef interface IUIAutomationTogglePattern IUIAutomationTogglePattern;

#endif 	/* __IUIAutomationTogglePattern_FWD_DEFINED__ */


#ifndef __IUIAutomationTransformPattern_FWD_DEFINED__
#define __IUIAutomationTransformPattern_FWD_DEFINED__
typedef interface IUIAutomationTransformPattern IUIAutomationTransformPattern;

#endif 	/* __IUIAutomationTransformPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationValuePattern_FWD_DEFINED__
#define __IUIAutomationValuePattern_FWD_DEFINED__
typedef interface IUIAutomationValuePattern IUIAutomationValuePattern;

#endif 	/* __IUIAutomationValuePattern_FWD_DEFINED__ */


#ifndef __IUIAutomationWindowPattern_FWD_DEFINED__
#define __IUIAutomationWindowPattern_FWD_DEFINED__
typedef interface IUIAutomationWindowPattern IUIAutomationWindowPattern;

#endif 	/* __IUIAutomationWindowPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationTextRange_FWD_DEFINED__
#define __IUIAutomationTextRange_FWD_DEFINED__
typedef interface IUIAutomationTextRange IUIAutomationTextRange;

#endif 	/* __IUIAutomationTextRange_FWD_DEFINED__ */


#ifndef __IUIAutomationTextRange2_FWD_DEFINED__
#define __IUIAutomationTextRange2_FWD_DEFINED__
typedef interface IUIAutomationTextRange2 IUIAutomationTextRange2;

#endif 	/* __IUIAutomationTextRange2_FWD_DEFINED__ */


#ifndef __IUIAutomationTextRange3_FWD_DEFINED__
#define __IUIAutomationTextRange3_FWD_DEFINED__
typedef interface IUIAutomationTextRange3 IUIAutomationTextRange3;

#endif 	/* __IUIAutomationTextRange3_FWD_DEFINED__ */


#ifndef __IUIAutomationTextRangeArray_FWD_DEFINED__
#define __IUIAutomationTextRangeArray_FWD_DEFINED__
typedef interface IUIAutomationTextRangeArray IUIAutomationTextRangeArray;

#endif 	/* __IUIAutomationTextRangeArray_FWD_DEFINED__ */


#ifndef __IUIAutomationTextPattern_FWD_DEFINED__
#define __IUIAutomationTextPattern_FWD_DEFINED__
typedef interface IUIAutomationTextPattern IUIAutomationTextPattern;

#endif 	/* __IUIAutomationTextPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationTextPattern2_FWD_DEFINED__
#define __IUIAutomationTextPattern2_FWD_DEFINED__
typedef interface IUIAutomationTextPattern2 IUIAutomationTextPattern2;

#endif 	/* __IUIAutomationTextPattern2_FWD_DEFINED__ */


#ifndef __IUIAutomationTextEditPattern_FWD_DEFINED__
#define __IUIAutomationTextEditPattern_FWD_DEFINED__
typedef interface IUIAutomationTextEditPattern IUIAutomationTextEditPattern;

#endif 	/* __IUIAutomationTextEditPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationCustomNavigationPattern_FWD_DEFINED__
#define __IUIAutomationCustomNavigationPattern_FWD_DEFINED__
typedef interface IUIAutomationCustomNavigationPattern IUIAutomationCustomNavigationPattern;

#endif 	/* __IUIAutomationCustomNavigationPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationLegacyIAccessiblePattern_FWD_DEFINED__
#define __IUIAutomationLegacyIAccessiblePattern_FWD_DEFINED__
typedef interface IUIAutomationLegacyIAccessiblePattern IUIAutomationLegacyIAccessiblePattern;

#endif 	/* __IUIAutomationLegacyIAccessiblePattern_FWD_DEFINED__ */


#ifndef __IUIAutomationItemContainerPattern_FWD_DEFINED__
#define __IUIAutomationItemContainerPattern_FWD_DEFINED__
typedef interface IUIAutomationItemContainerPattern IUIAutomationItemContainerPattern;

#endif 	/* __IUIAutomationItemContainerPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationVirtualizedItemPattern_FWD_DEFINED__
#define __IUIAutomationVirtualizedItemPattern_FWD_DEFINED__
typedef interface IUIAutomationVirtualizedItemPattern IUIAutomationVirtualizedItemPattern;

#endif 	/* __IUIAutomationVirtualizedItemPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationAnnotationPattern_FWD_DEFINED__
#define __IUIAutomationAnnotationPattern_FWD_DEFINED__
typedef interface IUIAutomationAnnotationPattern IUIAutomationAnnotationPattern;

#endif 	/* __IUIAutomationAnnotationPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationStylesPattern_FWD_DEFINED__
#define __IUIAutomationStylesPattern_FWD_DEFINED__
typedef interface IUIAutomationStylesPattern IUIAutomationStylesPattern;

#endif 	/* __IUIAutomationStylesPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationSpreadsheetPattern_FWD_DEFINED__
#define __IUIAutomationSpreadsheetPattern_FWD_DEFINED__
typedef interface IUIAutomationSpreadsheetPattern IUIAutomationSpreadsheetPattern;

#endif 	/* __IUIAutomationSpreadsheetPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationSpreadsheetItemPattern_FWD_DEFINED__
#define __IUIAutomationSpreadsheetItemPattern_FWD_DEFINED__
typedef interface IUIAutomationSpreadsheetItemPattern IUIAutomationSpreadsheetItemPattern;

#endif 	/* __IUIAutomationSpreadsheetItemPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationTransformPattern2_FWD_DEFINED__
#define __IUIAutomationTransformPattern2_FWD_DEFINED__
typedef interface IUIAutomationTransformPattern2 IUIAutomationTransformPattern2;

#endif 	/* __IUIAutomationTransformPattern2_FWD_DEFINED__ */


#ifndef __IUIAutomationTextChildPattern_FWD_DEFINED__
#define __IUIAutomationTextChildPattern_FWD_DEFINED__
typedef interface IUIAutomationTextChildPattern IUIAutomationTextChildPattern;

#endif 	/* __IUIAutomationTextChildPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationDragPattern_FWD_DEFINED__
#define __IUIAutomationDragPattern_FWD_DEFINED__
typedef interface IUIAutomationDragPattern IUIAutomationDragPattern;

#endif 	/* __IUIAutomationDragPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationDropTargetPattern_FWD_DEFINED__
#define __IUIAutomationDropTargetPattern_FWD_DEFINED__
typedef interface IUIAutomationDropTargetPattern IUIAutomationDropTargetPattern;

#endif 	/* __IUIAutomationDropTargetPattern_FWD_DEFINED__ */


#ifndef __IUIAutomationElement2_FWD_DEFINED__
#define __IUIAutomationElement2_FWD_DEFINED__
typedef interface IUIAutomationElement2 IUIAutomationElement2;

#endif 	/* __IUIAutomationElement2_FWD_DEFINED__ */


#ifndef __IUIAutomationElement3_FWD_DEFINED__
#define __IUIAutomationElement3_FWD_DEFINED__
typedef interface IUIAutomationElement3 IUIAutomationElement3;

#endif 	/* __IUIAutomationElement3_FWD_DEFINED__ */


#ifndef __IUIAutomationElement4_FWD_DEFINED__
#define __IUIAutomationElement4_FWD_DEFINED__
typedef interface IUIAutomationElement4 IUIAutomationElement4;

#endif 	/* __IUIAutomationElement4_FWD_DEFINED__ */


#ifndef __IUIAutomationElement5_FWD_DEFINED__
#define __IUIAutomationElement5_FWD_DEFINED__
typedef interface IUIAutomationElement5 IUIAutomationElement5;

#endif 	/* __IUIAutomationElement5_FWD_DEFINED__ */


#ifndef __IUIAutomationElement6_FWD_DEFINED__
#define __IUIAutomationElement6_FWD_DEFINED__
typedef interface IUIAutomationElement6 IUIAutomationElement6;

#endif 	/* __IUIAutomationElement6_FWD_DEFINED__ */


#ifndef __IUIAutomationElement7_FWD_DEFINED__
#define __IUIAutomationElement7_FWD_DEFINED__
typedef interface IUIAutomationElement7 IUIAutomationElement7;

#endif 	/* __IUIAutomationElement7_FWD_DEFINED__ */


#ifndef __IUIAutomationProxyFactory_FWD_DEFINED__
#define __IUIAutomationProxyFactory_FWD_DEFINED__
typedef interface IUIAutomationProxyFactory IUIAutomationProxyFactory;

#endif 	/* __IUIAutomationProxyFactory_FWD_DEFINED__ */


#ifndef __IUIAutomationProxyFactoryEntry_FWD_DEFINED__
#define __IUIAutomationProxyFactoryEntry_FWD_DEFINED__
typedef interface IUIAutomationProxyFactoryEntry IUIAutomationProxyFactoryEntry;

#endif 	/* __IUIAutomationProxyFactoryEntry_FWD_DEFINED__ */


#ifndef __IUIAutomationProxyFactoryMapping_FWD_DEFINED__
#define __IUIAutomationProxyFactoryMapping_FWD_DEFINED__
typedef interface IUIAutomationProxyFactoryMapping IUIAutomationProxyFactoryMapping;

#endif 	/* __IUIAutomationProxyFactoryMapping_FWD_DEFINED__ */


#ifndef __IUIAutomation_FWD_DEFINED__
#define __IUIAutomation_FWD_DEFINED__
typedef interface IUIAutomation IUIAutomation;

#endif 	/* __IUIAutomation_FWD_DEFINED__ */


#ifndef __IUIAutomation2_FWD_DEFINED__
#define __IUIAutomation2_FWD_DEFINED__
typedef interface IUIAutomation2 IUIAutomation2;

#endif 	/* __IUIAutomation2_FWD_DEFINED__ */


#ifndef __IUIAutomation3_FWD_DEFINED__
#define __IUIAutomation3_FWD_DEFINED__
typedef interface IUIAutomation3 IUIAutomation3;

#endif 	/* __IUIAutomation3_FWD_DEFINED__ */


#ifndef __IUIAutomation4_FWD_DEFINED__
#define __IUIAutomation4_FWD_DEFINED__
typedef interface IUIAutomation4 IUIAutomation4;

#endif 	/* __IUIAutomation4_FWD_DEFINED__ */


#ifndef __IUIAutomation5_FWD_DEFINED__
#define __IUIAutomation5_FWD_DEFINED__
typedef interface IUIAutomation5 IUIAutomation5;

#endif 	/* __IUIAutomation5_FWD_DEFINED__ */


#ifndef __CUIAutomation_FWD_DEFINED__
#define __CUIAutomation_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUIAutomation CUIAutomation;
#else
typedef struct CUIAutomation CUIAutomation;
#endif /* __cplusplus */

#endif 	/* __CUIAutomation_FWD_DEFINED__ */


#ifndef __CUIAutomation8_FWD_DEFINED__
#define __CUIAutomation8_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUIAutomation8 CUIAutomation8;
#else
typedef struct CUIAutomation8 CUIAutomation8;
#endif /* __cplusplus */

#endif 	/* __CUIAutomation8_FWD_DEFINED__ */


/* header files for imported files */
#include "UIAutomationCore.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_UIAutomationClient_0000_0000 */
/* [local] */ 

// -------------------------------------------------------------
// UIAutomationClient.H
//
// UIAutomation Client interface definitions and related types and enums
// (Generated from UIAutomationClient.idl)
//
// Copyright (c) Microsoft Corporation. All rights reserved.
// -------------------------------------------------------------
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#ifndef _INC_UIAUTOMATIONCOREAPI

enum TreeScope
    {
        TreeScope_None	= 0,
        TreeScope_Element	= 0x1,
        TreeScope_Children	= 0x2,
        TreeScope_Descendants	= 0x4,
        TreeScope_Parent	= 0x8,
        TreeScope_Ancestors	= 0x10,
        TreeScope_Subtree	= ( ( TreeScope_Element | TreeScope_Children )  | TreeScope_Descendants ) 
    } ;

enum PropertyConditionFlags
    {
        PropertyConditionFlags_None	= 0,
        PropertyConditionFlags_IgnoreCase	= 0x1
    } ;

enum AutomationElementMode
    {
        AutomationElementMode_None	= 0,
        AutomationElementMode_Full	= ( AutomationElementMode_None + 1 ) 
    } ;

enum TreeTraversalOptions
    {
        TreeTraversalOptions_Default	= 0,
        TreeTraversalOptions_PostOrder	= 0x1,
        TreeTraversalOptions_LastToFirstOrder	= 0x2
    } ;
#endif
struct ExtendedProperty
    {
    BSTR PropertyName;
    BSTR PropertyValue;
    } ;
typedef void *UIA_HWND;



extern RPC_IF_HANDLE __MIDL_itf_UIAutomationClient_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_UIAutomationClient_0000_0000_v0_0_s_ifspec;


#ifndef __UIAutomationClient_LIBRARY_DEFINED__
#define __UIAutomationClient_LIBRARY_DEFINED__

/* library UIAutomationClient */
/* [version][lcid][uuid] */ 




EXTERN_C const IID LIBID_UIAutomationClient;


#ifndef __UIA_PatternIds_MODULE_DEFINED__
#define __UIA_PatternIds_MODULE_DEFINED__


/* module UIA_PatternIds */
/* [dllname] */ 

const long UIA_InvokePatternId	=	10000;

const long UIA_SelectionPatternId	=	10001;

const long UIA_ValuePatternId	=	10002;

const long UIA_RangeValuePatternId	=	10003;

const long UIA_ScrollPatternId	=	10004;

const long UIA_ExpandCollapsePatternId	=	10005;

const long UIA_GridPatternId	=	10006;

const long UIA_GridItemPatternId	=	10007;

const long UIA_MultipleViewPatternId	=	10008;

const long UIA_WindowPatternId	=	10009;

const long UIA_SelectionItemPatternId	=	10010;

const long UIA_DockPatternId	=	10011;

const long UIA_TablePatternId	=	10012;

const long UIA_TableItemPatternId	=	10013;

const long UIA_TextPatternId	=	10014;

const long UIA_TogglePatternId	=	10015;

const long UIA_TransformPatternId	=	10016;

const long UIA_ScrollItemPatternId	=	10017;

const long UIA_LegacyIAccessiblePatternId	=	10018;

const long UIA_ItemContainerPatternId	=	10019;

const long UIA_VirtualizedItemPatternId	=	10020;

const long UIA_SynchronizedInputPatternId	=	10021;

const long UIA_ObjectModelPatternId	=	10022;

const long UIA_AnnotationPatternId	=	10023;

const long UIA_TextPattern2Id	=	10024;

const long UIA_StylesPatternId	=	10025;

const long UIA_SpreadsheetPatternId	=	10026;

const long UIA_SpreadsheetItemPatternId	=	10027;

const long UIA_TransformPattern2Id	=	10028;

const long UIA_TextChildPatternId	=	10029;

const long UIA_DragPatternId	=	10030;

const long UIA_DropTargetPatternId	=	10031;

const long UIA_TextEditPatternId	=	10032;

const long UIA_CustomNavigationPatternId	=	10033;

const long UIA_SelectionPattern2Id	=	10034;

#endif /* __UIA_PatternIds_MODULE_DEFINED__ */


#ifndef __UIA_EventIds_MODULE_DEFINED__
#define __UIA_EventIds_MODULE_DEFINED__


/* module UIA_EventIds */
/* [dllname] */ 

const long UIA_ToolTipOpenedEventId	=	20000;

const long UIA_ToolTipClosedEventId	=	20001;

const long UIA_StructureChangedEventId	=	20002;

const long UIA_MenuOpenedEventId	=	20003;

const long UIA_AutomationPropertyChangedEventId	=	20004;

const long UIA_AutomationFocusChangedEventId	=	20005;

const long UIA_AsyncContentLoadedEventId	=	20006;

const long UIA_MenuClosedEventId	=	20007;

const long UIA_LayoutInvalidatedEventId	=	20008;

const long UIA_Invoke_InvokedEventId	=	20009;

const long UIA_SelectionItem_ElementAddedToSelectionEventId	=	20010;

const long UIA_SelectionItem_ElementRemovedFromSelectionEventId	=	20011;

const long UIA_SelectionItem_ElementSelectedEventId	=	20012;

const long UIA_Selection_InvalidatedEventId	=	20013;

const long UIA_Text_TextSelectionChangedEventId	=	20014;

const long UIA_Text_TextChangedEventId	=	20015;

const long UIA_Window_WindowOpenedEventId	=	20016;

const long UIA_Window_WindowClosedEventId	=	20017;

const long UIA_MenuModeStartEventId	=	20018;

const long UIA_MenuModeEndEventId	=	20019;

const long UIA_InputReachedTargetEventId	=	20020;

const long UIA_InputReachedOtherElementEventId	=	20021;

const long UIA_InputDiscardedEventId	=	20022;

const long UIA_SystemAlertEventId	=	20023;

const long UIA_LiveRegionChangedEventId	=	20024;

const long UIA_HostedFragmentRootsInvalidatedEventId	=	20025;

const long UIA_Drag_DragStartEventId	=	20026;

const long UIA_Drag_DragCancelEventId	=	20027;

const long UIA_Drag_DragCompleteEventId	=	20028;

const long UIA_DropTarget_DragEnterEventId	=	20029;

const long UIA_DropTarget_DragLeaveEventId	=	20030;

const long UIA_DropTarget_DroppedEventId	=	20031;

const long UIA_TextEdit_TextChangedEventId	=	20032;

const long UIA_TextEdit_ConversionTargetChangedEventId	=	20033;

const long UIA_ChangesEventId	=	20034;

const long UIA_NotificationEventId	=	20035;

#endif /* __UIA_EventIds_MODULE_DEFINED__ */


#ifndef __UIA_PropertyIds_MODULE_DEFINED__
#define __UIA_PropertyIds_MODULE_DEFINED__


/* module UIA_PropertyIds */
/* [dllname] */ 

const long UIA_RuntimeIdPropertyId	=	30000;

const long UIA_BoundingRectanglePropertyId	=	30001;

const long UIA_ProcessIdPropertyId	=	30002;

const long UIA_ControlTypePropertyId	=	30003;

const long UIA_LocalizedControlTypePropertyId	=	30004;

const long UIA_NamePropertyId	=	30005;

const long UIA_AcceleratorKeyPropertyId	=	30006;

const long UIA_AccessKeyPropertyId	=	30007;

const long UIA_HasKeyboardFocusPropertyId	=	30008;

const long UIA_IsKeyboardFocusablePropertyId	=	30009;

const long UIA_IsEnabledPropertyId	=	30010;

const long UIA_AutomationIdPropertyId	=	30011;

const long UIA_ClassNamePropertyId	=	30012;

const long UIA_HelpTextPropertyId	=	30013;

const long UIA_ClickablePointPropertyId	=	30014;

const long UIA_CulturePropertyId	=	30015;

const long UIA_IsControlElementPropertyId	=	30016;

const long UIA_IsContentElementPropertyId	=	30017;

const long UIA_LabeledByPropertyId	=	30018;

const long UIA_IsPasswordPropertyId	=	30019;

const long UIA_NativeWindowHandlePropertyId	=	30020;

const long UIA_ItemTypePropertyId	=	30021;

const long UIA_IsOffscreenPropertyId	=	30022;

const long UIA_OrientationPropertyId	=	30023;

const long UIA_FrameworkIdPropertyId	=	30024;

const long UIA_IsRequiredForFormPropertyId	=	30025;

const long UIA_ItemStatusPropertyId	=	30026;

const long UIA_IsDockPatternAvailablePropertyId	=	30027;

const long UIA_IsExpandCollapsePatternAvailablePropertyId	=	30028;

const long UIA_IsGridItemPatternAvailablePropertyId	=	30029;

const long UIA_IsGridPatternAvailablePropertyId	=	30030;

const long UIA_IsInvokePatternAvailablePropertyId	=	30031;

const long UIA_IsMultipleViewPatternAvailablePropertyId	=	30032;

const long UIA_IsRangeValuePatternAvailablePropertyId	=	30033;

const long UIA_IsScrollPatternAvailablePropertyId	=	30034;

const long UIA_IsScrollItemPatternAvailablePropertyId	=	30035;

const long UIA_IsSelectionItemPatternAvailablePropertyId	=	30036;

const long UIA_IsSelectionPatternAvailablePropertyId	=	30037;

const long UIA_IsTablePatternAvailablePropertyId	=	30038;

const long UIA_IsTableItemPatternAvailablePropertyId	=	30039;

const long UIA_IsTextPatternAvailablePropertyId	=	30040;

const long UIA_IsTogglePatternAvailablePropertyId	=	30041;

const long UIA_IsTransformPatternAvailablePropertyId	=	30042;

const long UIA_IsValuePatternAvailablePropertyId	=	30043;

const long UIA_IsWindowPatternAvailablePropertyId	=	30044;

const long UIA_ValueValuePropertyId	=	30045;

const long UIA_ValueIsReadOnlyPropertyId	=	30046;

const long UIA_RangeValueValuePropertyId	=	30047;

const long UIA_RangeValueIsReadOnlyPropertyId	=	30048;

const long UIA_RangeValueMinimumPropertyId	=	30049;

const long UIA_RangeValueMaximumPropertyId	=	30050;

const long UIA_RangeValueLargeChangePropertyId	=	30051;

const long UIA_RangeValueSmallChangePropertyId	=	30052;

const long UIA_ScrollHorizontalScrollPercentPropertyId	=	30053;

const long UIA_ScrollHorizontalViewSizePropertyId	=	30054;

const long UIA_ScrollVerticalScrollPercentPropertyId	=	30055;

const long UIA_ScrollVerticalViewSizePropertyId	=	30056;

const long UIA_ScrollHorizontallyScrollablePropertyId	=	30057;

const long UIA_ScrollVerticallyScrollablePropertyId	=	30058;

const long UIA_SelectionSelectionPropertyId	=	30059;

const long UIA_SelectionCanSelectMultiplePropertyId	=	30060;

const long UIA_SelectionIsSelectionRequiredPropertyId	=	30061;

const long UIA_GridRowCountPropertyId	=	30062;

const long UIA_GridColumnCountPropertyId	=	30063;

const long UIA_GridItemRowPropertyId	=	30064;

const long UIA_GridItemColumnPropertyId	=	30065;

const long UIA_GridItemRowSpanPropertyId	=	30066;

const long UIA_GridItemColumnSpanPropertyId	=	30067;

const long UIA_GridItemContainingGridPropertyId	=	30068;

const long UIA_DockDockPositionPropertyId	=	30069;

const long UIA_ExpandCollapseExpandCollapseStatePropertyId	=	30070;

const long UIA_MultipleViewCurrentViewPropertyId	=	30071;

const long UIA_MultipleViewSupportedViewsPropertyId	=	30072;

const long UIA_WindowCanMaximizePropertyId	=	30073;

const long UIA_WindowCanMinimizePropertyId	=	30074;

const long UIA_WindowWindowVisualStatePropertyId	=	30075;

const long UIA_WindowWindowInteractionStatePropertyId	=	30076;

const long UIA_WindowIsModalPropertyId	=	30077;

const long UIA_WindowIsTopmostPropertyId	=	30078;

const long UIA_SelectionItemIsSelectedPropertyId	=	30079;

const long UIA_SelectionItemSelectionContainerPropertyId	=	30080;

const long UIA_TableRowHeadersPropertyId	=	30081;

const long UIA_TableColumnHeadersPropertyId	=	30082;

const long UIA_TableRowOrColumnMajorPropertyId	=	30083;

const long UIA_TableItemRowHeaderItemsPropertyId	=	30084;

const long UIA_TableItemColumnHeaderItemsPropertyId	=	30085;

const long UIA_ToggleToggleStatePropertyId	=	30086;

const long UIA_TransformCanMovePropertyId	=	30087;

const long UIA_TransformCanResizePropertyId	=	30088;

const long UIA_TransformCanRotatePropertyId	=	30089;

const long UIA_IsLegacyIAccessiblePatternAvailablePropertyId	=	30090;

const long UIA_LegacyIAccessibleChildIdPropertyId	=	30091;

const long UIA_LegacyIAccessibleNamePropertyId	=	30092;

const long UIA_LegacyIAccessibleValuePropertyId	=	30093;

const long UIA_LegacyIAccessibleDescriptionPropertyId	=	30094;

const long UIA_LegacyIAccessibleRolePropertyId	=	30095;

const long UIA_LegacyIAccessibleStatePropertyId	=	30096;

const long UIA_LegacyIAccessibleHelpPropertyId	=	30097;

const long UIA_LegacyIAccessibleKeyboardShortcutPropertyId	=	30098;

const long UIA_LegacyIAccessibleSelectionPropertyId	=	30099;

const long UIA_LegacyIAccessibleDefaultActionPropertyId	=	30100;

const long UIA_AriaRolePropertyId	=	30101;

const long UIA_AriaPropertiesPropertyId	=	30102;

const long UIA_IsDataValidForFormPropertyId	=	30103;

const long UIA_ControllerForPropertyId	=	30104;

const long UIA_DescribedByPropertyId	=	30105;

const long UIA_FlowsToPropertyId	=	30106;

const long UIA_ProviderDescriptionPropertyId	=	30107;

const long UIA_IsItemContainerPatternAvailablePropertyId	=	30108;

const long UIA_IsVirtualizedItemPatternAvailablePropertyId	=	30109;

const long UIA_IsSynchronizedInputPatternAvailablePropertyId	=	30110;

const long UIA_OptimizeForVisualContentPropertyId	=	30111;

const long UIA_IsObjectModelPatternAvailablePropertyId	=	30112;

const long UIA_AnnotationAnnotationTypeIdPropertyId	=	30113;

const long UIA_AnnotationAnnotationTypeNamePropertyId	=	30114;

const long UIA_AnnotationAuthorPropertyId	=	30115;

const long UIA_AnnotationDateTimePropertyId	=	30116;

const long UIA_AnnotationTargetPropertyId	=	30117;

const long UIA_IsAnnotationPatternAvailablePropertyId	=	30118;

const long UIA_IsTextPattern2AvailablePropertyId	=	30119;

const long UIA_StylesStyleIdPropertyId	=	30120;

const long UIA_StylesStyleNamePropertyId	=	30121;

const long UIA_StylesFillColorPropertyId	=	30122;

const long UIA_StylesFillPatternStylePropertyId	=	30123;

const long UIA_StylesShapePropertyId	=	30124;

const long UIA_StylesFillPatternColorPropertyId	=	30125;

const long UIA_StylesExtendedPropertiesPropertyId	=	30126;

const long UIA_IsStylesPatternAvailablePropertyId	=	30127;

const long UIA_IsSpreadsheetPatternAvailablePropertyId	=	30128;

const long UIA_SpreadsheetItemFormulaPropertyId	=	30129;

const long UIA_SpreadsheetItemAnnotationObjectsPropertyId	=	30130;

const long UIA_SpreadsheetItemAnnotationTypesPropertyId	=	30131;

const long UIA_IsSpreadsheetItemPatternAvailablePropertyId	=	30132;

const long UIA_Transform2CanZoomPropertyId	=	30133;

const long UIA_IsTransformPattern2AvailablePropertyId	=	30134;

const long UIA_LiveSettingPropertyId	=	30135;

const long UIA_IsTextChildPatternAvailablePropertyId	=	30136;

const long UIA_IsDragPatternAvailablePropertyId	=	30137;

const long UIA_DragIsGrabbedPropertyId	=	30138;

const long UIA_DragDropEffectPropertyId	=	30139;

const long UIA_DragDropEffectsPropertyId	=	30140;

const long UIA_IsDropTargetPatternAvailablePropertyId	=	30141;

const long UIA_DropTargetDropTargetEffectPropertyId	=	30142;

const long UIA_DropTargetDropTargetEffectsPropertyId	=	30143;

const long UIA_DragGrabbedItemsPropertyId	=	30144;

const long UIA_Transform2ZoomLevelPropertyId	=	30145;

const long UIA_Transform2ZoomMinimumPropertyId	=	30146;

const long UIA_Transform2ZoomMaximumPropertyId	=	30147;

const long UIA_FlowsFromPropertyId	=	30148;

const long UIA_IsTextEditPatternAvailablePropertyId	=	30149;

const long UIA_IsPeripheralPropertyId	=	30150;

const long UIA_IsCustomNavigationPatternAvailablePropertyId	=	30151;

const long UIA_PositionInSetPropertyId	=	30152;

const long UIA_SizeOfSetPropertyId	=	30153;

const long UIA_LevelPropertyId	=	30154;

const long UIA_AnnotationTypesPropertyId	=	30155;

const long UIA_AnnotationObjectsPropertyId	=	30156;

const long UIA_LandmarkTypePropertyId	=	30157;

const long UIA_LocalizedLandmarkTypePropertyId	=	30158;

const long UIA_FullDescriptionPropertyId	=	30159;

const long UIA_FillColorPropertyId	=	30160;

const long UIA_OutlineColorPropertyId	=	30161;

const long UIA_FillTypePropertyId	=	30162;

const long UIA_VisualEffectsPropertyId	=	30163;

const long UIA_OutlineThicknessPropertyId	=	30164;

const long UIA_CenterPointPropertyId	=	30165;

const long UIA_RotationPropertyId	=	30166;

const long UIA_SizePropertyId	=	30167;

const long UIA_IsSelectionPattern2AvailablePropertyId	=	30168;

const long UIA_Selection2FirstSelectedItemPropertyId	=	30169;

const long UIA_Selection2LastSelectedItemPropertyId	=	30170;

const long UIA_Selection2CurrentSelectedItemPropertyId	=	30171;

const long UIA_Selection2ItemCountPropertyId	=	30172;

#endif /* __UIA_PropertyIds_MODULE_DEFINED__ */


#ifndef __UIA_TextAttributeIds_MODULE_DEFINED__
#define __UIA_TextAttributeIds_MODULE_DEFINED__


/* module UIA_TextAttributeIds */
/* [dllname] */ 

const long UIA_AnimationStyleAttributeId	=	40000;

const long UIA_BackgroundColorAttributeId	=	40001;

const long UIA_BulletStyleAttributeId	=	40002;

const long UIA_CapStyleAttributeId	=	40003;

const long UIA_CultureAttributeId	=	40004;

const long UIA_FontNameAttributeId	=	40005;

const long UIA_FontSizeAttributeId	=	40006;

const long UIA_FontWeightAttributeId	=	40007;

const long UIA_ForegroundColorAttributeId	=	40008;

const long UIA_HorizontalTextAlignmentAttributeId	=	40009;

const long UIA_IndentationFirstLineAttributeId	=	40010;

const long UIA_IndentationLeadingAttributeId	=	40011;

const long UIA_IndentationTrailingAttributeId	=	40012;

const long UIA_IsHiddenAttributeId	=	40013;

const long UIA_IsItalicAttributeId	=	40014;

const long UIA_IsReadOnlyAttributeId	=	40015;

const long UIA_IsSubscriptAttributeId	=	40016;

const long UIA_IsSuperscriptAttributeId	=	40017;

const long UIA_MarginBottomAttributeId	=	40018;

const long UIA_MarginLeadingAttributeId	=	40019;

const long UIA_MarginTopAttributeId	=	40020;

const long UIA_MarginTrailingAttributeId	=	40021;

const long UIA_OutlineStylesAttributeId	=	40022;

const long UIA_OverlineColorAttributeId	=	40023;

const long UIA_OverlineStyleAttributeId	=	40024;

const long UIA_StrikethroughColorAttributeId	=	40025;

const long UIA_StrikethroughStyleAttributeId	=	40026;

const long UIA_TabsAttributeId	=	40027;

const long UIA_TextFlowDirectionsAttributeId	=	40028;

const long UIA_UnderlineColorAttributeId	=	40029;

const long UIA_UnderlineStyleAttributeId	=	40030;

const long UIA_AnnotationTypesAttributeId	=	40031;

const long UIA_AnnotationObjectsAttributeId	=	40032;

const long UIA_StyleNameAttributeId	=	40033;

const long UIA_StyleIdAttributeId	=	40034;

const long UIA_LinkAttributeId	=	40035;

const long UIA_IsActiveAttributeId	=	40036;

const long UIA_SelectionActiveEndAttributeId	=	40037;

const long UIA_CaretPositionAttributeId	=	40038;

const long UIA_CaretBidiModeAttributeId	=	40039;

const long UIA_LineSpacingAttributeId	=	40040;

const long UIA_BeforeParagraphSpacingAttributeId	=	40041;

const long UIA_AfterParagraphSpacingAttributeId	=	40042;

const long UIA_SayAsInterpretAsAttributeId	=	40043;

#endif /* __UIA_TextAttributeIds_MODULE_DEFINED__ */


#ifndef __UIA_ControlTypeIds_MODULE_DEFINED__
#define __UIA_ControlTypeIds_MODULE_DEFINED__


/* module UIA_ControlTypeIds */
/* [dllname] */ 

const long UIA_ButtonControlTypeId	=	50000;

const long UIA_CalendarControlTypeId	=	50001;

const long UIA_CheckBoxControlTypeId	=	50002;

const long UIA_ComboBoxControlTypeId	=	50003;

const long UIA_EditControlTypeId	=	50004;

const long UIA_HyperlinkControlTypeId	=	50005;

const long UIA_ImageControlTypeId	=	50006;

const long UIA_ListItemControlTypeId	=	50007;

const long UIA_ListControlTypeId	=	50008;

const long UIA_MenuControlTypeId	=	50009;

const long UIA_MenuBarControlTypeId	=	50010;

const long UIA_MenuItemControlTypeId	=	50011;

const long UIA_ProgressBarControlTypeId	=	50012;

const long UIA_RadioButtonControlTypeId	=	50013;

const long UIA_ScrollBarControlTypeId	=	50014;

const long UIA_SliderControlTypeId	=	50015;

const long UIA_SpinnerControlTypeId	=	50016;

const long UIA_StatusBarControlTypeId	=	50017;

const long UIA_TabControlTypeId	=	50018;

const long UIA_TabItemControlTypeId	=	50019;

const long UIA_TextControlTypeId	=	50020;

const long UIA_ToolBarControlTypeId	=	50021;

const long UIA_ToolTipControlTypeId	=	50022;

const long UIA_TreeControlTypeId	=	50023;

const long UIA_TreeItemControlTypeId	=	50024;

const long UIA_CustomControlTypeId	=	50025;

const long UIA_GroupControlTypeId	=	50026;

const long UIA_ThumbControlTypeId	=	50027;

const long UIA_DataGridControlTypeId	=	50028;

const long UIA_DataItemControlTypeId	=	50029;

const long UIA_DocumentControlTypeId	=	50030;

const long UIA_SplitButtonControlTypeId	=	50031;

const long UIA_WindowControlTypeId	=	50032;

const long UIA_PaneControlTypeId	=	50033;

const long UIA_HeaderControlTypeId	=	50034;

const long UIA_HeaderItemControlTypeId	=	50035;

const long UIA_TableControlTypeId	=	50036;

const long UIA_TitleBarControlTypeId	=	50037;

const long UIA_SeparatorControlTypeId	=	50038;

const long UIA_SemanticZoomControlTypeId	=	50039;

const long UIA_AppBarControlTypeId	=	50040;

#endif /* __UIA_ControlTypeIds_MODULE_DEFINED__ */


#ifndef __UIA_AnnotationTypes_MODULE_DEFINED__
#define __UIA_AnnotationTypes_MODULE_DEFINED__


/* module UIA_AnnotationTypes */
/* [dllname] */ 

const long AnnotationType_Unknown	=	60000;

const long AnnotationType_SpellingError	=	60001;

const long AnnotationType_GrammarError	=	60002;

const long AnnotationType_Comment	=	60003;

const long AnnotationType_FormulaError	=	60004;

const long AnnotationType_TrackChanges	=	60005;

const long AnnotationType_Header	=	60006;

const long AnnotationType_Footer	=	60007;

const long AnnotationType_Highlighted	=	60008;

const long AnnotationType_Endnote	=	60009;

const long AnnotationType_Footnote	=	60010;

const long AnnotationType_InsertionChange	=	60011;

const long AnnotationType_DeletionChange	=	60012;

const long AnnotationType_MoveChange	=	60013;

const long AnnotationType_FormatChange	=	60014;

const long AnnotationType_UnsyncedChange	=	60015;

const long AnnotationType_EditingLockedChange	=	60016;

const long AnnotationType_ExternalChange	=	60017;

const long AnnotationType_ConflictingChange	=	60018;

const long AnnotationType_Author	=	60019;

const long AnnotationType_AdvancedProofingIssue	=	60020;

const long AnnotationType_DataValidationError	=	60021;

const long AnnotationType_CircularReferenceError	=	60022;

const long AnnotationType_Mathematics	=	60023;

#endif /* __UIA_AnnotationTypes_MODULE_DEFINED__ */


#ifndef __UIA_StyleIds_MODULE_DEFINED__
#define __UIA_StyleIds_MODULE_DEFINED__


/* module UIA_StyleIds */
/* [dllname] */ 

const long StyleId_Custom	=	70000;

const long StyleId_Heading1	=	70001;

const long StyleId_Heading2	=	70002;

const long StyleId_Heading3	=	70003;

const long StyleId_Heading4	=	70004;

const long StyleId_Heading5	=	70005;

const long StyleId_Heading6	=	70006;

const long StyleId_Heading7	=	70007;

const long StyleId_Heading8	=	70008;

const long StyleId_Heading9	=	70009;

const long StyleId_Title	=	70010;

const long StyleId_Subtitle	=	70011;

const long StyleId_Normal	=	70012;

const long StyleId_Emphasis	=	70013;

const long StyleId_Quote	=	70014;

const long StyleId_BulletedList	=	70015;

const long StyleId_NumberedList	=	70016;

#endif /* __UIA_StyleIds_MODULE_DEFINED__ */


#ifndef __UIA_LandmarkTypeIds_MODULE_DEFINED__
#define __UIA_LandmarkTypeIds_MODULE_DEFINED__


/* module UIA_LandmarkTypeIds */
/* [dllname] */ 

const long UIA_CustomLandmarkTypeId	=	80000;

const long UIA_FormLandmarkTypeId	=	80001;

const long UIA_MainLandmarkTypeId	=	80002;

const long UIA_NavigationLandmarkTypeId	=	80003;

const long UIA_SearchLandmarkTypeId	=	80004;

#endif /* __UIA_LandmarkTypeIds_MODULE_DEFINED__ */


#ifndef __UIA_ChangeIds_MODULE_DEFINED__
#define __UIA_ChangeIds_MODULE_DEFINED__


/* module UIA_ChangeIds */
/* [dllname] */ 

const long UIA_SummaryChangeId	=	90000;

#endif /* __UIA_ChangeIds_MODULE_DEFINED__ */


#ifndef __UIA_MetadataIds_MODULE_DEFINED__
#define __UIA_MetadataIds_MODULE_DEFINED__


/* module UIA_MetadataIds */
/* [dllname] */ 

const long UIA_SayAsInterpretAsMetadataId	=	100000;

#endif /* __UIA_MetadataIds_MODULE_DEFINED__ */

#ifndef __IUIAutomationElement_INTERFACE_DEFINED__
#define __IUIAutomationElement_INTERFACE_DEFINED__

/* interface IUIAutomationElement */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationElement;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d22108aa-8ac5-49a5-837b-37bbb3d7591e")
    IUIAutomationElement : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetFocus( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRuntimeId( 
            /* [retval][out] */ SAFEARRAY * *runtimeId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindFirst( 
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [retval][out] */ IUIAutomationElement **found) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindAll( 
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [retval][out] */ IUIAutomationElementArray **found) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindFirstBuildCache( 
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **found) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindAllBuildCache( 
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElementArray **found) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BuildUpdatedCache( 
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **updatedElement) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentPropertyValue( 
            /* [in] */ PROPERTYID propertyId,
            /* [retval][out] */ VARIANT *retVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentPropertyValueEx( 
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ BOOL ignoreDefaultValue,
            /* [retval][out] */ VARIANT *retVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCachedPropertyValue( 
            /* [in] */ PROPERTYID propertyId,
            /* [retval][out] */ VARIANT *retVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCachedPropertyValueEx( 
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ BOOL ignoreDefaultValue,
            /* [retval][out] */ VARIANT *retVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentPatternAs( 
            /* [in] */ PATTERNID patternId,
            /* [in] */ REFIID riid,
            /* [retval][iid_is][out] */ void **patternObject) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCachedPatternAs( 
            /* [in] */ PATTERNID patternId,
            /* [in] */ REFIID riid,
            /* [retval][iid_is][out] */ void **patternObject) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentPattern( 
            /* [in] */ PATTERNID patternId,
            /* [retval][out] */ IUnknown **patternObject) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCachedPattern( 
            /* [in] */ PATTERNID patternId,
            /* [retval][out] */ IUnknown **patternObject) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCachedParent( 
            /* [retval][out] */ IUIAutomationElement **parent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCachedChildren( 
            /* [retval][out] */ IUIAutomationElementArray **children) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentProcessId( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentControlType( 
            /* [retval][out] */ CONTROLTYPEID *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentLocalizedControlType( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentName( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentAcceleratorKey( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentAccessKey( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentHasKeyboardFocus( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsKeyboardFocusable( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsEnabled( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentAutomationId( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentClassName( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentHelpText( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentCulture( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsControlElement( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsContentElement( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsPassword( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentNativeWindowHandle( 
            /* [retval][out] */ UIA_HWND *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentItemType( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsOffscreen( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentOrientation( 
            /* [retval][out] */ enum OrientationType *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentFrameworkId( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsRequiredForForm( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentItemStatus( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentBoundingRectangle( 
            /* [retval][out] */ RECT *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentLabeledBy( 
            /* [retval][out] */ IUIAutomationElement **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentAriaRole( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentAriaProperties( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsDataValidForForm( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentControllerFor( 
            /* [retval][out] */ IUIAutomationElementArray **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentDescribedBy( 
            /* [retval][out] */ IUIAutomationElementArray **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentFlowsTo( 
            /* [retval][out] */ IUIAutomationElementArray **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentProviderDescription( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedProcessId( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedControlType( 
            /* [retval][out] */ CONTROLTYPEID *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedLocalizedControlType( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedName( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedAcceleratorKey( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedAccessKey( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedHasKeyboardFocus( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsKeyboardFocusable( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsEnabled( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedAutomationId( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedClassName( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedHelpText( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedCulture( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsControlElement( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsContentElement( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsPassword( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedNativeWindowHandle( 
            /* [retval][out] */ UIA_HWND *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedItemType( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsOffscreen( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedOrientation( 
            /* [retval][out] */ enum OrientationType *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedFrameworkId( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsRequiredForForm( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedItemStatus( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedBoundingRectangle( 
            /* [retval][out] */ RECT *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedLabeledBy( 
            /* [retval][out] */ IUIAutomationElement **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedAriaRole( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedAriaProperties( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsDataValidForForm( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedControllerFor( 
            /* [retval][out] */ IUIAutomationElementArray **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedDescribedBy( 
            /* [retval][out] */ IUIAutomationElementArray **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedFlowsTo( 
            /* [retval][out] */ IUIAutomationElementArray **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedProviderDescription( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClickablePoint( 
            /* [out] */ POINT *clickable,
            /* [retval][out] */ BOOL *gotClickable) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationElementVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationElement * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationElement * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationElement * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetFocus )( 
            IUIAutomationElement * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeId )( 
            IUIAutomationElement * This,
            /* [retval][out] */ SAFEARRAY * *runtimeId);
        
        HRESULT ( STDMETHODCALLTYPE *FindFirst )( 
            IUIAutomationElement * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [retval][out] */ IUIAutomationElement **found);
        
        HRESULT ( STDMETHODCALLTYPE *FindAll )( 
            IUIAutomationElement * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [retval][out] */ IUIAutomationElementArray **found);
        
        HRESULT ( STDMETHODCALLTYPE *FindFirstBuildCache )( 
            IUIAutomationElement * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **found);
        
        HRESULT ( STDMETHODCALLTYPE *FindAllBuildCache )( 
            IUIAutomationElement * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElementArray **found);
        
        HRESULT ( STDMETHODCALLTYPE *BuildUpdatedCache )( 
            IUIAutomationElement * This,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **updatedElement);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPropertyValue )( 
            IUIAutomationElement * This,
            /* [in] */ PROPERTYID propertyId,
            /* [retval][out] */ VARIANT *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPropertyValueEx )( 
            IUIAutomationElement * This,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ BOOL ignoreDefaultValue,
            /* [retval][out] */ VARIANT *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedPropertyValue )( 
            IUIAutomationElement * This,
            /* [in] */ PROPERTYID propertyId,
            /* [retval][out] */ VARIANT *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedPropertyValueEx )( 
            IUIAutomationElement * This,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ BOOL ignoreDefaultValue,
            /* [retval][out] */ VARIANT *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPatternAs )( 
            IUIAutomationElement * This,
            /* [in] */ PATTERNID patternId,
            /* [in] */ REFIID riid,
            /* [retval][iid_is][out] */ void **patternObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedPatternAs )( 
            IUIAutomationElement * This,
            /* [in] */ PATTERNID patternId,
            /* [in] */ REFIID riid,
            /* [retval][iid_is][out] */ void **patternObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPattern )( 
            IUIAutomationElement * This,
            /* [in] */ PATTERNID patternId,
            /* [retval][out] */ IUnknown **patternObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedPattern )( 
            IUIAutomationElement * This,
            /* [in] */ PATTERNID patternId,
            /* [retval][out] */ IUnknown **patternObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedParent )( 
            IUIAutomationElement * This,
            /* [retval][out] */ IUIAutomationElement **parent);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedChildren )( 
            IUIAutomationElement * This,
            /* [retval][out] */ IUIAutomationElementArray **children);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentProcessId )( 
            IUIAutomationElement * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentControlType )( 
            IUIAutomationElement * This,
            /* [retval][out] */ CONTROLTYPEID *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLocalizedControlType )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentName )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAcceleratorKey )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAccessKey )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentHasKeyboardFocus )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsKeyboardFocusable )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsEnabled )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAutomationId )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentClassName )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentHelpText )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentCulture )( 
            IUIAutomationElement * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsControlElement )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsContentElement )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsPassword )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentNativeWindowHandle )( 
            IUIAutomationElement * This,
            /* [retval][out] */ UIA_HWND *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentItemType )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsOffscreen )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentOrientation )( 
            IUIAutomationElement * This,
            /* [retval][out] */ enum OrientationType *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentFrameworkId )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsRequiredForForm )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentItemStatus )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentBoundingRectangle )( 
            IUIAutomationElement * This,
            /* [retval][out] */ RECT *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLabeledBy )( 
            IUIAutomationElement * This,
            /* [retval][out] */ IUIAutomationElement **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAriaRole )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAriaProperties )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsDataValidForForm )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentControllerFor )( 
            IUIAutomationElement * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentDescribedBy )( 
            IUIAutomationElement * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentFlowsTo )( 
            IUIAutomationElement * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentProviderDescription )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedProcessId )( 
            IUIAutomationElement * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedControlType )( 
            IUIAutomationElement * This,
            /* [retval][out] */ CONTROLTYPEID *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedLocalizedControlType )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedName )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAcceleratorKey )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAccessKey )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedHasKeyboardFocus )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsKeyboardFocusable )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsEnabled )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAutomationId )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedClassName )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedHelpText )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedCulture )( 
            IUIAutomationElement * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsControlElement )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsContentElement )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsPassword )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedNativeWindowHandle )( 
            IUIAutomationElement * This,
            /* [retval][out] */ UIA_HWND *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedItemType )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsOffscreen )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedOrientation )( 
            IUIAutomationElement * This,
            /* [retval][out] */ enum OrientationType *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedFrameworkId )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsRequiredForForm )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedItemStatus )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedBoundingRectangle )( 
            IUIAutomationElement * This,
            /* [retval][out] */ RECT *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedLabeledBy )( 
            IUIAutomationElement * This,
            /* [retval][out] */ IUIAutomationElement **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAriaRole )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAriaProperties )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsDataValidForForm )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedControllerFor )( 
            IUIAutomationElement * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedDescribedBy )( 
            IUIAutomationElement * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedFlowsTo )( 
            IUIAutomationElement * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedProviderDescription )( 
            IUIAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetClickablePoint )( 
            IUIAutomationElement * This,
            /* [out] */ POINT *clickable,
            /* [retval][out] */ BOOL *gotClickable);
        
        END_INTERFACE
    } IUIAutomationElementVtbl;

    interface IUIAutomationElement
    {
        CONST_VTBL struct IUIAutomationElementVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationElement_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationElement_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationElement_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationElement_SetFocus(This)	\
    ( (This)->lpVtbl -> SetFocus(This) ) 

#define IUIAutomationElement_GetRuntimeId(This,runtimeId)	\
    ( (This)->lpVtbl -> GetRuntimeId(This,runtimeId) ) 

#define IUIAutomationElement_FindFirst(This,scope,condition,found)	\
    ( (This)->lpVtbl -> FindFirst(This,scope,condition,found) ) 

#define IUIAutomationElement_FindAll(This,scope,condition,found)	\
    ( (This)->lpVtbl -> FindAll(This,scope,condition,found) ) 

#define IUIAutomationElement_FindFirstBuildCache(This,scope,condition,cacheRequest,found)	\
    ( (This)->lpVtbl -> FindFirstBuildCache(This,scope,condition,cacheRequest,found) ) 

#define IUIAutomationElement_FindAllBuildCache(This,scope,condition,cacheRequest,found)	\
    ( (This)->lpVtbl -> FindAllBuildCache(This,scope,condition,cacheRequest,found) ) 

#define IUIAutomationElement_BuildUpdatedCache(This,cacheRequest,updatedElement)	\
    ( (This)->lpVtbl -> BuildUpdatedCache(This,cacheRequest,updatedElement) ) 

#define IUIAutomationElement_GetCurrentPropertyValue(This,propertyId,retVal)	\
    ( (This)->lpVtbl -> GetCurrentPropertyValue(This,propertyId,retVal) ) 

#define IUIAutomationElement_GetCurrentPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal)	\
    ( (This)->lpVtbl -> GetCurrentPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) ) 

#define IUIAutomationElement_GetCachedPropertyValue(This,propertyId,retVal)	\
    ( (This)->lpVtbl -> GetCachedPropertyValue(This,propertyId,retVal) ) 

#define IUIAutomationElement_GetCachedPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal)	\
    ( (This)->lpVtbl -> GetCachedPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) ) 

#define IUIAutomationElement_GetCurrentPatternAs(This,patternId,riid,patternObject)	\
    ( (This)->lpVtbl -> GetCurrentPatternAs(This,patternId,riid,patternObject) ) 

#define IUIAutomationElement_GetCachedPatternAs(This,patternId,riid,patternObject)	\
    ( (This)->lpVtbl -> GetCachedPatternAs(This,patternId,riid,patternObject) ) 

#define IUIAutomationElement_GetCurrentPattern(This,patternId,patternObject)	\
    ( (This)->lpVtbl -> GetCurrentPattern(This,patternId,patternObject) ) 

#define IUIAutomationElement_GetCachedPattern(This,patternId,patternObject)	\
    ( (This)->lpVtbl -> GetCachedPattern(This,patternId,patternObject) ) 

#define IUIAutomationElement_GetCachedParent(This,parent)	\
    ( (This)->lpVtbl -> GetCachedParent(This,parent) ) 

#define IUIAutomationElement_GetCachedChildren(This,children)	\
    ( (This)->lpVtbl -> GetCachedChildren(This,children) ) 

#define IUIAutomationElement_get_CurrentProcessId(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentProcessId(This,retVal) ) 

#define IUIAutomationElement_get_CurrentControlType(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentControlType(This,retVal) ) 

#define IUIAutomationElement_get_CurrentLocalizedControlType(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLocalizedControlType(This,retVal) ) 

#define IUIAutomationElement_get_CurrentName(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentName(This,retVal) ) 

#define IUIAutomationElement_get_CurrentAcceleratorKey(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAcceleratorKey(This,retVal) ) 

#define IUIAutomationElement_get_CurrentAccessKey(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAccessKey(This,retVal) ) 

#define IUIAutomationElement_get_CurrentHasKeyboardFocus(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentHasKeyboardFocus(This,retVal) ) 

#define IUIAutomationElement_get_CurrentIsKeyboardFocusable(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsKeyboardFocusable(This,retVal) ) 

#define IUIAutomationElement_get_CurrentIsEnabled(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsEnabled(This,retVal) ) 

#define IUIAutomationElement_get_CurrentAutomationId(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAutomationId(This,retVal) ) 

#define IUIAutomationElement_get_CurrentClassName(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentClassName(This,retVal) ) 

#define IUIAutomationElement_get_CurrentHelpText(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentHelpText(This,retVal) ) 

#define IUIAutomationElement_get_CurrentCulture(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentCulture(This,retVal) ) 

#define IUIAutomationElement_get_CurrentIsControlElement(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsControlElement(This,retVal) ) 

#define IUIAutomationElement_get_CurrentIsContentElement(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsContentElement(This,retVal) ) 

#define IUIAutomationElement_get_CurrentIsPassword(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsPassword(This,retVal) ) 

#define IUIAutomationElement_get_CurrentNativeWindowHandle(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentNativeWindowHandle(This,retVal) ) 

#define IUIAutomationElement_get_CurrentItemType(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentItemType(This,retVal) ) 

#define IUIAutomationElement_get_CurrentIsOffscreen(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsOffscreen(This,retVal) ) 

#define IUIAutomationElement_get_CurrentOrientation(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentOrientation(This,retVal) ) 

#define IUIAutomationElement_get_CurrentFrameworkId(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentFrameworkId(This,retVal) ) 

#define IUIAutomationElement_get_CurrentIsRequiredForForm(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsRequiredForForm(This,retVal) ) 

#define IUIAutomationElement_get_CurrentItemStatus(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentItemStatus(This,retVal) ) 

#define IUIAutomationElement_get_CurrentBoundingRectangle(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentBoundingRectangle(This,retVal) ) 

#define IUIAutomationElement_get_CurrentLabeledBy(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLabeledBy(This,retVal) ) 

#define IUIAutomationElement_get_CurrentAriaRole(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAriaRole(This,retVal) ) 

#define IUIAutomationElement_get_CurrentAriaProperties(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAriaProperties(This,retVal) ) 

#define IUIAutomationElement_get_CurrentIsDataValidForForm(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsDataValidForForm(This,retVal) ) 

#define IUIAutomationElement_get_CurrentControllerFor(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentControllerFor(This,retVal) ) 

#define IUIAutomationElement_get_CurrentDescribedBy(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentDescribedBy(This,retVal) ) 

#define IUIAutomationElement_get_CurrentFlowsTo(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentFlowsTo(This,retVal) ) 

#define IUIAutomationElement_get_CurrentProviderDescription(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentProviderDescription(This,retVal) ) 

#define IUIAutomationElement_get_CachedProcessId(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedProcessId(This,retVal) ) 

#define IUIAutomationElement_get_CachedControlType(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedControlType(This,retVal) ) 

#define IUIAutomationElement_get_CachedLocalizedControlType(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedLocalizedControlType(This,retVal) ) 

#define IUIAutomationElement_get_CachedName(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedName(This,retVal) ) 

#define IUIAutomationElement_get_CachedAcceleratorKey(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAcceleratorKey(This,retVal) ) 

#define IUIAutomationElement_get_CachedAccessKey(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAccessKey(This,retVal) ) 

#define IUIAutomationElement_get_CachedHasKeyboardFocus(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedHasKeyboardFocus(This,retVal) ) 

#define IUIAutomationElement_get_CachedIsKeyboardFocusable(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsKeyboardFocusable(This,retVal) ) 

#define IUIAutomationElement_get_CachedIsEnabled(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsEnabled(This,retVal) ) 

#define IUIAutomationElement_get_CachedAutomationId(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAutomationId(This,retVal) ) 

#define IUIAutomationElement_get_CachedClassName(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedClassName(This,retVal) ) 

#define IUIAutomationElement_get_CachedHelpText(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedHelpText(This,retVal) ) 

#define IUIAutomationElement_get_CachedCulture(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedCulture(This,retVal) ) 

#define IUIAutomationElement_get_CachedIsControlElement(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsControlElement(This,retVal) ) 

#define IUIAutomationElement_get_CachedIsContentElement(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsContentElement(This,retVal) ) 

#define IUIAutomationElement_get_CachedIsPassword(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsPassword(This,retVal) ) 

#define IUIAutomationElement_get_CachedNativeWindowHandle(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedNativeWindowHandle(This,retVal) ) 

#define IUIAutomationElement_get_CachedItemType(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedItemType(This,retVal) ) 

#define IUIAutomationElement_get_CachedIsOffscreen(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsOffscreen(This,retVal) ) 

#define IUIAutomationElement_get_CachedOrientation(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedOrientation(This,retVal) ) 

#define IUIAutomationElement_get_CachedFrameworkId(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedFrameworkId(This,retVal) ) 

#define IUIAutomationElement_get_CachedIsRequiredForForm(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsRequiredForForm(This,retVal) ) 

#define IUIAutomationElement_get_CachedItemStatus(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedItemStatus(This,retVal) ) 

#define IUIAutomationElement_get_CachedBoundingRectangle(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedBoundingRectangle(This,retVal) ) 

#define IUIAutomationElement_get_CachedLabeledBy(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedLabeledBy(This,retVal) ) 

#define IUIAutomationElement_get_CachedAriaRole(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAriaRole(This,retVal) ) 

#define IUIAutomationElement_get_CachedAriaProperties(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAriaProperties(This,retVal) ) 

#define IUIAutomationElement_get_CachedIsDataValidForForm(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsDataValidForForm(This,retVal) ) 

#define IUIAutomationElement_get_CachedControllerFor(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedControllerFor(This,retVal) ) 

#define IUIAutomationElement_get_CachedDescribedBy(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedDescribedBy(This,retVal) ) 

#define IUIAutomationElement_get_CachedFlowsTo(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedFlowsTo(This,retVal) ) 

#define IUIAutomationElement_get_CachedProviderDescription(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedProviderDescription(This,retVal) ) 

#define IUIAutomationElement_GetClickablePoint(This,clickable,gotClickable)	\
    ( (This)->lpVtbl -> GetClickablePoint(This,clickable,gotClickable) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationElement_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationElementArray_INTERFACE_DEFINED__
#define __IUIAutomationElementArray_INTERFACE_DEFINED__

/* interface IUIAutomationElementArray */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationElementArray;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("14314595-b4bc-4055-95f2-58f2e42c9855")
    IUIAutomationElementArray : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Length( 
            /* [retval][out] */ int *length) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetElement( 
            /* [in] */ int index,
            /* [retval][out] */ IUIAutomationElement **element) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationElementArrayVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationElementArray * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationElementArray * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationElementArray * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Length )( 
            IUIAutomationElementArray * This,
            /* [retval][out] */ int *length);
        
        HRESULT ( STDMETHODCALLTYPE *GetElement )( 
            IUIAutomationElementArray * This,
            /* [in] */ int index,
            /* [retval][out] */ IUIAutomationElement **element);
        
        END_INTERFACE
    } IUIAutomationElementArrayVtbl;

    interface IUIAutomationElementArray
    {
        CONST_VTBL struct IUIAutomationElementArrayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationElementArray_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationElementArray_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationElementArray_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationElementArray_get_Length(This,length)	\
    ( (This)->lpVtbl -> get_Length(This,length) ) 

#define IUIAutomationElementArray_GetElement(This,index,element)	\
    ( (This)->lpVtbl -> GetElement(This,index,element) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationElementArray_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationCondition_INTERFACE_DEFINED__
#define __IUIAutomationCondition_INTERFACE_DEFINED__

/* interface IUIAutomationCondition */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationCondition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("352ffba8-0973-437c-a61f-f64cafd81df9")
    IUIAutomationCondition : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationConditionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationCondition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationCondition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationCondition * This);
        
        END_INTERFACE
    } IUIAutomationConditionVtbl;

    interface IUIAutomationCondition
    {
        CONST_VTBL struct IUIAutomationConditionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationCondition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationCondition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationCondition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationCondition_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationBoolCondition_INTERFACE_DEFINED__
#define __IUIAutomationBoolCondition_INTERFACE_DEFINED__

/* interface IUIAutomationBoolCondition */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationBoolCondition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1b4e1f2e-75eb-4d0b-8952-5a69988e2307")
    IUIAutomationBoolCondition : public IUIAutomationCondition
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BooleanValue( 
            /* [retval][out] */ BOOL *boolVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationBoolConditionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationBoolCondition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationBoolCondition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationBoolCondition * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BooleanValue )( 
            IUIAutomationBoolCondition * This,
            /* [retval][out] */ BOOL *boolVal);
        
        END_INTERFACE
    } IUIAutomationBoolConditionVtbl;

    interface IUIAutomationBoolCondition
    {
        CONST_VTBL struct IUIAutomationBoolConditionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationBoolCondition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationBoolCondition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationBoolCondition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 



#define IUIAutomationBoolCondition_get_BooleanValue(This,boolVal)	\
    ( (This)->lpVtbl -> get_BooleanValue(This,boolVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationBoolCondition_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationPropertyCondition_INTERFACE_DEFINED__
#define __IUIAutomationPropertyCondition_INTERFACE_DEFINED__

/* interface IUIAutomationPropertyCondition */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationPropertyCondition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("99ebf2cb-5578-4267-9ad4-afd6ea77e94b")
    IUIAutomationPropertyCondition : public IUIAutomationCondition
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PropertyId( 
            /* [retval][out] */ PROPERTYID *propertyId) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PropertyValue( 
            /* [retval][out] */ VARIANT *propertyValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PropertyConditionFlags( 
            /* [retval][out] */ enum PropertyConditionFlags *flags) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationPropertyConditionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationPropertyCondition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationPropertyCondition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationPropertyCondition * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyId )( 
            IUIAutomationPropertyCondition * This,
            /* [retval][out] */ PROPERTYID *propertyId);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyValue )( 
            IUIAutomationPropertyCondition * This,
            /* [retval][out] */ VARIANT *propertyValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyConditionFlags )( 
            IUIAutomationPropertyCondition * This,
            /* [retval][out] */ enum PropertyConditionFlags *flags);
        
        END_INTERFACE
    } IUIAutomationPropertyConditionVtbl;

    interface IUIAutomationPropertyCondition
    {
        CONST_VTBL struct IUIAutomationPropertyConditionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationPropertyCondition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationPropertyCondition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationPropertyCondition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 



#define IUIAutomationPropertyCondition_get_PropertyId(This,propertyId)	\
    ( (This)->lpVtbl -> get_PropertyId(This,propertyId) ) 

#define IUIAutomationPropertyCondition_get_PropertyValue(This,propertyValue)	\
    ( (This)->lpVtbl -> get_PropertyValue(This,propertyValue) ) 

#define IUIAutomationPropertyCondition_get_PropertyConditionFlags(This,flags)	\
    ( (This)->lpVtbl -> get_PropertyConditionFlags(This,flags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationPropertyCondition_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationAndCondition_INTERFACE_DEFINED__
#define __IUIAutomationAndCondition_INTERFACE_DEFINED__

/* interface IUIAutomationAndCondition */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationAndCondition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a7d0af36-b912-45fe-9855-091ddc174aec")
    IUIAutomationAndCondition : public IUIAutomationCondition
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ChildCount( 
            /* [retval][out] */ int *childCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetChildrenAsNativeArray( 
            /* [size_is][size_is][out] */ IUIAutomationCondition ***childArray,
            /* [out] */ int *childArrayCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetChildren( 
            /* [retval][out] */ SAFEARRAY * *childArray) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationAndConditionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationAndCondition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationAndCondition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationAndCondition * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChildCount )( 
            IUIAutomationAndCondition * This,
            /* [retval][out] */ int *childCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetChildrenAsNativeArray )( 
            IUIAutomationAndCondition * This,
            /* [size_is][size_is][out] */ IUIAutomationCondition ***childArray,
            /* [out] */ int *childArrayCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetChildren )( 
            IUIAutomationAndCondition * This,
            /* [retval][out] */ SAFEARRAY * *childArray);
        
        END_INTERFACE
    } IUIAutomationAndConditionVtbl;

    interface IUIAutomationAndCondition
    {
        CONST_VTBL struct IUIAutomationAndConditionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationAndCondition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationAndCondition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationAndCondition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 



#define IUIAutomationAndCondition_get_ChildCount(This,childCount)	\
    ( (This)->lpVtbl -> get_ChildCount(This,childCount) ) 

#define IUIAutomationAndCondition_GetChildrenAsNativeArray(This,childArray,childArrayCount)	\
    ( (This)->lpVtbl -> GetChildrenAsNativeArray(This,childArray,childArrayCount) ) 

#define IUIAutomationAndCondition_GetChildren(This,childArray)	\
    ( (This)->lpVtbl -> GetChildren(This,childArray) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationAndCondition_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationOrCondition_INTERFACE_DEFINED__
#define __IUIAutomationOrCondition_INTERFACE_DEFINED__

/* interface IUIAutomationOrCondition */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationOrCondition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8753f032-3db1-47b5-a1fc-6e34a266c712")
    IUIAutomationOrCondition : public IUIAutomationCondition
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ChildCount( 
            /* [retval][out] */ int *childCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetChildrenAsNativeArray( 
            /* [size_is][size_is][out] */ IUIAutomationCondition ***childArray,
            /* [out] */ int *childArrayCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetChildren( 
            /* [retval][out] */ SAFEARRAY * *childArray) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationOrConditionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationOrCondition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationOrCondition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationOrCondition * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChildCount )( 
            IUIAutomationOrCondition * This,
            /* [retval][out] */ int *childCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetChildrenAsNativeArray )( 
            IUIAutomationOrCondition * This,
            /* [size_is][size_is][out] */ IUIAutomationCondition ***childArray,
            /* [out] */ int *childArrayCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetChildren )( 
            IUIAutomationOrCondition * This,
            /* [retval][out] */ SAFEARRAY * *childArray);
        
        END_INTERFACE
    } IUIAutomationOrConditionVtbl;

    interface IUIAutomationOrCondition
    {
        CONST_VTBL struct IUIAutomationOrConditionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationOrCondition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationOrCondition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationOrCondition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 



#define IUIAutomationOrCondition_get_ChildCount(This,childCount)	\
    ( (This)->lpVtbl -> get_ChildCount(This,childCount) ) 

#define IUIAutomationOrCondition_GetChildrenAsNativeArray(This,childArray,childArrayCount)	\
    ( (This)->lpVtbl -> GetChildrenAsNativeArray(This,childArray,childArrayCount) ) 

#define IUIAutomationOrCondition_GetChildren(This,childArray)	\
    ( (This)->lpVtbl -> GetChildren(This,childArray) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationOrCondition_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationNotCondition_INTERFACE_DEFINED__
#define __IUIAutomationNotCondition_INTERFACE_DEFINED__

/* interface IUIAutomationNotCondition */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationNotCondition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f528b657-847b-498c-8896-d52b565407a1")
    IUIAutomationNotCondition : public IUIAutomationCondition
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetChild( 
            /* [retval][out] */ IUIAutomationCondition **condition) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationNotConditionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationNotCondition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationNotCondition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationNotCondition * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetChild )( 
            IUIAutomationNotCondition * This,
            /* [retval][out] */ IUIAutomationCondition **condition);
        
        END_INTERFACE
    } IUIAutomationNotConditionVtbl;

    interface IUIAutomationNotCondition
    {
        CONST_VTBL struct IUIAutomationNotConditionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationNotCondition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationNotCondition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationNotCondition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 



#define IUIAutomationNotCondition_GetChild(This,condition)	\
    ( (This)->lpVtbl -> GetChild(This,condition) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationNotCondition_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationCacheRequest_INTERFACE_DEFINED__
#define __IUIAutomationCacheRequest_INTERFACE_DEFINED__

/* interface IUIAutomationCacheRequest */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationCacheRequest;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b32a92b5-bc25-4078-9c08-d7ee95c48e03")
    IUIAutomationCacheRequest : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddProperty( 
            /* [in] */ PROPERTYID propertyId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddPattern( 
            /* [in] */ PATTERNID patternId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [retval][out] */ IUIAutomationCacheRequest **clonedRequest) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TreeScope( 
            /* [retval][out] */ enum TreeScope *scope) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_TreeScope( 
            /* [in] */ enum TreeScope scope) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TreeFilter( 
            /* [retval][out] */ IUIAutomationCondition **filter) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_TreeFilter( 
            /* [in] */ IUIAutomationCondition *filter) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AutomationElementMode( 
            /* [retval][out] */ enum AutomationElementMode *mode) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_AutomationElementMode( 
            /* [in] */ enum AutomationElementMode mode) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationCacheRequestVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationCacheRequest * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationCacheRequest * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationCacheRequest * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddProperty )( 
            IUIAutomationCacheRequest * This,
            /* [in] */ PROPERTYID propertyId);
        
        HRESULT ( STDMETHODCALLTYPE *AddPattern )( 
            IUIAutomationCacheRequest * This,
            /* [in] */ PATTERNID patternId);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IUIAutomationCacheRequest * This,
            /* [retval][out] */ IUIAutomationCacheRequest **clonedRequest);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TreeScope )( 
            IUIAutomationCacheRequest * This,
            /* [retval][out] */ enum TreeScope *scope);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_TreeScope )( 
            IUIAutomationCacheRequest * This,
            /* [in] */ enum TreeScope scope);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TreeFilter )( 
            IUIAutomationCacheRequest * This,
            /* [retval][out] */ IUIAutomationCondition **filter);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_TreeFilter )( 
            IUIAutomationCacheRequest * This,
            /* [in] */ IUIAutomationCondition *filter);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutomationElementMode )( 
            IUIAutomationCacheRequest * This,
            /* [retval][out] */ enum AutomationElementMode *mode);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutomationElementMode )( 
            IUIAutomationCacheRequest * This,
            /* [in] */ enum AutomationElementMode mode);
        
        END_INTERFACE
    } IUIAutomationCacheRequestVtbl;

    interface IUIAutomationCacheRequest
    {
        CONST_VTBL struct IUIAutomationCacheRequestVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationCacheRequest_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationCacheRequest_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationCacheRequest_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationCacheRequest_AddProperty(This,propertyId)	\
    ( (This)->lpVtbl -> AddProperty(This,propertyId) ) 

#define IUIAutomationCacheRequest_AddPattern(This,patternId)	\
    ( (This)->lpVtbl -> AddPattern(This,patternId) ) 

#define IUIAutomationCacheRequest_Clone(This,clonedRequest)	\
    ( (This)->lpVtbl -> Clone(This,clonedRequest) ) 

#define IUIAutomationCacheRequest_get_TreeScope(This,scope)	\
    ( (This)->lpVtbl -> get_TreeScope(This,scope) ) 

#define IUIAutomationCacheRequest_put_TreeScope(This,scope)	\
    ( (This)->lpVtbl -> put_TreeScope(This,scope) ) 

#define IUIAutomationCacheRequest_get_TreeFilter(This,filter)	\
    ( (This)->lpVtbl -> get_TreeFilter(This,filter) ) 

#define IUIAutomationCacheRequest_put_TreeFilter(This,filter)	\
    ( (This)->lpVtbl -> put_TreeFilter(This,filter) ) 

#define IUIAutomationCacheRequest_get_AutomationElementMode(This,mode)	\
    ( (This)->lpVtbl -> get_AutomationElementMode(This,mode) ) 

#define IUIAutomationCacheRequest_put_AutomationElementMode(This,mode)	\
    ( (This)->lpVtbl -> put_AutomationElementMode(This,mode) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationCacheRequest_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationTreeWalker_INTERFACE_DEFINED__
#define __IUIAutomationTreeWalker_INTERFACE_DEFINED__

/* interface IUIAutomationTreeWalker */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationTreeWalker;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4042c624-389c-4afc-a630-9df854a541fc")
    IUIAutomationTreeWalker : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetParentElement( 
            /* [in] */ IUIAutomationElement *element,
            /* [retval][out] */ IUIAutomationElement **parent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFirstChildElement( 
            /* [in] */ IUIAutomationElement *element,
            /* [retval][out] */ IUIAutomationElement **first) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLastChildElement( 
            /* [in] */ IUIAutomationElement *element,
            /* [retval][out] */ IUIAutomationElement **last) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNextSiblingElement( 
            /* [in] */ IUIAutomationElement *element,
            /* [retval][out] */ IUIAutomationElement **next) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPreviousSiblingElement( 
            /* [in] */ IUIAutomationElement *element,
            /* [retval][out] */ IUIAutomationElement **previous) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NormalizeElement( 
            /* [in] */ IUIAutomationElement *element,
            /* [retval][out] */ IUIAutomationElement **normalized) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetParentElementBuildCache( 
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **parent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFirstChildElementBuildCache( 
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **first) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLastChildElementBuildCache( 
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **last) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNextSiblingElementBuildCache( 
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **next) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPreviousSiblingElementBuildCache( 
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **previous) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NormalizeElementBuildCache( 
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **normalized) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Condition( 
            /* [retval][out] */ IUIAutomationCondition **condition) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationTreeWalkerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationTreeWalker * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationTreeWalker * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationTreeWalker * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetParentElement )( 
            IUIAutomationTreeWalker * This,
            /* [in] */ IUIAutomationElement *element,
            /* [retval][out] */ IUIAutomationElement **parent);
        
        HRESULT ( STDMETHODCALLTYPE *GetFirstChildElement )( 
            IUIAutomationTreeWalker * This,
            /* [in] */ IUIAutomationElement *element,
            /* [retval][out] */ IUIAutomationElement **first);
        
        HRESULT ( STDMETHODCALLTYPE *GetLastChildElement )( 
            IUIAutomationTreeWalker * This,
            /* [in] */ IUIAutomationElement *element,
            /* [retval][out] */ IUIAutomationElement **last);
        
        HRESULT ( STDMETHODCALLTYPE *GetNextSiblingElement )( 
            IUIAutomationTreeWalker * This,
            /* [in] */ IUIAutomationElement *element,
            /* [retval][out] */ IUIAutomationElement **next);
        
        HRESULT ( STDMETHODCALLTYPE *GetPreviousSiblingElement )( 
            IUIAutomationTreeWalker * This,
            /* [in] */ IUIAutomationElement *element,
            /* [retval][out] */ IUIAutomationElement **previous);
        
        HRESULT ( STDMETHODCALLTYPE *NormalizeElement )( 
            IUIAutomationTreeWalker * This,
            /* [in] */ IUIAutomationElement *element,
            /* [retval][out] */ IUIAutomationElement **normalized);
        
        HRESULT ( STDMETHODCALLTYPE *GetParentElementBuildCache )( 
            IUIAutomationTreeWalker * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **parent);
        
        HRESULT ( STDMETHODCALLTYPE *GetFirstChildElementBuildCache )( 
            IUIAutomationTreeWalker * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **first);
        
        HRESULT ( STDMETHODCALLTYPE *GetLastChildElementBuildCache )( 
            IUIAutomationTreeWalker * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **last);
        
        HRESULT ( STDMETHODCALLTYPE *GetNextSiblingElementBuildCache )( 
            IUIAutomationTreeWalker * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **next);
        
        HRESULT ( STDMETHODCALLTYPE *GetPreviousSiblingElementBuildCache )( 
            IUIAutomationTreeWalker * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **previous);
        
        HRESULT ( STDMETHODCALLTYPE *NormalizeElementBuildCache )( 
            IUIAutomationTreeWalker * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **normalized);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Condition )( 
            IUIAutomationTreeWalker * This,
            /* [retval][out] */ IUIAutomationCondition **condition);
        
        END_INTERFACE
    } IUIAutomationTreeWalkerVtbl;

    interface IUIAutomationTreeWalker
    {
        CONST_VTBL struct IUIAutomationTreeWalkerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationTreeWalker_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationTreeWalker_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationTreeWalker_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationTreeWalker_GetParentElement(This,element,parent)	\
    ( (This)->lpVtbl -> GetParentElement(This,element,parent) ) 

#define IUIAutomationTreeWalker_GetFirstChildElement(This,element,first)	\
    ( (This)->lpVtbl -> GetFirstChildElement(This,element,first) ) 

#define IUIAutomationTreeWalker_GetLastChildElement(This,element,last)	\
    ( (This)->lpVtbl -> GetLastChildElement(This,element,last) ) 

#define IUIAutomationTreeWalker_GetNextSiblingElement(This,element,next)	\
    ( (This)->lpVtbl -> GetNextSiblingElement(This,element,next) ) 

#define IUIAutomationTreeWalker_GetPreviousSiblingElement(This,element,previous)	\
    ( (This)->lpVtbl -> GetPreviousSiblingElement(This,element,previous) ) 

#define IUIAutomationTreeWalker_NormalizeElement(This,element,normalized)	\
    ( (This)->lpVtbl -> NormalizeElement(This,element,normalized) ) 

#define IUIAutomationTreeWalker_GetParentElementBuildCache(This,element,cacheRequest,parent)	\
    ( (This)->lpVtbl -> GetParentElementBuildCache(This,element,cacheRequest,parent) ) 

#define IUIAutomationTreeWalker_GetFirstChildElementBuildCache(This,element,cacheRequest,first)	\
    ( (This)->lpVtbl -> GetFirstChildElementBuildCache(This,element,cacheRequest,first) ) 

#define IUIAutomationTreeWalker_GetLastChildElementBuildCache(This,element,cacheRequest,last)	\
    ( (This)->lpVtbl -> GetLastChildElementBuildCache(This,element,cacheRequest,last) ) 

#define IUIAutomationTreeWalker_GetNextSiblingElementBuildCache(This,element,cacheRequest,next)	\
    ( (This)->lpVtbl -> GetNextSiblingElementBuildCache(This,element,cacheRequest,next) ) 

#define IUIAutomationTreeWalker_GetPreviousSiblingElementBuildCache(This,element,cacheRequest,previous)	\
    ( (This)->lpVtbl -> GetPreviousSiblingElementBuildCache(This,element,cacheRequest,previous) ) 

#define IUIAutomationTreeWalker_NormalizeElementBuildCache(This,element,cacheRequest,normalized)	\
    ( (This)->lpVtbl -> NormalizeElementBuildCache(This,element,cacheRequest,normalized) ) 

#define IUIAutomationTreeWalker_get_Condition(This,condition)	\
    ( (This)->lpVtbl -> get_Condition(This,condition) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationTreeWalker_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationEventHandler_INTERFACE_DEFINED__
#define __IUIAutomationEventHandler_INTERFACE_DEFINED__

/* interface IUIAutomationEventHandler */
/* [oleautomation][unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationEventHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("146c3c17-f12e-4e22-8c27-f894b9b79c69")
    IUIAutomationEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE HandleAutomationEvent( 
            /* [in] */ IUIAutomationElement *sender,
            /* [in] */ EVENTID eventId) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationEventHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationEventHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationEventHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *HandleAutomationEvent )( 
            IUIAutomationEventHandler * This,
            /* [in] */ IUIAutomationElement *sender,
            /* [in] */ EVENTID eventId);
        
        END_INTERFACE
    } IUIAutomationEventHandlerVtbl;

    interface IUIAutomationEventHandler
    {
        CONST_VTBL struct IUIAutomationEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationEventHandler_HandleAutomationEvent(This,sender,eventId)	\
    ( (This)->lpVtbl -> HandleAutomationEvent(This,sender,eventId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationEventHandler_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationPropertyChangedEventHandler_INTERFACE_DEFINED__
#define __IUIAutomationPropertyChangedEventHandler_INTERFACE_DEFINED__

/* interface IUIAutomationPropertyChangedEventHandler */
/* [oleautomation][unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationPropertyChangedEventHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("40cd37d4-c756-4b0c-8c6f-bddfeeb13b50")
    IUIAutomationPropertyChangedEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE HandlePropertyChangedEvent( 
            /* [in] */ IUIAutomationElement *sender,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ VARIANT newValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationPropertyChangedEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationPropertyChangedEventHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationPropertyChangedEventHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationPropertyChangedEventHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *HandlePropertyChangedEvent )( 
            IUIAutomationPropertyChangedEventHandler * This,
            /* [in] */ IUIAutomationElement *sender,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ VARIANT newValue);
        
        END_INTERFACE
    } IUIAutomationPropertyChangedEventHandlerVtbl;

    interface IUIAutomationPropertyChangedEventHandler
    {
        CONST_VTBL struct IUIAutomationPropertyChangedEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationPropertyChangedEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationPropertyChangedEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationPropertyChangedEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationPropertyChangedEventHandler_HandlePropertyChangedEvent(This,sender,propertyId,newValue)	\
    ( (This)->lpVtbl -> HandlePropertyChangedEvent(This,sender,propertyId,newValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationPropertyChangedEventHandler_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationStructureChangedEventHandler_INTERFACE_DEFINED__
#define __IUIAutomationStructureChangedEventHandler_INTERFACE_DEFINED__

/* interface IUIAutomationStructureChangedEventHandler */
/* [oleautomation][unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationStructureChangedEventHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e81d1b4e-11c5-42f8-9754-e7036c79f054")
    IUIAutomationStructureChangedEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE HandleStructureChangedEvent( 
            /* [in] */ IUIAutomationElement *sender,
            /* [in] */ enum StructureChangeType changeType,
            /* [in] */ SAFEARRAY * runtimeId) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationStructureChangedEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationStructureChangedEventHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationStructureChangedEventHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationStructureChangedEventHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *HandleStructureChangedEvent )( 
            IUIAutomationStructureChangedEventHandler * This,
            /* [in] */ IUIAutomationElement *sender,
            /* [in] */ enum StructureChangeType changeType,
            /* [in] */ SAFEARRAY * runtimeId);
        
        END_INTERFACE
    } IUIAutomationStructureChangedEventHandlerVtbl;

    interface IUIAutomationStructureChangedEventHandler
    {
        CONST_VTBL struct IUIAutomationStructureChangedEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationStructureChangedEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationStructureChangedEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationStructureChangedEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationStructureChangedEventHandler_HandleStructureChangedEvent(This,sender,changeType,runtimeId)	\
    ( (This)->lpVtbl -> HandleStructureChangedEvent(This,sender,changeType,runtimeId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationStructureChangedEventHandler_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationFocusChangedEventHandler_INTERFACE_DEFINED__
#define __IUIAutomationFocusChangedEventHandler_INTERFACE_DEFINED__

/* interface IUIAutomationFocusChangedEventHandler */
/* [oleautomation][unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationFocusChangedEventHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c270f6b5-5c69-4290-9745-7a7f97169468")
    IUIAutomationFocusChangedEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE HandleFocusChangedEvent( 
            /* [in] */ IUIAutomationElement *sender) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationFocusChangedEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationFocusChangedEventHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationFocusChangedEventHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationFocusChangedEventHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *HandleFocusChangedEvent )( 
            IUIAutomationFocusChangedEventHandler * This,
            /* [in] */ IUIAutomationElement *sender);
        
        END_INTERFACE
    } IUIAutomationFocusChangedEventHandlerVtbl;

    interface IUIAutomationFocusChangedEventHandler
    {
        CONST_VTBL struct IUIAutomationFocusChangedEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationFocusChangedEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationFocusChangedEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationFocusChangedEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationFocusChangedEventHandler_HandleFocusChangedEvent(This,sender)	\
    ( (This)->lpVtbl -> HandleFocusChangedEvent(This,sender) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationFocusChangedEventHandler_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationTextEditTextChangedEventHandler_INTERFACE_DEFINED__
#define __IUIAutomationTextEditTextChangedEventHandler_INTERFACE_DEFINED__

/* interface IUIAutomationTextEditTextChangedEventHandler */
/* [oleautomation][unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationTextEditTextChangedEventHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("92FAA680-E704-4156-931A-E32D5BB38F3F")
    IUIAutomationTextEditTextChangedEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE HandleTextEditTextChangedEvent( 
            /* [in] */ IUIAutomationElement *sender,
            /* [in] */ enum TextEditChangeType textEditChangeType,
            /* [in] */ SAFEARRAY * eventStrings) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationTextEditTextChangedEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationTextEditTextChangedEventHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationTextEditTextChangedEventHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationTextEditTextChangedEventHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *HandleTextEditTextChangedEvent )( 
            IUIAutomationTextEditTextChangedEventHandler * This,
            /* [in] */ IUIAutomationElement *sender,
            /* [in] */ enum TextEditChangeType textEditChangeType,
            /* [in] */ SAFEARRAY * eventStrings);
        
        END_INTERFACE
    } IUIAutomationTextEditTextChangedEventHandlerVtbl;

    interface IUIAutomationTextEditTextChangedEventHandler
    {
        CONST_VTBL struct IUIAutomationTextEditTextChangedEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationTextEditTextChangedEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationTextEditTextChangedEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationTextEditTextChangedEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationTextEditTextChangedEventHandler_HandleTextEditTextChangedEvent(This,sender,textEditChangeType,eventStrings)	\
    ( (This)->lpVtbl -> HandleTextEditTextChangedEvent(This,sender,textEditChangeType,eventStrings) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationTextEditTextChangedEventHandler_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationChangesEventHandler_INTERFACE_DEFINED__
#define __IUIAutomationChangesEventHandler_INTERFACE_DEFINED__

/* interface IUIAutomationChangesEventHandler */
/* [oleautomation][unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationChangesEventHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("58EDCA55-2C3E-4980-B1B9-56C17F27A2A0")
    IUIAutomationChangesEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE HandleChangesEvent( 
            /* [in] */ IUIAutomationElement *sender,
            /* [size_is][in] */ struct UiaChangeInfo *uiaChanges,
            /* [in] */ int changesCount) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationChangesEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationChangesEventHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationChangesEventHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationChangesEventHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *HandleChangesEvent )( 
            IUIAutomationChangesEventHandler * This,
            /* [in] */ IUIAutomationElement *sender,
            /* [size_is][in] */ struct UiaChangeInfo *uiaChanges,
            /* [in] */ int changesCount);
        
        END_INTERFACE
    } IUIAutomationChangesEventHandlerVtbl;

    interface IUIAutomationChangesEventHandler
    {
        CONST_VTBL struct IUIAutomationChangesEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationChangesEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationChangesEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationChangesEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationChangesEventHandler_HandleChangesEvent(This,sender,uiaChanges,changesCount)	\
    ( (This)->lpVtbl -> HandleChangesEvent(This,sender,uiaChanges,changesCount) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationChangesEventHandler_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationNotificationEventHandler_INTERFACE_DEFINED__
#define __IUIAutomationNotificationEventHandler_INTERFACE_DEFINED__

/* interface IUIAutomationNotificationEventHandler */
/* [oleautomation][unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationNotificationEventHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C7CB2637-E6C2-4D0C-85DE-4948C02175C7")
    IUIAutomationNotificationEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE HandleNotificationEvent( 
            /* [in] */ IUIAutomationElement *sender,
            enum NotificationKind notificationKind,
            enum NotificationProcessing notificationProcessing,
            /* [in] */ BSTR displayString,
            /* [in] */ BSTR activityId) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationNotificationEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationNotificationEventHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationNotificationEventHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationNotificationEventHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *HandleNotificationEvent )( 
            IUIAutomationNotificationEventHandler * This,
            /* [in] */ IUIAutomationElement *sender,
            enum NotificationKind notificationKind,
            enum NotificationProcessing notificationProcessing,
            /* [in] */ BSTR displayString,
            /* [in] */ BSTR activityId);
        
        END_INTERFACE
    } IUIAutomationNotificationEventHandlerVtbl;

    interface IUIAutomationNotificationEventHandler
    {
        CONST_VTBL struct IUIAutomationNotificationEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationNotificationEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationNotificationEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationNotificationEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationNotificationEventHandler_HandleNotificationEvent(This,sender,notificationKind,notificationProcessing,displayString,activityId)	\
    ( (This)->lpVtbl -> HandleNotificationEvent(This,sender,notificationKind,notificationProcessing,displayString,activityId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationNotificationEventHandler_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationInvokePattern_INTERFACE_DEFINED__
#define __IUIAutomationInvokePattern_INTERFACE_DEFINED__

/* interface IUIAutomationInvokePattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationInvokePattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fb377fbe-8ea6-46d5-9c73-6499642d3059")
    IUIAutomationInvokePattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationInvokePatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationInvokePattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationInvokePattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationInvokePattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUIAutomationInvokePattern * This);
        
        END_INTERFACE
    } IUIAutomationInvokePatternVtbl;

    interface IUIAutomationInvokePattern
    {
        CONST_VTBL struct IUIAutomationInvokePatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationInvokePattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationInvokePattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationInvokePattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationInvokePattern_Invoke(This)	\
    ( (This)->lpVtbl -> Invoke(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationInvokePattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationDockPattern_INTERFACE_DEFINED__
#define __IUIAutomationDockPattern_INTERFACE_DEFINED__

/* interface IUIAutomationDockPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationDockPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fde5ef97-1464-48f6-90bf-43d0948e86ec")
    IUIAutomationDockPattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetDockPosition( 
            /* [in] */ enum DockPosition dockPos) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentDockPosition( 
            /* [retval][out] */ enum DockPosition *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedDockPosition( 
            /* [retval][out] */ enum DockPosition *retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationDockPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationDockPattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationDockPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationDockPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetDockPosition )( 
            IUIAutomationDockPattern * This,
            /* [in] */ enum DockPosition dockPos);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentDockPosition )( 
            IUIAutomationDockPattern * This,
            /* [retval][out] */ enum DockPosition *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedDockPosition )( 
            IUIAutomationDockPattern * This,
            /* [retval][out] */ enum DockPosition *retVal);
        
        END_INTERFACE
    } IUIAutomationDockPatternVtbl;

    interface IUIAutomationDockPattern
    {
        CONST_VTBL struct IUIAutomationDockPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationDockPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationDockPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationDockPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationDockPattern_SetDockPosition(This,dockPos)	\
    ( (This)->lpVtbl -> SetDockPosition(This,dockPos) ) 

#define IUIAutomationDockPattern_get_CurrentDockPosition(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentDockPosition(This,retVal) ) 

#define IUIAutomationDockPattern_get_CachedDockPosition(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedDockPosition(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationDockPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationExpandCollapsePattern_INTERFACE_DEFINED__
#define __IUIAutomationExpandCollapsePattern_INTERFACE_DEFINED__

/* interface IUIAutomationExpandCollapsePattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationExpandCollapsePattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("619be086-1f4e-4ee4-bafa-210128738730")
    IUIAutomationExpandCollapsePattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Expand( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Collapse( void) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentExpandCollapseState( 
            /* [retval][out] */ enum ExpandCollapseState *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedExpandCollapseState( 
            /* [retval][out] */ enum ExpandCollapseState *retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationExpandCollapsePatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationExpandCollapsePattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationExpandCollapsePattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationExpandCollapsePattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *Expand )( 
            IUIAutomationExpandCollapsePattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *Collapse )( 
            IUIAutomationExpandCollapsePattern * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentExpandCollapseState )( 
            IUIAutomationExpandCollapsePattern * This,
            /* [retval][out] */ enum ExpandCollapseState *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedExpandCollapseState )( 
            IUIAutomationExpandCollapsePattern * This,
            /* [retval][out] */ enum ExpandCollapseState *retVal);
        
        END_INTERFACE
    } IUIAutomationExpandCollapsePatternVtbl;

    interface IUIAutomationExpandCollapsePattern
    {
        CONST_VTBL struct IUIAutomationExpandCollapsePatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationExpandCollapsePattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationExpandCollapsePattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationExpandCollapsePattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationExpandCollapsePattern_Expand(This)	\
    ( (This)->lpVtbl -> Expand(This) ) 

#define IUIAutomationExpandCollapsePattern_Collapse(This)	\
    ( (This)->lpVtbl -> Collapse(This) ) 

#define IUIAutomationExpandCollapsePattern_get_CurrentExpandCollapseState(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentExpandCollapseState(This,retVal) ) 

#define IUIAutomationExpandCollapsePattern_get_CachedExpandCollapseState(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedExpandCollapseState(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationExpandCollapsePattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationGridPattern_INTERFACE_DEFINED__
#define __IUIAutomationGridPattern_INTERFACE_DEFINED__

/* interface IUIAutomationGridPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationGridPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("414c3cdc-856b-4f5b-8538-3131c6302550")
    IUIAutomationGridPattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetItem( 
            /* [in] */ int row,
            /* [in] */ int column,
            /* [retval][out] */ IUIAutomationElement **element) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentRowCount( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentColumnCount( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedRowCount( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedColumnCount( 
            /* [retval][out] */ int *retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationGridPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationGridPattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationGridPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationGridPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetItem )( 
            IUIAutomationGridPattern * This,
            /* [in] */ int row,
            /* [in] */ int column,
            /* [retval][out] */ IUIAutomationElement **element);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentRowCount )( 
            IUIAutomationGridPattern * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentColumnCount )( 
            IUIAutomationGridPattern * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedRowCount )( 
            IUIAutomationGridPattern * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedColumnCount )( 
            IUIAutomationGridPattern * This,
            /* [retval][out] */ int *retVal);
        
        END_INTERFACE
    } IUIAutomationGridPatternVtbl;

    interface IUIAutomationGridPattern
    {
        CONST_VTBL struct IUIAutomationGridPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationGridPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationGridPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationGridPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationGridPattern_GetItem(This,row,column,element)	\
    ( (This)->lpVtbl -> GetItem(This,row,column,element) ) 

#define IUIAutomationGridPattern_get_CurrentRowCount(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentRowCount(This,retVal) ) 

#define IUIAutomationGridPattern_get_CurrentColumnCount(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentColumnCount(This,retVal) ) 

#define IUIAutomationGridPattern_get_CachedRowCount(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedRowCount(This,retVal) ) 

#define IUIAutomationGridPattern_get_CachedColumnCount(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedColumnCount(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationGridPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationGridItemPattern_INTERFACE_DEFINED__
#define __IUIAutomationGridItemPattern_INTERFACE_DEFINED__

/* interface IUIAutomationGridItemPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationGridItemPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("78f8ef57-66c3-4e09-bd7c-e79b2004894d")
    IUIAutomationGridItemPattern : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentContainingGrid( 
            /* [retval][out] */ IUIAutomationElement **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentRow( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentColumn( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentRowSpan( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentColumnSpan( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedContainingGrid( 
            /* [retval][out] */ IUIAutomationElement **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedRow( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedColumn( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedRowSpan( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedColumnSpan( 
            /* [retval][out] */ int *retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationGridItemPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationGridItemPattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationGridItemPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationGridItemPattern * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentContainingGrid )( 
            IUIAutomationGridItemPattern * This,
            /* [retval][out] */ IUIAutomationElement **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentRow )( 
            IUIAutomationGridItemPattern * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentColumn )( 
            IUIAutomationGridItemPattern * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentRowSpan )( 
            IUIAutomationGridItemPattern * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentColumnSpan )( 
            IUIAutomationGridItemPattern * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedContainingGrid )( 
            IUIAutomationGridItemPattern * This,
            /* [retval][out] */ IUIAutomationElement **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedRow )( 
            IUIAutomationGridItemPattern * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedColumn )( 
            IUIAutomationGridItemPattern * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedRowSpan )( 
            IUIAutomationGridItemPattern * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedColumnSpan )( 
            IUIAutomationGridItemPattern * This,
            /* [retval][out] */ int *retVal);
        
        END_INTERFACE
    } IUIAutomationGridItemPatternVtbl;

    interface IUIAutomationGridItemPattern
    {
        CONST_VTBL struct IUIAutomationGridItemPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationGridItemPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationGridItemPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationGridItemPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationGridItemPattern_get_CurrentContainingGrid(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentContainingGrid(This,retVal) ) 

#define IUIAutomationGridItemPattern_get_CurrentRow(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentRow(This,retVal) ) 

#define IUIAutomationGridItemPattern_get_CurrentColumn(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentColumn(This,retVal) ) 

#define IUIAutomationGridItemPattern_get_CurrentRowSpan(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentRowSpan(This,retVal) ) 

#define IUIAutomationGridItemPattern_get_CurrentColumnSpan(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentColumnSpan(This,retVal) ) 

#define IUIAutomationGridItemPattern_get_CachedContainingGrid(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedContainingGrid(This,retVal) ) 

#define IUIAutomationGridItemPattern_get_CachedRow(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedRow(This,retVal) ) 

#define IUIAutomationGridItemPattern_get_CachedColumn(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedColumn(This,retVal) ) 

#define IUIAutomationGridItemPattern_get_CachedRowSpan(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedRowSpan(This,retVal) ) 

#define IUIAutomationGridItemPattern_get_CachedColumnSpan(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedColumnSpan(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationGridItemPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationMultipleViewPattern_INTERFACE_DEFINED__
#define __IUIAutomationMultipleViewPattern_INTERFACE_DEFINED__

/* interface IUIAutomationMultipleViewPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationMultipleViewPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8d253c91-1dc5-4bb5-b18f-ade16fa495e8")
    IUIAutomationMultipleViewPattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetViewName( 
            /* [in] */ int view,
            /* [retval][out] */ BSTR *name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCurrentView( 
            /* [in] */ int view) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentCurrentView( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentSupportedViews( 
            /* [retval][out] */ SAFEARRAY * *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedCurrentView( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCachedSupportedViews( 
            /* [retval][out] */ SAFEARRAY * *retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationMultipleViewPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationMultipleViewPattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationMultipleViewPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationMultipleViewPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetViewName )( 
            IUIAutomationMultipleViewPattern * This,
            /* [in] */ int view,
            /* [retval][out] */ BSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *SetCurrentView )( 
            IUIAutomationMultipleViewPattern * This,
            /* [in] */ int view);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentCurrentView )( 
            IUIAutomationMultipleViewPattern * This,
            /* [retval][out] */ int *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentSupportedViews )( 
            IUIAutomationMultipleViewPattern * This,
            /* [retval][out] */ SAFEARRAY * *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedCurrentView )( 
            IUIAutomationMultipleViewPattern * This,
            /* [retval][out] */ int *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedSupportedViews )( 
            IUIAutomationMultipleViewPattern * This,
            /* [retval][out] */ SAFEARRAY * *retVal);
        
        END_INTERFACE
    } IUIAutomationMultipleViewPatternVtbl;

    interface IUIAutomationMultipleViewPattern
    {
        CONST_VTBL struct IUIAutomationMultipleViewPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationMultipleViewPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationMultipleViewPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationMultipleViewPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationMultipleViewPattern_GetViewName(This,view,name)	\
    ( (This)->lpVtbl -> GetViewName(This,view,name) ) 

#define IUIAutomationMultipleViewPattern_SetCurrentView(This,view)	\
    ( (This)->lpVtbl -> SetCurrentView(This,view) ) 

#define IUIAutomationMultipleViewPattern_get_CurrentCurrentView(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentCurrentView(This,retVal) ) 

#define IUIAutomationMultipleViewPattern_GetCurrentSupportedViews(This,retVal)	\
    ( (This)->lpVtbl -> GetCurrentSupportedViews(This,retVal) ) 

#define IUIAutomationMultipleViewPattern_get_CachedCurrentView(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedCurrentView(This,retVal) ) 

#define IUIAutomationMultipleViewPattern_GetCachedSupportedViews(This,retVal)	\
    ( (This)->lpVtbl -> GetCachedSupportedViews(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationMultipleViewPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationObjectModelPattern_INTERFACE_DEFINED__
#define __IUIAutomationObjectModelPattern_INTERFACE_DEFINED__

/* interface IUIAutomationObjectModelPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationObjectModelPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("71c284b3-c14d-4d14-981e-19751b0d756d")
    IUIAutomationObjectModelPattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetUnderlyingObjectModel( 
            /* [retval][out] */ IUnknown **retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationObjectModelPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationObjectModelPattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationObjectModelPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationObjectModelPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetUnderlyingObjectModel )( 
            IUIAutomationObjectModelPattern * This,
            /* [retval][out] */ IUnknown **retVal);
        
        END_INTERFACE
    } IUIAutomationObjectModelPatternVtbl;

    interface IUIAutomationObjectModelPattern
    {
        CONST_VTBL struct IUIAutomationObjectModelPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationObjectModelPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationObjectModelPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationObjectModelPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationObjectModelPattern_GetUnderlyingObjectModel(This,retVal)	\
    ( (This)->lpVtbl -> GetUnderlyingObjectModel(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationObjectModelPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationRangeValuePattern_INTERFACE_DEFINED__
#define __IUIAutomationRangeValuePattern_INTERFACE_DEFINED__

/* interface IUIAutomationRangeValuePattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationRangeValuePattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("59213f4f-7346-49e5-b120-80555987a148")
    IUIAutomationRangeValuePattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetValue( 
            /* [in] */ double val) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentValue( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsReadOnly( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentMaximum( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentMinimum( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentLargeChange( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentSmallChange( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedValue( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsReadOnly( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedMaximum( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedMinimum( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedLargeChange( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedSmallChange( 
            /* [retval][out] */ double *retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationRangeValuePatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationRangeValuePattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationRangeValuePattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationRangeValuePattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetValue )( 
            IUIAutomationRangeValuePattern * This,
            /* [in] */ double val);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentValue )( 
            IUIAutomationRangeValuePattern * This,
            /* [retval][out] */ double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsReadOnly )( 
            IUIAutomationRangeValuePattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentMaximum )( 
            IUIAutomationRangeValuePattern * This,
            /* [retval][out] */ double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentMinimum )( 
            IUIAutomationRangeValuePattern * This,
            /* [retval][out] */ double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLargeChange )( 
            IUIAutomationRangeValuePattern * This,
            /* [retval][out] */ double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentSmallChange )( 
            IUIAutomationRangeValuePattern * This,
            /* [retval][out] */ double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedValue )( 
            IUIAutomationRangeValuePattern * This,
            /* [retval][out] */ double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsReadOnly )( 
            IUIAutomationRangeValuePattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedMaximum )( 
            IUIAutomationRangeValuePattern * This,
            /* [retval][out] */ double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedMinimum )( 
            IUIAutomationRangeValuePattern * This,
            /* [retval][out] */ double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedLargeChange )( 
            IUIAutomationRangeValuePattern * This,
            /* [retval][out] */ double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedSmallChange )( 
            IUIAutomationRangeValuePattern * This,
            /* [retval][out] */ double *retVal);
        
        END_INTERFACE
    } IUIAutomationRangeValuePatternVtbl;

    interface IUIAutomationRangeValuePattern
    {
        CONST_VTBL struct IUIAutomationRangeValuePatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationRangeValuePattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationRangeValuePattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationRangeValuePattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationRangeValuePattern_SetValue(This,val)	\
    ( (This)->lpVtbl -> SetValue(This,val) ) 

#define IUIAutomationRangeValuePattern_get_CurrentValue(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentValue(This,retVal) ) 

#define IUIAutomationRangeValuePattern_get_CurrentIsReadOnly(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsReadOnly(This,retVal) ) 

#define IUIAutomationRangeValuePattern_get_CurrentMaximum(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentMaximum(This,retVal) ) 

#define IUIAutomationRangeValuePattern_get_CurrentMinimum(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentMinimum(This,retVal) ) 

#define IUIAutomationRangeValuePattern_get_CurrentLargeChange(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLargeChange(This,retVal) ) 

#define IUIAutomationRangeValuePattern_get_CurrentSmallChange(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentSmallChange(This,retVal) ) 

#define IUIAutomationRangeValuePattern_get_CachedValue(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedValue(This,retVal) ) 

#define IUIAutomationRangeValuePattern_get_CachedIsReadOnly(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsReadOnly(This,retVal) ) 

#define IUIAutomationRangeValuePattern_get_CachedMaximum(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedMaximum(This,retVal) ) 

#define IUIAutomationRangeValuePattern_get_CachedMinimum(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedMinimum(This,retVal) ) 

#define IUIAutomationRangeValuePattern_get_CachedLargeChange(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedLargeChange(This,retVal) ) 

#define IUIAutomationRangeValuePattern_get_CachedSmallChange(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedSmallChange(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationRangeValuePattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationScrollPattern_INTERFACE_DEFINED__
#define __IUIAutomationScrollPattern_INTERFACE_DEFINED__

/* interface IUIAutomationScrollPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationScrollPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("88f4d42a-e881-459d-a77c-73bbbb7e02dc")
    IUIAutomationScrollPattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Scroll( 
            /* [in] */ enum ScrollAmount horizontalAmount,
            /* [in] */ enum ScrollAmount verticalAmount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetScrollPercent( 
            /* [in] */ double horizontalPercent,
            /* [in] */ double verticalPercent) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentHorizontalScrollPercent( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentVerticalScrollPercent( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentHorizontalViewSize( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentVerticalViewSize( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentHorizontallyScrollable( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentVerticallyScrollable( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedHorizontalScrollPercent( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedVerticalScrollPercent( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedHorizontalViewSize( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedVerticalViewSize( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedHorizontallyScrollable( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedVerticallyScrollable( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationScrollPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationScrollPattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationScrollPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationScrollPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *Scroll )( 
            IUIAutomationScrollPattern * This,
            /* [in] */ enum ScrollAmount horizontalAmount,
            /* [in] */ enum ScrollAmount verticalAmount);
        
        HRESULT ( STDMETHODCALLTYPE *SetScrollPercent )( 
            IUIAutomationScrollPattern * This,
            /* [in] */ double horizontalPercent,
            /* [in] */ double verticalPercent);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentHorizontalScrollPercent )( 
            IUIAutomationScrollPattern * This,
            /* [retval][out] */ double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentVerticalScrollPercent )( 
            IUIAutomationScrollPattern * This,
            /* [retval][out] */ double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentHorizontalViewSize )( 
            IUIAutomationScrollPattern * This,
            /* [retval][out] */ double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentVerticalViewSize )( 
            IUIAutomationScrollPattern * This,
            /* [retval][out] */ double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentHorizontallyScrollable )( 
            IUIAutomationScrollPattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentVerticallyScrollable )( 
            IUIAutomationScrollPattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedHorizontalScrollPercent )( 
            IUIAutomationScrollPattern * This,
            /* [retval][out] */ double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedVerticalScrollPercent )( 
            IUIAutomationScrollPattern * This,
            /* [retval][out] */ double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedHorizontalViewSize )( 
            IUIAutomationScrollPattern * This,
            /* [retval][out] */ double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedVerticalViewSize )( 
            IUIAutomationScrollPattern * This,
            /* [retval][out] */ double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedHorizontallyScrollable )( 
            IUIAutomationScrollPattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedVerticallyScrollable )( 
            IUIAutomationScrollPattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        END_INTERFACE
    } IUIAutomationScrollPatternVtbl;

    interface IUIAutomationScrollPattern
    {
        CONST_VTBL struct IUIAutomationScrollPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationScrollPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationScrollPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationScrollPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationScrollPattern_Scroll(This,horizontalAmount,verticalAmount)	\
    ( (This)->lpVtbl -> Scroll(This,horizontalAmount,verticalAmount) ) 

#define IUIAutomationScrollPattern_SetScrollPercent(This,horizontalPercent,verticalPercent)	\
    ( (This)->lpVtbl -> SetScrollPercent(This,horizontalPercent,verticalPercent) ) 

#define IUIAutomationScrollPattern_get_CurrentHorizontalScrollPercent(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentHorizontalScrollPercent(This,retVal) ) 

#define IUIAutomationScrollPattern_get_CurrentVerticalScrollPercent(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentVerticalScrollPercent(This,retVal) ) 

#define IUIAutomationScrollPattern_get_CurrentHorizontalViewSize(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentHorizontalViewSize(This,retVal) ) 

#define IUIAutomationScrollPattern_get_CurrentVerticalViewSize(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentVerticalViewSize(This,retVal) ) 

#define IUIAutomationScrollPattern_get_CurrentHorizontallyScrollable(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentHorizontallyScrollable(This,retVal) ) 

#define IUIAutomationScrollPattern_get_CurrentVerticallyScrollable(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentVerticallyScrollable(This,retVal) ) 

#define IUIAutomationScrollPattern_get_CachedHorizontalScrollPercent(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedHorizontalScrollPercent(This,retVal) ) 

#define IUIAutomationScrollPattern_get_CachedVerticalScrollPercent(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedVerticalScrollPercent(This,retVal) ) 

#define IUIAutomationScrollPattern_get_CachedHorizontalViewSize(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedHorizontalViewSize(This,retVal) ) 

#define IUIAutomationScrollPattern_get_CachedVerticalViewSize(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedVerticalViewSize(This,retVal) ) 

#define IUIAutomationScrollPattern_get_CachedHorizontallyScrollable(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedHorizontallyScrollable(This,retVal) ) 

#define IUIAutomationScrollPattern_get_CachedVerticallyScrollable(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedVerticallyScrollable(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationScrollPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationScrollItemPattern_INTERFACE_DEFINED__
#define __IUIAutomationScrollItemPattern_INTERFACE_DEFINED__

/* interface IUIAutomationScrollItemPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationScrollItemPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b488300f-d015-4f19-9c29-bb595e3645ef")
    IUIAutomationScrollItemPattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ScrollIntoView( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationScrollItemPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationScrollItemPattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationScrollItemPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationScrollItemPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *ScrollIntoView )( 
            IUIAutomationScrollItemPattern * This);
        
        END_INTERFACE
    } IUIAutomationScrollItemPatternVtbl;

    interface IUIAutomationScrollItemPattern
    {
        CONST_VTBL struct IUIAutomationScrollItemPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationScrollItemPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationScrollItemPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationScrollItemPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationScrollItemPattern_ScrollIntoView(This)	\
    ( (This)->lpVtbl -> ScrollIntoView(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationScrollItemPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationSelectionPattern_INTERFACE_DEFINED__
#define __IUIAutomationSelectionPattern_INTERFACE_DEFINED__

/* interface IUIAutomationSelectionPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationSelectionPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5ed5202e-b2ac-47a6-b638-4b0bf140d78e")
    IUIAutomationSelectionPattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrentSelection( 
            /* [retval][out] */ IUIAutomationElementArray **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentCanSelectMultiple( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsSelectionRequired( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCachedSelection( 
            /* [retval][out] */ IUIAutomationElementArray **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedCanSelectMultiple( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsSelectionRequired( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationSelectionPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationSelectionPattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationSelectionPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationSelectionPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentSelection )( 
            IUIAutomationSelectionPattern * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentCanSelectMultiple )( 
            IUIAutomationSelectionPattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsSelectionRequired )( 
            IUIAutomationSelectionPattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedSelection )( 
            IUIAutomationSelectionPattern * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedCanSelectMultiple )( 
            IUIAutomationSelectionPattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsSelectionRequired )( 
            IUIAutomationSelectionPattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        END_INTERFACE
    } IUIAutomationSelectionPatternVtbl;

    interface IUIAutomationSelectionPattern
    {
        CONST_VTBL struct IUIAutomationSelectionPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationSelectionPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationSelectionPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationSelectionPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationSelectionPattern_GetCurrentSelection(This,retVal)	\
    ( (This)->lpVtbl -> GetCurrentSelection(This,retVal) ) 

#define IUIAutomationSelectionPattern_get_CurrentCanSelectMultiple(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentCanSelectMultiple(This,retVal) ) 

#define IUIAutomationSelectionPattern_get_CurrentIsSelectionRequired(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsSelectionRequired(This,retVal) ) 

#define IUIAutomationSelectionPattern_GetCachedSelection(This,retVal)	\
    ( (This)->lpVtbl -> GetCachedSelection(This,retVal) ) 

#define IUIAutomationSelectionPattern_get_CachedCanSelectMultiple(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedCanSelectMultiple(This,retVal) ) 

#define IUIAutomationSelectionPattern_get_CachedIsSelectionRequired(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsSelectionRequired(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationSelectionPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationSelectionPattern2_INTERFACE_DEFINED__
#define __IUIAutomationSelectionPattern2_INTERFACE_DEFINED__

/* interface IUIAutomationSelectionPattern2 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationSelectionPattern2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0532bfae-c011-4e32-a343-6d642d798555")
    IUIAutomationSelectionPattern2 : public IUIAutomationSelectionPattern
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentFirstSelectedItem( 
            /* [retval][out] */ IUIAutomationElement **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentLastSelectedItem( 
            /* [retval][out] */ IUIAutomationElement **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentCurrentSelectedItem( 
            /* [retval][out] */ IUIAutomationElement **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentItemCount( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedFirstSelectedItem( 
            /* [retval][out] */ IUIAutomationElement **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedLastSelectedItem( 
            /* [retval][out] */ IUIAutomationElement **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedCurrentSelectedItem( 
            /* [retval][out] */ IUIAutomationElement **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedItemCount( 
            /* [retval][out] */ int *retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationSelectionPattern2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationSelectionPattern2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationSelectionPattern2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationSelectionPattern2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentSelection )( 
            IUIAutomationSelectionPattern2 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentCanSelectMultiple )( 
            IUIAutomationSelectionPattern2 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsSelectionRequired )( 
            IUIAutomationSelectionPattern2 * This,
            /* [retval][out] */ BOOL *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedSelection )( 
            IUIAutomationSelectionPattern2 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedCanSelectMultiple )( 
            IUIAutomationSelectionPattern2 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsSelectionRequired )( 
            IUIAutomationSelectionPattern2 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentFirstSelectedItem )( 
            IUIAutomationSelectionPattern2 * This,
            /* [retval][out] */ IUIAutomationElement **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLastSelectedItem )( 
            IUIAutomationSelectionPattern2 * This,
            /* [retval][out] */ IUIAutomationElement **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentCurrentSelectedItem )( 
            IUIAutomationSelectionPattern2 * This,
            /* [retval][out] */ IUIAutomationElement **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentItemCount )( 
            IUIAutomationSelectionPattern2 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedFirstSelectedItem )( 
            IUIAutomationSelectionPattern2 * This,
            /* [retval][out] */ IUIAutomationElement **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedLastSelectedItem )( 
            IUIAutomationSelectionPattern2 * This,
            /* [retval][out] */ IUIAutomationElement **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedCurrentSelectedItem )( 
            IUIAutomationSelectionPattern2 * This,
            /* [retval][out] */ IUIAutomationElement **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedItemCount )( 
            IUIAutomationSelectionPattern2 * This,
            /* [retval][out] */ int *retVal);
        
        END_INTERFACE
    } IUIAutomationSelectionPattern2Vtbl;

    interface IUIAutomationSelectionPattern2
    {
        CONST_VTBL struct IUIAutomationSelectionPattern2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationSelectionPattern2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationSelectionPattern2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationSelectionPattern2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationSelectionPattern2_GetCurrentSelection(This,retVal)	\
    ( (This)->lpVtbl -> GetCurrentSelection(This,retVal) ) 

#define IUIAutomationSelectionPattern2_get_CurrentCanSelectMultiple(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentCanSelectMultiple(This,retVal) ) 

#define IUIAutomationSelectionPattern2_get_CurrentIsSelectionRequired(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsSelectionRequired(This,retVal) ) 

#define IUIAutomationSelectionPattern2_GetCachedSelection(This,retVal)	\
    ( (This)->lpVtbl -> GetCachedSelection(This,retVal) ) 

#define IUIAutomationSelectionPattern2_get_CachedCanSelectMultiple(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedCanSelectMultiple(This,retVal) ) 

#define IUIAutomationSelectionPattern2_get_CachedIsSelectionRequired(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsSelectionRequired(This,retVal) ) 


#define IUIAutomationSelectionPattern2_get_CurrentFirstSelectedItem(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentFirstSelectedItem(This,retVal) ) 

#define IUIAutomationSelectionPattern2_get_CurrentLastSelectedItem(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLastSelectedItem(This,retVal) ) 

#define IUIAutomationSelectionPattern2_get_CurrentCurrentSelectedItem(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentCurrentSelectedItem(This,retVal) ) 

#define IUIAutomationSelectionPattern2_get_CurrentItemCount(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentItemCount(This,retVal) ) 

#define IUIAutomationSelectionPattern2_get_CachedFirstSelectedItem(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedFirstSelectedItem(This,retVal) ) 

#define IUIAutomationSelectionPattern2_get_CachedLastSelectedItem(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedLastSelectedItem(This,retVal) ) 

#define IUIAutomationSelectionPattern2_get_CachedCurrentSelectedItem(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedCurrentSelectedItem(This,retVal) ) 

#define IUIAutomationSelectionPattern2_get_CachedItemCount(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedItemCount(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationSelectionPattern2_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationSelectionItemPattern_INTERFACE_DEFINED__
#define __IUIAutomationSelectionItemPattern_INTERFACE_DEFINED__

/* interface IUIAutomationSelectionItemPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationSelectionItemPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a8efa66a-0fda-421a-9194-38021f3578ea")
    IUIAutomationSelectionItemPattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Select( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddToSelection( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveFromSelection( void) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsSelected( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentSelectionContainer( 
            /* [retval][out] */ IUIAutomationElement **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsSelected( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedSelectionContainer( 
            /* [retval][out] */ IUIAutomationElement **retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationSelectionItemPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationSelectionItemPattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationSelectionItemPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationSelectionItemPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *Select )( 
            IUIAutomationSelectionItemPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddToSelection )( 
            IUIAutomationSelectionItemPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveFromSelection )( 
            IUIAutomationSelectionItemPattern * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsSelected )( 
            IUIAutomationSelectionItemPattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentSelectionContainer )( 
            IUIAutomationSelectionItemPattern * This,
            /* [retval][out] */ IUIAutomationElement **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsSelected )( 
            IUIAutomationSelectionItemPattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedSelectionContainer )( 
            IUIAutomationSelectionItemPattern * This,
            /* [retval][out] */ IUIAutomationElement **retVal);
        
        END_INTERFACE
    } IUIAutomationSelectionItemPatternVtbl;

    interface IUIAutomationSelectionItemPattern
    {
        CONST_VTBL struct IUIAutomationSelectionItemPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationSelectionItemPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationSelectionItemPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationSelectionItemPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationSelectionItemPattern_Select(This)	\
    ( (This)->lpVtbl -> Select(This) ) 

#define IUIAutomationSelectionItemPattern_AddToSelection(This)	\
    ( (This)->lpVtbl -> AddToSelection(This) ) 

#define IUIAutomationSelectionItemPattern_RemoveFromSelection(This)	\
    ( (This)->lpVtbl -> RemoveFromSelection(This) ) 

#define IUIAutomationSelectionItemPattern_get_CurrentIsSelected(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsSelected(This,retVal) ) 

#define IUIAutomationSelectionItemPattern_get_CurrentSelectionContainer(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentSelectionContainer(This,retVal) ) 

#define IUIAutomationSelectionItemPattern_get_CachedIsSelected(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsSelected(This,retVal) ) 

#define IUIAutomationSelectionItemPattern_get_CachedSelectionContainer(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedSelectionContainer(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationSelectionItemPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationSynchronizedInputPattern_INTERFACE_DEFINED__
#define __IUIAutomationSynchronizedInputPattern_INTERFACE_DEFINED__

/* interface IUIAutomationSynchronizedInputPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationSynchronizedInputPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2233be0b-afb7-448b-9fda-3b378aa5eae1")
    IUIAutomationSynchronizedInputPattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE StartListening( 
            /* [in] */ enum SynchronizedInputType inputType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Cancel( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationSynchronizedInputPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationSynchronizedInputPattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationSynchronizedInputPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationSynchronizedInputPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *StartListening )( 
            IUIAutomationSynchronizedInputPattern * This,
            /* [in] */ enum SynchronizedInputType inputType);
        
        HRESULT ( STDMETHODCALLTYPE *Cancel )( 
            IUIAutomationSynchronizedInputPattern * This);
        
        END_INTERFACE
    } IUIAutomationSynchronizedInputPatternVtbl;

    interface IUIAutomationSynchronizedInputPattern
    {
        CONST_VTBL struct IUIAutomationSynchronizedInputPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationSynchronizedInputPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationSynchronizedInputPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationSynchronizedInputPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationSynchronizedInputPattern_StartListening(This,inputType)	\
    ( (This)->lpVtbl -> StartListening(This,inputType) ) 

#define IUIAutomationSynchronizedInputPattern_Cancel(This)	\
    ( (This)->lpVtbl -> Cancel(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationSynchronizedInputPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationTablePattern_INTERFACE_DEFINED__
#define __IUIAutomationTablePattern_INTERFACE_DEFINED__

/* interface IUIAutomationTablePattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationTablePattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("620e691c-ea96-4710-a850-754b24ce2417")
    IUIAutomationTablePattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrentRowHeaders( 
            /* [retval][out] */ IUIAutomationElementArray **retVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentColumnHeaders( 
            /* [retval][out] */ IUIAutomationElementArray **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentRowOrColumnMajor( 
            /* [retval][out] */ enum RowOrColumnMajor *retVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCachedRowHeaders( 
            /* [retval][out] */ IUIAutomationElementArray **retVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCachedColumnHeaders( 
            /* [retval][out] */ IUIAutomationElementArray **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedRowOrColumnMajor( 
            /* [retval][out] */ enum RowOrColumnMajor *retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationTablePatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationTablePattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationTablePattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationTablePattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentRowHeaders )( 
            IUIAutomationTablePattern * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentColumnHeaders )( 
            IUIAutomationTablePattern * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentRowOrColumnMajor )( 
            IUIAutomationTablePattern * This,
            /* [retval][out] */ enum RowOrColumnMajor *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedRowHeaders )( 
            IUIAutomationTablePattern * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedColumnHeaders )( 
            IUIAutomationTablePattern * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedRowOrColumnMajor )( 
            IUIAutomationTablePattern * This,
            /* [retval][out] */ enum RowOrColumnMajor *retVal);
        
        END_INTERFACE
    } IUIAutomationTablePatternVtbl;

    interface IUIAutomationTablePattern
    {
        CONST_VTBL struct IUIAutomationTablePatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationTablePattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationTablePattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationTablePattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationTablePattern_GetCurrentRowHeaders(This,retVal)	\
    ( (This)->lpVtbl -> GetCurrentRowHeaders(This,retVal) ) 

#define IUIAutomationTablePattern_GetCurrentColumnHeaders(This,retVal)	\
    ( (This)->lpVtbl -> GetCurrentColumnHeaders(This,retVal) ) 

#define IUIAutomationTablePattern_get_CurrentRowOrColumnMajor(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentRowOrColumnMajor(This,retVal) ) 

#define IUIAutomationTablePattern_GetCachedRowHeaders(This,retVal)	\
    ( (This)->lpVtbl -> GetCachedRowHeaders(This,retVal) ) 

#define IUIAutomationTablePattern_GetCachedColumnHeaders(This,retVal)	\
    ( (This)->lpVtbl -> GetCachedColumnHeaders(This,retVal) ) 

#define IUIAutomationTablePattern_get_CachedRowOrColumnMajor(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedRowOrColumnMajor(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationTablePattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationTableItemPattern_INTERFACE_DEFINED__
#define __IUIAutomationTableItemPattern_INTERFACE_DEFINED__

/* interface IUIAutomationTableItemPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationTableItemPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0b964eb3-ef2e-4464-9c79-61d61737a27e")
    IUIAutomationTableItemPattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrentRowHeaderItems( 
            /* [retval][out] */ IUIAutomationElementArray **retVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentColumnHeaderItems( 
            /* [retval][out] */ IUIAutomationElementArray **retVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCachedRowHeaderItems( 
            /* [retval][out] */ IUIAutomationElementArray **retVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCachedColumnHeaderItems( 
            /* [retval][out] */ IUIAutomationElementArray **retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationTableItemPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationTableItemPattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationTableItemPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationTableItemPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentRowHeaderItems )( 
            IUIAutomationTableItemPattern * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentColumnHeaderItems )( 
            IUIAutomationTableItemPattern * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedRowHeaderItems )( 
            IUIAutomationTableItemPattern * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedColumnHeaderItems )( 
            IUIAutomationTableItemPattern * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        END_INTERFACE
    } IUIAutomationTableItemPatternVtbl;

    interface IUIAutomationTableItemPattern
    {
        CONST_VTBL struct IUIAutomationTableItemPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationTableItemPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationTableItemPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationTableItemPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationTableItemPattern_GetCurrentRowHeaderItems(This,retVal)	\
    ( (This)->lpVtbl -> GetCurrentRowHeaderItems(This,retVal) ) 

#define IUIAutomationTableItemPattern_GetCurrentColumnHeaderItems(This,retVal)	\
    ( (This)->lpVtbl -> GetCurrentColumnHeaderItems(This,retVal) ) 

#define IUIAutomationTableItemPattern_GetCachedRowHeaderItems(This,retVal)	\
    ( (This)->lpVtbl -> GetCachedRowHeaderItems(This,retVal) ) 

#define IUIAutomationTableItemPattern_GetCachedColumnHeaderItems(This,retVal)	\
    ( (This)->lpVtbl -> GetCachedColumnHeaderItems(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationTableItemPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationTogglePattern_INTERFACE_DEFINED__
#define __IUIAutomationTogglePattern_INTERFACE_DEFINED__

/* interface IUIAutomationTogglePattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationTogglePattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("94cf8058-9b8d-4ab9-8bfd-4cd0a33c8c70")
    IUIAutomationTogglePattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Toggle( void) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentToggleState( 
            /* [retval][out] */ enum ToggleState *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedToggleState( 
            /* [retval][out] */ enum ToggleState *retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationTogglePatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationTogglePattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationTogglePattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationTogglePattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *Toggle )( 
            IUIAutomationTogglePattern * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentToggleState )( 
            IUIAutomationTogglePattern * This,
            /* [retval][out] */ enum ToggleState *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedToggleState )( 
            IUIAutomationTogglePattern * This,
            /* [retval][out] */ enum ToggleState *retVal);
        
        END_INTERFACE
    } IUIAutomationTogglePatternVtbl;

    interface IUIAutomationTogglePattern
    {
        CONST_VTBL struct IUIAutomationTogglePatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationTogglePattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationTogglePattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationTogglePattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationTogglePattern_Toggle(This)	\
    ( (This)->lpVtbl -> Toggle(This) ) 

#define IUIAutomationTogglePattern_get_CurrentToggleState(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentToggleState(This,retVal) ) 

#define IUIAutomationTogglePattern_get_CachedToggleState(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedToggleState(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationTogglePattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationTransformPattern_INTERFACE_DEFINED__
#define __IUIAutomationTransformPattern_INTERFACE_DEFINED__

/* interface IUIAutomationTransformPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationTransformPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a9b55844-a55d-4ef0-926d-569c16ff89bb")
    IUIAutomationTransformPattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Move( 
            /* [in] */ double x,
            /* [in] */ double y) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Resize( 
            /* [in] */ double width,
            /* [in] */ double height) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Rotate( 
            /* [in] */ double degrees) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentCanMove( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentCanResize( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentCanRotate( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedCanMove( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedCanResize( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedCanRotate( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationTransformPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationTransformPattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationTransformPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationTransformPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *Move )( 
            IUIAutomationTransformPattern * This,
            /* [in] */ double x,
            /* [in] */ double y);
        
        HRESULT ( STDMETHODCALLTYPE *Resize )( 
            IUIAutomationTransformPattern * This,
            /* [in] */ double width,
            /* [in] */ double height);
        
        HRESULT ( STDMETHODCALLTYPE *Rotate )( 
            IUIAutomationTransformPattern * This,
            /* [in] */ double degrees);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentCanMove )( 
            IUIAutomationTransformPattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentCanResize )( 
            IUIAutomationTransformPattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentCanRotate )( 
            IUIAutomationTransformPattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedCanMove )( 
            IUIAutomationTransformPattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedCanResize )( 
            IUIAutomationTransformPattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedCanRotate )( 
            IUIAutomationTransformPattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        END_INTERFACE
    } IUIAutomationTransformPatternVtbl;

    interface IUIAutomationTransformPattern
    {
        CONST_VTBL struct IUIAutomationTransformPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationTransformPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationTransformPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationTransformPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationTransformPattern_Move(This,x,y)	\
    ( (This)->lpVtbl -> Move(This,x,y) ) 

#define IUIAutomationTransformPattern_Resize(This,width,height)	\
    ( (This)->lpVtbl -> Resize(This,width,height) ) 

#define IUIAutomationTransformPattern_Rotate(This,degrees)	\
    ( (This)->lpVtbl -> Rotate(This,degrees) ) 

#define IUIAutomationTransformPattern_get_CurrentCanMove(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentCanMove(This,retVal) ) 

#define IUIAutomationTransformPattern_get_CurrentCanResize(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentCanResize(This,retVal) ) 

#define IUIAutomationTransformPattern_get_CurrentCanRotate(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentCanRotate(This,retVal) ) 

#define IUIAutomationTransformPattern_get_CachedCanMove(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedCanMove(This,retVal) ) 

#define IUIAutomationTransformPattern_get_CachedCanResize(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedCanResize(This,retVal) ) 

#define IUIAutomationTransformPattern_get_CachedCanRotate(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedCanRotate(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationTransformPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationValuePattern_INTERFACE_DEFINED__
#define __IUIAutomationValuePattern_INTERFACE_DEFINED__

/* interface IUIAutomationValuePattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationValuePattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a94cd8b1-0844-4cd6-9d2d-640537ab39e9")
    IUIAutomationValuePattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetValue( 
            /* [in] */ BSTR val) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentValue( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsReadOnly( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedValue( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsReadOnly( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationValuePatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationValuePattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationValuePattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationValuePattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetValue )( 
            IUIAutomationValuePattern * This,
            /* [in] */ BSTR val);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentValue )( 
            IUIAutomationValuePattern * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsReadOnly )( 
            IUIAutomationValuePattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedValue )( 
            IUIAutomationValuePattern * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsReadOnly )( 
            IUIAutomationValuePattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        END_INTERFACE
    } IUIAutomationValuePatternVtbl;

    interface IUIAutomationValuePattern
    {
        CONST_VTBL struct IUIAutomationValuePatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationValuePattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationValuePattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationValuePattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationValuePattern_SetValue(This,val)	\
    ( (This)->lpVtbl -> SetValue(This,val) ) 

#define IUIAutomationValuePattern_get_CurrentValue(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentValue(This,retVal) ) 

#define IUIAutomationValuePattern_get_CurrentIsReadOnly(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsReadOnly(This,retVal) ) 

#define IUIAutomationValuePattern_get_CachedValue(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedValue(This,retVal) ) 

#define IUIAutomationValuePattern_get_CachedIsReadOnly(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsReadOnly(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationValuePattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationWindowPattern_INTERFACE_DEFINED__
#define __IUIAutomationWindowPattern_INTERFACE_DEFINED__

/* interface IUIAutomationWindowPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationWindowPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0faef453-9208-43ef-bbb2-3b485177864f")
    IUIAutomationWindowPattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WaitForInputIdle( 
            /* [in] */ int milliseconds,
            /* [retval][out] */ BOOL *success) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetWindowVisualState( 
            /* [in] */ enum WindowVisualState state) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentCanMaximize( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentCanMinimize( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsModal( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsTopmost( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentWindowVisualState( 
            /* [retval][out] */ enum WindowVisualState *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentWindowInteractionState( 
            /* [retval][out] */ enum WindowInteractionState *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedCanMaximize( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedCanMinimize( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsModal( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsTopmost( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedWindowVisualState( 
            /* [retval][out] */ enum WindowVisualState *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedWindowInteractionState( 
            /* [retval][out] */ enum WindowInteractionState *retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationWindowPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationWindowPattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationWindowPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationWindowPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *Close )( 
            IUIAutomationWindowPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *WaitForInputIdle )( 
            IUIAutomationWindowPattern * This,
            /* [in] */ int milliseconds,
            /* [retval][out] */ BOOL *success);
        
        HRESULT ( STDMETHODCALLTYPE *SetWindowVisualState )( 
            IUIAutomationWindowPattern * This,
            /* [in] */ enum WindowVisualState state);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentCanMaximize )( 
            IUIAutomationWindowPattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentCanMinimize )( 
            IUIAutomationWindowPattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsModal )( 
            IUIAutomationWindowPattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsTopmost )( 
            IUIAutomationWindowPattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentWindowVisualState )( 
            IUIAutomationWindowPattern * This,
            /* [retval][out] */ enum WindowVisualState *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentWindowInteractionState )( 
            IUIAutomationWindowPattern * This,
            /* [retval][out] */ enum WindowInteractionState *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedCanMaximize )( 
            IUIAutomationWindowPattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedCanMinimize )( 
            IUIAutomationWindowPattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsModal )( 
            IUIAutomationWindowPattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsTopmost )( 
            IUIAutomationWindowPattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedWindowVisualState )( 
            IUIAutomationWindowPattern * This,
            /* [retval][out] */ enum WindowVisualState *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedWindowInteractionState )( 
            IUIAutomationWindowPattern * This,
            /* [retval][out] */ enum WindowInteractionState *retVal);
        
        END_INTERFACE
    } IUIAutomationWindowPatternVtbl;

    interface IUIAutomationWindowPattern
    {
        CONST_VTBL struct IUIAutomationWindowPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationWindowPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationWindowPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationWindowPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationWindowPattern_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define IUIAutomationWindowPattern_WaitForInputIdle(This,milliseconds,success)	\
    ( (This)->lpVtbl -> WaitForInputIdle(This,milliseconds,success) ) 

#define IUIAutomationWindowPattern_SetWindowVisualState(This,state)	\
    ( (This)->lpVtbl -> SetWindowVisualState(This,state) ) 

#define IUIAutomationWindowPattern_get_CurrentCanMaximize(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentCanMaximize(This,retVal) ) 

#define IUIAutomationWindowPattern_get_CurrentCanMinimize(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentCanMinimize(This,retVal) ) 

#define IUIAutomationWindowPattern_get_CurrentIsModal(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsModal(This,retVal) ) 

#define IUIAutomationWindowPattern_get_CurrentIsTopmost(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsTopmost(This,retVal) ) 

#define IUIAutomationWindowPattern_get_CurrentWindowVisualState(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentWindowVisualState(This,retVal) ) 

#define IUIAutomationWindowPattern_get_CurrentWindowInteractionState(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentWindowInteractionState(This,retVal) ) 

#define IUIAutomationWindowPattern_get_CachedCanMaximize(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedCanMaximize(This,retVal) ) 

#define IUIAutomationWindowPattern_get_CachedCanMinimize(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedCanMinimize(This,retVal) ) 

#define IUIAutomationWindowPattern_get_CachedIsModal(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsModal(This,retVal) ) 

#define IUIAutomationWindowPattern_get_CachedIsTopmost(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsTopmost(This,retVal) ) 

#define IUIAutomationWindowPattern_get_CachedWindowVisualState(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedWindowVisualState(This,retVal) ) 

#define IUIAutomationWindowPattern_get_CachedWindowInteractionState(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedWindowInteractionState(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationWindowPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationTextRange_INTERFACE_DEFINED__
#define __IUIAutomationTextRange_INTERFACE_DEFINED__

/* interface IUIAutomationTextRange */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationTextRange;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a543cc6a-f4ae-494b-8239-c814481187a8")
    IUIAutomationTextRange : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [retval][out] */ IUIAutomationTextRange **clonedRange) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Compare( 
            /* [in] */ IUIAutomationTextRange *range,
            /* [retval][out] */ BOOL *areSame) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CompareEndpoints( 
            /* [in] */ enum TextPatternRangeEndpoint srcEndPoint,
            /* [in] */ IUIAutomationTextRange *range,
            /* [in] */ enum TextPatternRangeEndpoint targetEndPoint,
            /* [retval][out] */ int *compValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ExpandToEnclosingUnit( 
            /* [in] */ enum TextUnit textUnit) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindAttribute( 
            /* [in] */ TEXTATTRIBUTEID attr,
            /* [in] */ VARIANT val,
            /* [in] */ BOOL backward,
            /* [retval][out] */ IUIAutomationTextRange **found) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindText( 
            /* [in] */ BSTR text,
            /* [in] */ BOOL backward,
            /* [in] */ BOOL ignoreCase,
            /* [retval][out] */ IUIAutomationTextRange **found) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAttributeValue( 
            /* [in] */ TEXTATTRIBUTEID attr,
            /* [retval][out] */ VARIANT *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBoundingRectangles( 
            /* [retval][out] */ SAFEARRAY * *boundingRects) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEnclosingElement( 
            /* [retval][out] */ IUIAutomationElement **enclosingElement) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetText( 
            /* [in] */ int maxLength,
            /* [retval][out] */ BSTR *text) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Move( 
            /* [in] */ enum TextUnit unit,
            /* [in] */ int count,
            /* [retval][out] */ int *moved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveEndpointByUnit( 
            /* [in] */ enum TextPatternRangeEndpoint endpoint,
            /* [in] */ enum TextUnit unit,
            /* [in] */ int count,
            /* [retval][out] */ int *moved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveEndpointByRange( 
            /* [in] */ enum TextPatternRangeEndpoint srcEndPoint,
            /* [in] */ IUIAutomationTextRange *range,
            /* [in] */ enum TextPatternRangeEndpoint targetEndPoint) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Select( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddToSelection( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveFromSelection( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ScrollIntoView( 
            /* [in] */ BOOL alignToTop) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetChildren( 
            /* [retval][out] */ IUIAutomationElementArray **children) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationTextRangeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationTextRange * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationTextRange * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationTextRange * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IUIAutomationTextRange * This,
            /* [retval][out] */ IUIAutomationTextRange **clonedRange);
        
        HRESULT ( STDMETHODCALLTYPE *Compare )( 
            IUIAutomationTextRange * This,
            /* [in] */ IUIAutomationTextRange *range,
            /* [retval][out] */ BOOL *areSame);
        
        HRESULT ( STDMETHODCALLTYPE *CompareEndpoints )( 
            IUIAutomationTextRange * This,
            /* [in] */ enum TextPatternRangeEndpoint srcEndPoint,
            /* [in] */ IUIAutomationTextRange *range,
            /* [in] */ enum TextPatternRangeEndpoint targetEndPoint,
            /* [retval][out] */ int *compValue);
        
        HRESULT ( STDMETHODCALLTYPE *ExpandToEnclosingUnit )( 
            IUIAutomationTextRange * This,
            /* [in] */ enum TextUnit textUnit);
        
        HRESULT ( STDMETHODCALLTYPE *FindAttribute )( 
            IUIAutomationTextRange * This,
            /* [in] */ TEXTATTRIBUTEID attr,
            /* [in] */ VARIANT val,
            /* [in] */ BOOL backward,
            /* [retval][out] */ IUIAutomationTextRange **found);
        
        HRESULT ( STDMETHODCALLTYPE *FindText )( 
            IUIAutomationTextRange * This,
            /* [in] */ BSTR text,
            /* [in] */ BOOL backward,
            /* [in] */ BOOL ignoreCase,
            /* [retval][out] */ IUIAutomationTextRange **found);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributeValue )( 
            IUIAutomationTextRange * This,
            /* [in] */ TEXTATTRIBUTEID attr,
            /* [retval][out] */ VARIANT *value);
        
        HRESULT ( STDMETHODCALLTYPE *GetBoundingRectangles )( 
            IUIAutomationTextRange * This,
            /* [retval][out] */ SAFEARRAY * *boundingRects);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnclosingElement )( 
            IUIAutomationTextRange * This,
            /* [retval][out] */ IUIAutomationElement **enclosingElement);
        
        HRESULT ( STDMETHODCALLTYPE *GetText )( 
            IUIAutomationTextRange * This,
            /* [in] */ int maxLength,
            /* [retval][out] */ BSTR *text);
        
        HRESULT ( STDMETHODCALLTYPE *Move )( 
            IUIAutomationTextRange * This,
            /* [in] */ enum TextUnit unit,
            /* [in] */ int count,
            /* [retval][out] */ int *moved);
        
        HRESULT ( STDMETHODCALLTYPE *MoveEndpointByUnit )( 
            IUIAutomationTextRange * This,
            /* [in] */ enum TextPatternRangeEndpoint endpoint,
            /* [in] */ enum TextUnit unit,
            /* [in] */ int count,
            /* [retval][out] */ int *moved);
        
        HRESULT ( STDMETHODCALLTYPE *MoveEndpointByRange )( 
            IUIAutomationTextRange * This,
            /* [in] */ enum TextPatternRangeEndpoint srcEndPoint,
            /* [in] */ IUIAutomationTextRange *range,
            /* [in] */ enum TextPatternRangeEndpoint targetEndPoint);
        
        HRESULT ( STDMETHODCALLTYPE *Select )( 
            IUIAutomationTextRange * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddToSelection )( 
            IUIAutomationTextRange * This);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveFromSelection )( 
            IUIAutomationTextRange * This);
        
        HRESULT ( STDMETHODCALLTYPE *ScrollIntoView )( 
            IUIAutomationTextRange * This,
            /* [in] */ BOOL alignToTop);
        
        HRESULT ( STDMETHODCALLTYPE *GetChildren )( 
            IUIAutomationTextRange * This,
            /* [retval][out] */ IUIAutomationElementArray **children);
        
        END_INTERFACE
    } IUIAutomationTextRangeVtbl;

    interface IUIAutomationTextRange
    {
        CONST_VTBL struct IUIAutomationTextRangeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationTextRange_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationTextRange_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationTextRange_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationTextRange_Clone(This,clonedRange)	\
    ( (This)->lpVtbl -> Clone(This,clonedRange) ) 

#define IUIAutomationTextRange_Compare(This,range,areSame)	\
    ( (This)->lpVtbl -> Compare(This,range,areSame) ) 

#define IUIAutomationTextRange_CompareEndpoints(This,srcEndPoint,range,targetEndPoint,compValue)	\
    ( (This)->lpVtbl -> CompareEndpoints(This,srcEndPoint,range,targetEndPoint,compValue) ) 

#define IUIAutomationTextRange_ExpandToEnclosingUnit(This,textUnit)	\
    ( (This)->lpVtbl -> ExpandToEnclosingUnit(This,textUnit) ) 

#define IUIAutomationTextRange_FindAttribute(This,attr,val,backward,found)	\
    ( (This)->lpVtbl -> FindAttribute(This,attr,val,backward,found) ) 

#define IUIAutomationTextRange_FindText(This,text,backward,ignoreCase,found)	\
    ( (This)->lpVtbl -> FindText(This,text,backward,ignoreCase,found) ) 

#define IUIAutomationTextRange_GetAttributeValue(This,attr,value)	\
    ( (This)->lpVtbl -> GetAttributeValue(This,attr,value) ) 

#define IUIAutomationTextRange_GetBoundingRectangles(This,boundingRects)	\
    ( (This)->lpVtbl -> GetBoundingRectangles(This,boundingRects) ) 

#define IUIAutomationTextRange_GetEnclosingElement(This,enclosingElement)	\
    ( (This)->lpVtbl -> GetEnclosingElement(This,enclosingElement) ) 

#define IUIAutomationTextRange_GetText(This,maxLength,text)	\
    ( (This)->lpVtbl -> GetText(This,maxLength,text) ) 

#define IUIAutomationTextRange_Move(This,unit,count,moved)	\
    ( (This)->lpVtbl -> Move(This,unit,count,moved) ) 

#define IUIAutomationTextRange_MoveEndpointByUnit(This,endpoint,unit,count,moved)	\
    ( (This)->lpVtbl -> MoveEndpointByUnit(This,endpoint,unit,count,moved) ) 

#define IUIAutomationTextRange_MoveEndpointByRange(This,srcEndPoint,range,targetEndPoint)	\
    ( (This)->lpVtbl -> MoveEndpointByRange(This,srcEndPoint,range,targetEndPoint) ) 

#define IUIAutomationTextRange_Select(This)	\
    ( (This)->lpVtbl -> Select(This) ) 

#define IUIAutomationTextRange_AddToSelection(This)	\
    ( (This)->lpVtbl -> AddToSelection(This) ) 

#define IUIAutomationTextRange_RemoveFromSelection(This)	\
    ( (This)->lpVtbl -> RemoveFromSelection(This) ) 

#define IUIAutomationTextRange_ScrollIntoView(This,alignToTop)	\
    ( (This)->lpVtbl -> ScrollIntoView(This,alignToTop) ) 

#define IUIAutomationTextRange_GetChildren(This,children)	\
    ( (This)->lpVtbl -> GetChildren(This,children) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationTextRange_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationTextRange2_INTERFACE_DEFINED__
#define __IUIAutomationTextRange2_INTERFACE_DEFINED__

/* interface IUIAutomationTextRange2 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationTextRange2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BB9B40E0-5E04-46BD-9BE0-4B601B9AFAD4")
    IUIAutomationTextRange2 : public IUIAutomationTextRange
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ShowContextMenu( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationTextRange2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationTextRange2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationTextRange2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationTextRange2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IUIAutomationTextRange2 * This,
            /* [retval][out] */ IUIAutomationTextRange **clonedRange);
        
        HRESULT ( STDMETHODCALLTYPE *Compare )( 
            IUIAutomationTextRange2 * This,
            /* [in] */ IUIAutomationTextRange *range,
            /* [retval][out] */ BOOL *areSame);
        
        HRESULT ( STDMETHODCALLTYPE *CompareEndpoints )( 
            IUIAutomationTextRange2 * This,
            /* [in] */ enum TextPatternRangeEndpoint srcEndPoint,
            /* [in] */ IUIAutomationTextRange *range,
            /* [in] */ enum TextPatternRangeEndpoint targetEndPoint,
            /* [retval][out] */ int *compValue);
        
        HRESULT ( STDMETHODCALLTYPE *ExpandToEnclosingUnit )( 
            IUIAutomationTextRange2 * This,
            /* [in] */ enum TextUnit textUnit);
        
        HRESULT ( STDMETHODCALLTYPE *FindAttribute )( 
            IUIAutomationTextRange2 * This,
            /* [in] */ TEXTATTRIBUTEID attr,
            /* [in] */ VARIANT val,
            /* [in] */ BOOL backward,
            /* [retval][out] */ IUIAutomationTextRange **found);
        
        HRESULT ( STDMETHODCALLTYPE *FindText )( 
            IUIAutomationTextRange2 * This,
            /* [in] */ BSTR text,
            /* [in] */ BOOL backward,
            /* [in] */ BOOL ignoreCase,
            /* [retval][out] */ IUIAutomationTextRange **found);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributeValue )( 
            IUIAutomationTextRange2 * This,
            /* [in] */ TEXTATTRIBUTEID attr,
            /* [retval][out] */ VARIANT *value);
        
        HRESULT ( STDMETHODCALLTYPE *GetBoundingRectangles )( 
            IUIAutomationTextRange2 * This,
            /* [retval][out] */ SAFEARRAY * *boundingRects);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnclosingElement )( 
            IUIAutomationTextRange2 * This,
            /* [retval][out] */ IUIAutomationElement **enclosingElement);
        
        HRESULT ( STDMETHODCALLTYPE *GetText )( 
            IUIAutomationTextRange2 * This,
            /* [in] */ int maxLength,
            /* [retval][out] */ BSTR *text);
        
        HRESULT ( STDMETHODCALLTYPE *Move )( 
            IUIAutomationTextRange2 * This,
            /* [in] */ enum TextUnit unit,
            /* [in] */ int count,
            /* [retval][out] */ int *moved);
        
        HRESULT ( STDMETHODCALLTYPE *MoveEndpointByUnit )( 
            IUIAutomationTextRange2 * This,
            /* [in] */ enum TextPatternRangeEndpoint endpoint,
            /* [in] */ enum TextUnit unit,
            /* [in] */ int count,
            /* [retval][out] */ int *moved);
        
        HRESULT ( STDMETHODCALLTYPE *MoveEndpointByRange )( 
            IUIAutomationTextRange2 * This,
            /* [in] */ enum TextPatternRangeEndpoint srcEndPoint,
            /* [in] */ IUIAutomationTextRange *range,
            /* [in] */ enum TextPatternRangeEndpoint targetEndPoint);
        
        HRESULT ( STDMETHODCALLTYPE *Select )( 
            IUIAutomationTextRange2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddToSelection )( 
            IUIAutomationTextRange2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveFromSelection )( 
            IUIAutomationTextRange2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ScrollIntoView )( 
            IUIAutomationTextRange2 * This,
            /* [in] */ BOOL alignToTop);
        
        HRESULT ( STDMETHODCALLTYPE *GetChildren )( 
            IUIAutomationTextRange2 * This,
            /* [retval][out] */ IUIAutomationElementArray **children);
        
        HRESULT ( STDMETHODCALLTYPE *ShowContextMenu )( 
            IUIAutomationTextRange2 * This);
        
        END_INTERFACE
    } IUIAutomationTextRange2Vtbl;

    interface IUIAutomationTextRange2
    {
        CONST_VTBL struct IUIAutomationTextRange2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationTextRange2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationTextRange2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationTextRange2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationTextRange2_Clone(This,clonedRange)	\
    ( (This)->lpVtbl -> Clone(This,clonedRange) ) 

#define IUIAutomationTextRange2_Compare(This,range,areSame)	\
    ( (This)->lpVtbl -> Compare(This,range,areSame) ) 

#define IUIAutomationTextRange2_CompareEndpoints(This,srcEndPoint,range,targetEndPoint,compValue)	\
    ( (This)->lpVtbl -> CompareEndpoints(This,srcEndPoint,range,targetEndPoint,compValue) ) 

#define IUIAutomationTextRange2_ExpandToEnclosingUnit(This,textUnit)	\
    ( (This)->lpVtbl -> ExpandToEnclosingUnit(This,textUnit) ) 

#define IUIAutomationTextRange2_FindAttribute(This,attr,val,backward,found)	\
    ( (This)->lpVtbl -> FindAttribute(This,attr,val,backward,found) ) 

#define IUIAutomationTextRange2_FindText(This,text,backward,ignoreCase,found)	\
    ( (This)->lpVtbl -> FindText(This,text,backward,ignoreCase,found) ) 

#define IUIAutomationTextRange2_GetAttributeValue(This,attr,value)	\
    ( (This)->lpVtbl -> GetAttributeValue(This,attr,value) ) 

#define IUIAutomationTextRange2_GetBoundingRectangles(This,boundingRects)	\
    ( (This)->lpVtbl -> GetBoundingRectangles(This,boundingRects) ) 

#define IUIAutomationTextRange2_GetEnclosingElement(This,enclosingElement)	\
    ( (This)->lpVtbl -> GetEnclosingElement(This,enclosingElement) ) 

#define IUIAutomationTextRange2_GetText(This,maxLength,text)	\
    ( (This)->lpVtbl -> GetText(This,maxLength,text) ) 

#define IUIAutomationTextRange2_Move(This,unit,count,moved)	\
    ( (This)->lpVtbl -> Move(This,unit,count,moved) ) 

#define IUIAutomationTextRange2_MoveEndpointByUnit(This,endpoint,unit,count,moved)	\
    ( (This)->lpVtbl -> MoveEndpointByUnit(This,endpoint,unit,count,moved) ) 

#define IUIAutomationTextRange2_MoveEndpointByRange(This,srcEndPoint,range,targetEndPoint)	\
    ( (This)->lpVtbl -> MoveEndpointByRange(This,srcEndPoint,range,targetEndPoint) ) 

#define IUIAutomationTextRange2_Select(This)	\
    ( (This)->lpVtbl -> Select(This) ) 

#define IUIAutomationTextRange2_AddToSelection(This)	\
    ( (This)->lpVtbl -> AddToSelection(This) ) 

#define IUIAutomationTextRange2_RemoveFromSelection(This)	\
    ( (This)->lpVtbl -> RemoveFromSelection(This) ) 

#define IUIAutomationTextRange2_ScrollIntoView(This,alignToTop)	\
    ( (This)->lpVtbl -> ScrollIntoView(This,alignToTop) ) 

#define IUIAutomationTextRange2_GetChildren(This,children)	\
    ( (This)->lpVtbl -> GetChildren(This,children) ) 


#define IUIAutomationTextRange2_ShowContextMenu(This)	\
    ( (This)->lpVtbl -> ShowContextMenu(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationTextRange2_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationTextRange3_INTERFACE_DEFINED__
#define __IUIAutomationTextRange3_INTERFACE_DEFINED__

/* interface IUIAutomationTextRange3 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationTextRange3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6A315D69-5512-4C2E-85F0-53FCE6DD4BC2")
    IUIAutomationTextRange3 : public IUIAutomationTextRange2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetEnclosingElementBuildCache( 
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **enclosingElement) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetChildrenBuildCache( 
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElementArray **children) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAttributeValues( 
            /* [size_is][in] */ const TEXTATTRIBUTEID *attributeIds,
            /* [in] */ int attributeIdCount,
            /* [retval][out] */ SAFEARRAY * *attributeValues) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationTextRange3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationTextRange3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationTextRange3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationTextRange3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IUIAutomationTextRange3 * This,
            /* [retval][out] */ IUIAutomationTextRange **clonedRange);
        
        HRESULT ( STDMETHODCALLTYPE *Compare )( 
            IUIAutomationTextRange3 * This,
            /* [in] */ IUIAutomationTextRange *range,
            /* [retval][out] */ BOOL *areSame);
        
        HRESULT ( STDMETHODCALLTYPE *CompareEndpoints )( 
            IUIAutomationTextRange3 * This,
            /* [in] */ enum TextPatternRangeEndpoint srcEndPoint,
            /* [in] */ IUIAutomationTextRange *range,
            /* [in] */ enum TextPatternRangeEndpoint targetEndPoint,
            /* [retval][out] */ int *compValue);
        
        HRESULT ( STDMETHODCALLTYPE *ExpandToEnclosingUnit )( 
            IUIAutomationTextRange3 * This,
            /* [in] */ enum TextUnit textUnit);
        
        HRESULT ( STDMETHODCALLTYPE *FindAttribute )( 
            IUIAutomationTextRange3 * This,
            /* [in] */ TEXTATTRIBUTEID attr,
            /* [in] */ VARIANT val,
            /* [in] */ BOOL backward,
            /* [retval][out] */ IUIAutomationTextRange **found);
        
        HRESULT ( STDMETHODCALLTYPE *FindText )( 
            IUIAutomationTextRange3 * This,
            /* [in] */ BSTR text,
            /* [in] */ BOOL backward,
            /* [in] */ BOOL ignoreCase,
            /* [retval][out] */ IUIAutomationTextRange **found);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributeValue )( 
            IUIAutomationTextRange3 * This,
            /* [in] */ TEXTATTRIBUTEID attr,
            /* [retval][out] */ VARIANT *value);
        
        HRESULT ( STDMETHODCALLTYPE *GetBoundingRectangles )( 
            IUIAutomationTextRange3 * This,
            /* [retval][out] */ SAFEARRAY * *boundingRects);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnclosingElement )( 
            IUIAutomationTextRange3 * This,
            /* [retval][out] */ IUIAutomationElement **enclosingElement);
        
        HRESULT ( STDMETHODCALLTYPE *GetText )( 
            IUIAutomationTextRange3 * This,
            /* [in] */ int maxLength,
            /* [retval][out] */ BSTR *text);
        
        HRESULT ( STDMETHODCALLTYPE *Move )( 
            IUIAutomationTextRange3 * This,
            /* [in] */ enum TextUnit unit,
            /* [in] */ int count,
            /* [retval][out] */ int *moved);
        
        HRESULT ( STDMETHODCALLTYPE *MoveEndpointByUnit )( 
            IUIAutomationTextRange3 * This,
            /* [in] */ enum TextPatternRangeEndpoint endpoint,
            /* [in] */ enum TextUnit unit,
            /* [in] */ int count,
            /* [retval][out] */ int *moved);
        
        HRESULT ( STDMETHODCALLTYPE *MoveEndpointByRange )( 
            IUIAutomationTextRange3 * This,
            /* [in] */ enum TextPatternRangeEndpoint srcEndPoint,
            /* [in] */ IUIAutomationTextRange *range,
            /* [in] */ enum TextPatternRangeEndpoint targetEndPoint);
        
        HRESULT ( STDMETHODCALLTYPE *Select )( 
            IUIAutomationTextRange3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddToSelection )( 
            IUIAutomationTextRange3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveFromSelection )( 
            IUIAutomationTextRange3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ScrollIntoView )( 
            IUIAutomationTextRange3 * This,
            /* [in] */ BOOL alignToTop);
        
        HRESULT ( STDMETHODCALLTYPE *GetChildren )( 
            IUIAutomationTextRange3 * This,
            /* [retval][out] */ IUIAutomationElementArray **children);
        
        HRESULT ( STDMETHODCALLTYPE *ShowContextMenu )( 
            IUIAutomationTextRange3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnclosingElementBuildCache )( 
            IUIAutomationTextRange3 * This,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **enclosingElement);
        
        HRESULT ( STDMETHODCALLTYPE *GetChildrenBuildCache )( 
            IUIAutomationTextRange3 * This,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElementArray **children);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributeValues )( 
            IUIAutomationTextRange3 * This,
            /* [size_is][in] */ const TEXTATTRIBUTEID *attributeIds,
            /* [in] */ int attributeIdCount,
            /* [retval][out] */ SAFEARRAY * *attributeValues);
        
        END_INTERFACE
    } IUIAutomationTextRange3Vtbl;

    interface IUIAutomationTextRange3
    {
        CONST_VTBL struct IUIAutomationTextRange3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationTextRange3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationTextRange3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationTextRange3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationTextRange3_Clone(This,clonedRange)	\
    ( (This)->lpVtbl -> Clone(This,clonedRange) ) 

#define IUIAutomationTextRange3_Compare(This,range,areSame)	\
    ( (This)->lpVtbl -> Compare(This,range,areSame) ) 

#define IUIAutomationTextRange3_CompareEndpoints(This,srcEndPoint,range,targetEndPoint,compValue)	\
    ( (This)->lpVtbl -> CompareEndpoints(This,srcEndPoint,range,targetEndPoint,compValue) ) 

#define IUIAutomationTextRange3_ExpandToEnclosingUnit(This,textUnit)	\
    ( (This)->lpVtbl -> ExpandToEnclosingUnit(This,textUnit) ) 

#define IUIAutomationTextRange3_FindAttribute(This,attr,val,backward,found)	\
    ( (This)->lpVtbl -> FindAttribute(This,attr,val,backward,found) ) 

#define IUIAutomationTextRange3_FindText(This,text,backward,ignoreCase,found)	\
    ( (This)->lpVtbl -> FindText(This,text,backward,ignoreCase,found) ) 

#define IUIAutomationTextRange3_GetAttributeValue(This,attr,value)	\
    ( (This)->lpVtbl -> GetAttributeValue(This,attr,value) ) 

#define IUIAutomationTextRange3_GetBoundingRectangles(This,boundingRects)	\
    ( (This)->lpVtbl -> GetBoundingRectangles(This,boundingRects) ) 

#define IUIAutomationTextRange3_GetEnclosingElement(This,enclosingElement)	\
    ( (This)->lpVtbl -> GetEnclosingElement(This,enclosingElement) ) 

#define IUIAutomationTextRange3_GetText(This,maxLength,text)	\
    ( (This)->lpVtbl -> GetText(This,maxLength,text) ) 

#define IUIAutomationTextRange3_Move(This,unit,count,moved)	\
    ( (This)->lpVtbl -> Move(This,unit,count,moved) ) 

#define IUIAutomationTextRange3_MoveEndpointByUnit(This,endpoint,unit,count,moved)	\
    ( (This)->lpVtbl -> MoveEndpointByUnit(This,endpoint,unit,count,moved) ) 

#define IUIAutomationTextRange3_MoveEndpointByRange(This,srcEndPoint,range,targetEndPoint)	\
    ( (This)->lpVtbl -> MoveEndpointByRange(This,srcEndPoint,range,targetEndPoint) ) 

#define IUIAutomationTextRange3_Select(This)	\
    ( (This)->lpVtbl -> Select(This) ) 

#define IUIAutomationTextRange3_AddToSelection(This)	\
    ( (This)->lpVtbl -> AddToSelection(This) ) 

#define IUIAutomationTextRange3_RemoveFromSelection(This)	\
    ( (This)->lpVtbl -> RemoveFromSelection(This) ) 

#define IUIAutomationTextRange3_ScrollIntoView(This,alignToTop)	\
    ( (This)->lpVtbl -> ScrollIntoView(This,alignToTop) ) 

#define IUIAutomationTextRange3_GetChildren(This,children)	\
    ( (This)->lpVtbl -> GetChildren(This,children) ) 


#define IUIAutomationTextRange3_ShowContextMenu(This)	\
    ( (This)->lpVtbl -> ShowContextMenu(This) ) 


#define IUIAutomationTextRange3_GetEnclosingElementBuildCache(This,cacheRequest,enclosingElement)	\
    ( (This)->lpVtbl -> GetEnclosingElementBuildCache(This,cacheRequest,enclosingElement) ) 

#define IUIAutomationTextRange3_GetChildrenBuildCache(This,cacheRequest,children)	\
    ( (This)->lpVtbl -> GetChildrenBuildCache(This,cacheRequest,children) ) 

#define IUIAutomationTextRange3_GetAttributeValues(This,attributeIds,attributeIdCount,attributeValues)	\
    ( (This)->lpVtbl -> GetAttributeValues(This,attributeIds,attributeIdCount,attributeValues) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationTextRange3_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationTextRangeArray_INTERFACE_DEFINED__
#define __IUIAutomationTextRangeArray_INTERFACE_DEFINED__

/* interface IUIAutomationTextRangeArray */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationTextRangeArray;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ce4ae76a-e717-4c98-81ea-47371d028eb6")
    IUIAutomationTextRangeArray : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Length( 
            /* [retval][out] */ int *length) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetElement( 
            /* [in] */ int index,
            /* [retval][out] */ IUIAutomationTextRange **element) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationTextRangeArrayVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationTextRangeArray * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationTextRangeArray * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationTextRangeArray * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Length )( 
            IUIAutomationTextRangeArray * This,
            /* [retval][out] */ int *length);
        
        HRESULT ( STDMETHODCALLTYPE *GetElement )( 
            IUIAutomationTextRangeArray * This,
            /* [in] */ int index,
            /* [retval][out] */ IUIAutomationTextRange **element);
        
        END_INTERFACE
    } IUIAutomationTextRangeArrayVtbl;

    interface IUIAutomationTextRangeArray
    {
        CONST_VTBL struct IUIAutomationTextRangeArrayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationTextRangeArray_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationTextRangeArray_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationTextRangeArray_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationTextRangeArray_get_Length(This,length)	\
    ( (This)->lpVtbl -> get_Length(This,length) ) 

#define IUIAutomationTextRangeArray_GetElement(This,index,element)	\
    ( (This)->lpVtbl -> GetElement(This,index,element) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationTextRangeArray_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationTextPattern_INTERFACE_DEFINED__
#define __IUIAutomationTextPattern_INTERFACE_DEFINED__

/* interface IUIAutomationTextPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationTextPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("32eba289-3583-42c9-9c59-3b6d9a1e9b6a")
    IUIAutomationTextPattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RangeFromPoint( 
            /* [in] */ POINT pt,
            /* [retval][out] */ IUIAutomationTextRange **range) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RangeFromChild( 
            /* [in] */ IUIAutomationElement *child,
            /* [retval][out] */ IUIAutomationTextRange **range) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSelection( 
            /* [retval][out] */ IUIAutomationTextRangeArray **ranges) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVisibleRanges( 
            /* [retval][out] */ IUIAutomationTextRangeArray **ranges) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DocumentRange( 
            /* [retval][out] */ IUIAutomationTextRange **range) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SupportedTextSelection( 
            /* [retval][out] */ enum SupportedTextSelection *supportedTextSelection) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationTextPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationTextPattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationTextPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationTextPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *RangeFromPoint )( 
            IUIAutomationTextPattern * This,
            /* [in] */ POINT pt,
            /* [retval][out] */ IUIAutomationTextRange **range);
        
        HRESULT ( STDMETHODCALLTYPE *RangeFromChild )( 
            IUIAutomationTextPattern * This,
            /* [in] */ IUIAutomationElement *child,
            /* [retval][out] */ IUIAutomationTextRange **range);
        
        HRESULT ( STDMETHODCALLTYPE *GetSelection )( 
            IUIAutomationTextPattern * This,
            /* [retval][out] */ IUIAutomationTextRangeArray **ranges);
        
        HRESULT ( STDMETHODCALLTYPE *GetVisibleRanges )( 
            IUIAutomationTextPattern * This,
            /* [retval][out] */ IUIAutomationTextRangeArray **ranges);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DocumentRange )( 
            IUIAutomationTextPattern * This,
            /* [retval][out] */ IUIAutomationTextRange **range);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SupportedTextSelection )( 
            IUIAutomationTextPattern * This,
            /* [retval][out] */ enum SupportedTextSelection *supportedTextSelection);
        
        END_INTERFACE
    } IUIAutomationTextPatternVtbl;

    interface IUIAutomationTextPattern
    {
        CONST_VTBL struct IUIAutomationTextPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationTextPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationTextPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationTextPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationTextPattern_RangeFromPoint(This,pt,range)	\
    ( (This)->lpVtbl -> RangeFromPoint(This,pt,range) ) 

#define IUIAutomationTextPattern_RangeFromChild(This,child,range)	\
    ( (This)->lpVtbl -> RangeFromChild(This,child,range) ) 

#define IUIAutomationTextPattern_GetSelection(This,ranges)	\
    ( (This)->lpVtbl -> GetSelection(This,ranges) ) 

#define IUIAutomationTextPattern_GetVisibleRanges(This,ranges)	\
    ( (This)->lpVtbl -> GetVisibleRanges(This,ranges) ) 

#define IUIAutomationTextPattern_get_DocumentRange(This,range)	\
    ( (This)->lpVtbl -> get_DocumentRange(This,range) ) 

#define IUIAutomationTextPattern_get_SupportedTextSelection(This,supportedTextSelection)	\
    ( (This)->lpVtbl -> get_SupportedTextSelection(This,supportedTextSelection) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationTextPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationTextPattern2_INTERFACE_DEFINED__
#define __IUIAutomationTextPattern2_INTERFACE_DEFINED__

/* interface IUIAutomationTextPattern2 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationTextPattern2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("506a921a-fcc9-409f-b23b-37eb74106872")
    IUIAutomationTextPattern2 : public IUIAutomationTextPattern
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RangeFromAnnotation( 
            /* [in] */ IUIAutomationElement *annotation,
            /* [retval][out] */ IUIAutomationTextRange **range) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCaretRange( 
            /* [out] */ BOOL *isActive,
            /* [retval][out] */ IUIAutomationTextRange **range) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationTextPattern2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationTextPattern2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationTextPattern2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationTextPattern2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *RangeFromPoint )( 
            IUIAutomationTextPattern2 * This,
            /* [in] */ POINT pt,
            /* [retval][out] */ IUIAutomationTextRange **range);
        
        HRESULT ( STDMETHODCALLTYPE *RangeFromChild )( 
            IUIAutomationTextPattern2 * This,
            /* [in] */ IUIAutomationElement *child,
            /* [retval][out] */ IUIAutomationTextRange **range);
        
        HRESULT ( STDMETHODCALLTYPE *GetSelection )( 
            IUIAutomationTextPattern2 * This,
            /* [retval][out] */ IUIAutomationTextRangeArray **ranges);
        
        HRESULT ( STDMETHODCALLTYPE *GetVisibleRanges )( 
            IUIAutomationTextPattern2 * This,
            /* [retval][out] */ IUIAutomationTextRangeArray **ranges);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DocumentRange )( 
            IUIAutomationTextPattern2 * This,
            /* [retval][out] */ IUIAutomationTextRange **range);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SupportedTextSelection )( 
            IUIAutomationTextPattern2 * This,
            /* [retval][out] */ enum SupportedTextSelection *supportedTextSelection);
        
        HRESULT ( STDMETHODCALLTYPE *RangeFromAnnotation )( 
            IUIAutomationTextPattern2 * This,
            /* [in] */ IUIAutomationElement *annotation,
            /* [retval][out] */ IUIAutomationTextRange **range);
        
        HRESULT ( STDMETHODCALLTYPE *GetCaretRange )( 
            IUIAutomationTextPattern2 * This,
            /* [out] */ BOOL *isActive,
            /* [retval][out] */ IUIAutomationTextRange **range);
        
        END_INTERFACE
    } IUIAutomationTextPattern2Vtbl;

    interface IUIAutomationTextPattern2
    {
        CONST_VTBL struct IUIAutomationTextPattern2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationTextPattern2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationTextPattern2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationTextPattern2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationTextPattern2_RangeFromPoint(This,pt,range)	\
    ( (This)->lpVtbl -> RangeFromPoint(This,pt,range) ) 

#define IUIAutomationTextPattern2_RangeFromChild(This,child,range)	\
    ( (This)->lpVtbl -> RangeFromChild(This,child,range) ) 

#define IUIAutomationTextPattern2_GetSelection(This,ranges)	\
    ( (This)->lpVtbl -> GetSelection(This,ranges) ) 

#define IUIAutomationTextPattern2_GetVisibleRanges(This,ranges)	\
    ( (This)->lpVtbl -> GetVisibleRanges(This,ranges) ) 

#define IUIAutomationTextPattern2_get_DocumentRange(This,range)	\
    ( (This)->lpVtbl -> get_DocumentRange(This,range) ) 

#define IUIAutomationTextPattern2_get_SupportedTextSelection(This,supportedTextSelection)	\
    ( (This)->lpVtbl -> get_SupportedTextSelection(This,supportedTextSelection) ) 


#define IUIAutomationTextPattern2_RangeFromAnnotation(This,annotation,range)	\
    ( (This)->lpVtbl -> RangeFromAnnotation(This,annotation,range) ) 

#define IUIAutomationTextPattern2_GetCaretRange(This,isActive,range)	\
    ( (This)->lpVtbl -> GetCaretRange(This,isActive,range) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationTextPattern2_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationTextEditPattern_INTERFACE_DEFINED__
#define __IUIAutomationTextEditPattern_INTERFACE_DEFINED__

/* interface IUIAutomationTextEditPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationTextEditPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("17E21576-996C-4870-99D9-BFF323380C06")
    IUIAutomationTextEditPattern : public IUIAutomationTextPattern
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetActiveComposition( 
            /* [retval][out] */ IUIAutomationTextRange **range) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetConversionTarget( 
            /* [retval][out] */ IUIAutomationTextRange **range) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationTextEditPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationTextEditPattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationTextEditPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationTextEditPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *RangeFromPoint )( 
            IUIAutomationTextEditPattern * This,
            /* [in] */ POINT pt,
            /* [retval][out] */ IUIAutomationTextRange **range);
        
        HRESULT ( STDMETHODCALLTYPE *RangeFromChild )( 
            IUIAutomationTextEditPattern * This,
            /* [in] */ IUIAutomationElement *child,
            /* [retval][out] */ IUIAutomationTextRange **range);
        
        HRESULT ( STDMETHODCALLTYPE *GetSelection )( 
            IUIAutomationTextEditPattern * This,
            /* [retval][out] */ IUIAutomationTextRangeArray **ranges);
        
        HRESULT ( STDMETHODCALLTYPE *GetVisibleRanges )( 
            IUIAutomationTextEditPattern * This,
            /* [retval][out] */ IUIAutomationTextRangeArray **ranges);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DocumentRange )( 
            IUIAutomationTextEditPattern * This,
            /* [retval][out] */ IUIAutomationTextRange **range);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SupportedTextSelection )( 
            IUIAutomationTextEditPattern * This,
            /* [retval][out] */ enum SupportedTextSelection *supportedTextSelection);
        
        HRESULT ( STDMETHODCALLTYPE *GetActiveComposition )( 
            IUIAutomationTextEditPattern * This,
            /* [retval][out] */ IUIAutomationTextRange **range);
        
        HRESULT ( STDMETHODCALLTYPE *GetConversionTarget )( 
            IUIAutomationTextEditPattern * This,
            /* [retval][out] */ IUIAutomationTextRange **range);
        
        END_INTERFACE
    } IUIAutomationTextEditPatternVtbl;

    interface IUIAutomationTextEditPattern
    {
        CONST_VTBL struct IUIAutomationTextEditPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationTextEditPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationTextEditPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationTextEditPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationTextEditPattern_RangeFromPoint(This,pt,range)	\
    ( (This)->lpVtbl -> RangeFromPoint(This,pt,range) ) 

#define IUIAutomationTextEditPattern_RangeFromChild(This,child,range)	\
    ( (This)->lpVtbl -> RangeFromChild(This,child,range) ) 

#define IUIAutomationTextEditPattern_GetSelection(This,ranges)	\
    ( (This)->lpVtbl -> GetSelection(This,ranges) ) 

#define IUIAutomationTextEditPattern_GetVisibleRanges(This,ranges)	\
    ( (This)->lpVtbl -> GetVisibleRanges(This,ranges) ) 

#define IUIAutomationTextEditPattern_get_DocumentRange(This,range)	\
    ( (This)->lpVtbl -> get_DocumentRange(This,range) ) 

#define IUIAutomationTextEditPattern_get_SupportedTextSelection(This,supportedTextSelection)	\
    ( (This)->lpVtbl -> get_SupportedTextSelection(This,supportedTextSelection) ) 


#define IUIAutomationTextEditPattern_GetActiveComposition(This,range)	\
    ( (This)->lpVtbl -> GetActiveComposition(This,range) ) 

#define IUIAutomationTextEditPattern_GetConversionTarget(This,range)	\
    ( (This)->lpVtbl -> GetConversionTarget(This,range) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationTextEditPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationCustomNavigationPattern_INTERFACE_DEFINED__
#define __IUIAutomationCustomNavigationPattern_INTERFACE_DEFINED__

/* interface IUIAutomationCustomNavigationPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationCustomNavigationPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("01EA217A-1766-47ED-A6CC-ACF492854B1F")
    IUIAutomationCustomNavigationPattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Navigate( 
            /* [in] */ enum NavigateDirection direction,
            /* [retval][out] */ IUIAutomationElement **pRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationCustomNavigationPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationCustomNavigationPattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationCustomNavigationPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationCustomNavigationPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *Navigate )( 
            IUIAutomationCustomNavigationPattern * This,
            /* [in] */ enum NavigateDirection direction,
            /* [retval][out] */ IUIAutomationElement **pRetVal);
        
        END_INTERFACE
    } IUIAutomationCustomNavigationPatternVtbl;

    interface IUIAutomationCustomNavigationPattern
    {
        CONST_VTBL struct IUIAutomationCustomNavigationPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationCustomNavigationPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationCustomNavigationPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationCustomNavigationPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationCustomNavigationPattern_Navigate(This,direction,pRetVal)	\
    ( (This)->lpVtbl -> Navigate(This,direction,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationCustomNavigationPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationLegacyIAccessiblePattern_INTERFACE_DEFINED__
#define __IUIAutomationLegacyIAccessiblePattern_INTERFACE_DEFINED__

/* interface IUIAutomationLegacyIAccessiblePattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationLegacyIAccessiblePattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("828055ad-355b-4435-86d5-3b51c14a9b1b")
    IUIAutomationLegacyIAccessiblePattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Select( 
            long flagsSelect) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DoDefaultAction( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetValue( 
            LPCWSTR szValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentChildId( 
            /* [retval][out] */ int *pRetVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentName( 
            /* [retval][out] */ BSTR *pszName) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentValue( 
            /* [retval][out] */ BSTR *pszValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentDescription( 
            /* [retval][out] */ BSTR *pszDescription) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentRole( 
            /* [retval][out] */ DWORD *pdwRole) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentState( 
            /* [retval][out] */ DWORD *pdwState) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentHelp( 
            /* [retval][out] */ BSTR *pszHelp) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentKeyboardShortcut( 
            /* [retval][out] */ BSTR *pszKeyboardShortcut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentSelection( 
            /* [retval][out] */ IUIAutomationElementArray **pvarSelectedChildren) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentDefaultAction( 
            /* [retval][out] */ BSTR *pszDefaultAction) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedChildId( 
            /* [retval][out] */ int *pRetVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedName( 
            /* [retval][out] */ BSTR *pszName) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedValue( 
            /* [retval][out] */ BSTR *pszValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedDescription( 
            /* [retval][out] */ BSTR *pszDescription) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedRole( 
            /* [retval][out] */ DWORD *pdwRole) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedState( 
            /* [retval][out] */ DWORD *pdwState) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedHelp( 
            /* [retval][out] */ BSTR *pszHelp) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedKeyboardShortcut( 
            /* [retval][out] */ BSTR *pszKeyboardShortcut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCachedSelection( 
            /* [retval][out] */ IUIAutomationElementArray **pvarSelectedChildren) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedDefaultAction( 
            /* [retval][out] */ BSTR *pszDefaultAction) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIAccessible( 
            /* [retval][out] */ IAccessible **ppAccessible) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationLegacyIAccessiblePatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationLegacyIAccessiblePattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationLegacyIAccessiblePattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationLegacyIAccessiblePattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *Select )( 
            IUIAutomationLegacyIAccessiblePattern * This,
            long flagsSelect);
        
        HRESULT ( STDMETHODCALLTYPE *DoDefaultAction )( 
            IUIAutomationLegacyIAccessiblePattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetValue )( 
            IUIAutomationLegacyIAccessiblePattern * This,
            LPCWSTR szValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentChildId )( 
            IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ int *pRetVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentName )( 
            IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ BSTR *pszName);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentValue )( 
            IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ BSTR *pszValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentDescription )( 
            IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ BSTR *pszDescription);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentRole )( 
            IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ DWORD *pdwRole);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentState )( 
            IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ DWORD *pdwState);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentHelp )( 
            IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ BSTR *pszHelp);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentKeyboardShortcut )( 
            IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ BSTR *pszKeyboardShortcut);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentSelection )( 
            IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ IUIAutomationElementArray **pvarSelectedChildren);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentDefaultAction )( 
            IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ BSTR *pszDefaultAction);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedChildId )( 
            IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ int *pRetVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedName )( 
            IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ BSTR *pszName);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedValue )( 
            IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ BSTR *pszValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedDescription )( 
            IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ BSTR *pszDescription);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedRole )( 
            IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ DWORD *pdwRole);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedState )( 
            IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ DWORD *pdwState);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedHelp )( 
            IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ BSTR *pszHelp);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedKeyboardShortcut )( 
            IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ BSTR *pszKeyboardShortcut);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedSelection )( 
            IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ IUIAutomationElementArray **pvarSelectedChildren);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedDefaultAction )( 
            IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ BSTR *pszDefaultAction);
        
        HRESULT ( STDMETHODCALLTYPE *GetIAccessible )( 
            IUIAutomationLegacyIAccessiblePattern * This,
            /* [retval][out] */ IAccessible **ppAccessible);
        
        END_INTERFACE
    } IUIAutomationLegacyIAccessiblePatternVtbl;

    interface IUIAutomationLegacyIAccessiblePattern
    {
        CONST_VTBL struct IUIAutomationLegacyIAccessiblePatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationLegacyIAccessiblePattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationLegacyIAccessiblePattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationLegacyIAccessiblePattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationLegacyIAccessiblePattern_Select(This,flagsSelect)	\
    ( (This)->lpVtbl -> Select(This,flagsSelect) ) 

#define IUIAutomationLegacyIAccessiblePattern_DoDefaultAction(This)	\
    ( (This)->lpVtbl -> DoDefaultAction(This) ) 

#define IUIAutomationLegacyIAccessiblePattern_SetValue(This,szValue)	\
    ( (This)->lpVtbl -> SetValue(This,szValue) ) 

#define IUIAutomationLegacyIAccessiblePattern_get_CurrentChildId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_CurrentChildId(This,pRetVal) ) 

#define IUIAutomationLegacyIAccessiblePattern_get_CurrentName(This,pszName)	\
    ( (This)->lpVtbl -> get_CurrentName(This,pszName) ) 

#define IUIAutomationLegacyIAccessiblePattern_get_CurrentValue(This,pszValue)	\
    ( (This)->lpVtbl -> get_CurrentValue(This,pszValue) ) 

#define IUIAutomationLegacyIAccessiblePattern_get_CurrentDescription(This,pszDescription)	\
    ( (This)->lpVtbl -> get_CurrentDescription(This,pszDescription) ) 

#define IUIAutomationLegacyIAccessiblePattern_get_CurrentRole(This,pdwRole)	\
    ( (This)->lpVtbl -> get_CurrentRole(This,pdwRole) ) 

#define IUIAutomationLegacyIAccessiblePattern_get_CurrentState(This,pdwState)	\
    ( (This)->lpVtbl -> get_CurrentState(This,pdwState) ) 

#define IUIAutomationLegacyIAccessiblePattern_get_CurrentHelp(This,pszHelp)	\
    ( (This)->lpVtbl -> get_CurrentHelp(This,pszHelp) ) 

#define IUIAutomationLegacyIAccessiblePattern_get_CurrentKeyboardShortcut(This,pszKeyboardShortcut)	\
    ( (This)->lpVtbl -> get_CurrentKeyboardShortcut(This,pszKeyboardShortcut) ) 

#define IUIAutomationLegacyIAccessiblePattern_GetCurrentSelection(This,pvarSelectedChildren)	\
    ( (This)->lpVtbl -> GetCurrentSelection(This,pvarSelectedChildren) ) 

#define IUIAutomationLegacyIAccessiblePattern_get_CurrentDefaultAction(This,pszDefaultAction)	\
    ( (This)->lpVtbl -> get_CurrentDefaultAction(This,pszDefaultAction) ) 

#define IUIAutomationLegacyIAccessiblePattern_get_CachedChildId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_CachedChildId(This,pRetVal) ) 

#define IUIAutomationLegacyIAccessiblePattern_get_CachedName(This,pszName)	\
    ( (This)->lpVtbl -> get_CachedName(This,pszName) ) 

#define IUIAutomationLegacyIAccessiblePattern_get_CachedValue(This,pszValue)	\
    ( (This)->lpVtbl -> get_CachedValue(This,pszValue) ) 

#define IUIAutomationLegacyIAccessiblePattern_get_CachedDescription(This,pszDescription)	\
    ( (This)->lpVtbl -> get_CachedDescription(This,pszDescription) ) 

#define IUIAutomationLegacyIAccessiblePattern_get_CachedRole(This,pdwRole)	\
    ( (This)->lpVtbl -> get_CachedRole(This,pdwRole) ) 

#define IUIAutomationLegacyIAccessiblePattern_get_CachedState(This,pdwState)	\
    ( (This)->lpVtbl -> get_CachedState(This,pdwState) ) 

#define IUIAutomationLegacyIAccessiblePattern_get_CachedHelp(This,pszHelp)	\
    ( (This)->lpVtbl -> get_CachedHelp(This,pszHelp) ) 

#define IUIAutomationLegacyIAccessiblePattern_get_CachedKeyboardShortcut(This,pszKeyboardShortcut)	\
    ( (This)->lpVtbl -> get_CachedKeyboardShortcut(This,pszKeyboardShortcut) ) 

#define IUIAutomationLegacyIAccessiblePattern_GetCachedSelection(This,pvarSelectedChildren)	\
    ( (This)->lpVtbl -> GetCachedSelection(This,pvarSelectedChildren) ) 

#define IUIAutomationLegacyIAccessiblePattern_get_CachedDefaultAction(This,pszDefaultAction)	\
    ( (This)->lpVtbl -> get_CachedDefaultAction(This,pszDefaultAction) ) 

#define IUIAutomationLegacyIAccessiblePattern_GetIAccessible(This,ppAccessible)	\
    ( (This)->lpVtbl -> GetIAccessible(This,ppAccessible) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationLegacyIAccessiblePattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationItemContainerPattern_INTERFACE_DEFINED__
#define __IUIAutomationItemContainerPattern_INTERFACE_DEFINED__

/* interface IUIAutomationItemContainerPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationItemContainerPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c690fdb2-27a8-423c-812d-429773c9084e")
    IUIAutomationItemContainerPattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE FindItemByProperty( 
            /* [in] */ IUIAutomationElement *pStartAfter,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ VARIANT value,
            /* [retval][out] */ IUIAutomationElement **pFound) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationItemContainerPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationItemContainerPattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationItemContainerPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationItemContainerPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *FindItemByProperty )( 
            IUIAutomationItemContainerPattern * This,
            /* [in] */ IUIAutomationElement *pStartAfter,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ VARIANT value,
            /* [retval][out] */ IUIAutomationElement **pFound);
        
        END_INTERFACE
    } IUIAutomationItemContainerPatternVtbl;

    interface IUIAutomationItemContainerPattern
    {
        CONST_VTBL struct IUIAutomationItemContainerPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationItemContainerPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationItemContainerPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationItemContainerPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationItemContainerPattern_FindItemByProperty(This,pStartAfter,propertyId,value,pFound)	\
    ( (This)->lpVtbl -> FindItemByProperty(This,pStartAfter,propertyId,value,pFound) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationItemContainerPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationVirtualizedItemPattern_INTERFACE_DEFINED__
#define __IUIAutomationVirtualizedItemPattern_INTERFACE_DEFINED__

/* interface IUIAutomationVirtualizedItemPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationVirtualizedItemPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6ba3d7a6-04cf-4f11-8793-a8d1cde9969f")
    IUIAutomationVirtualizedItemPattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Realize( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationVirtualizedItemPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationVirtualizedItemPattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationVirtualizedItemPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationVirtualizedItemPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *Realize )( 
            IUIAutomationVirtualizedItemPattern * This);
        
        END_INTERFACE
    } IUIAutomationVirtualizedItemPatternVtbl;

    interface IUIAutomationVirtualizedItemPattern
    {
        CONST_VTBL struct IUIAutomationVirtualizedItemPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationVirtualizedItemPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationVirtualizedItemPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationVirtualizedItemPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationVirtualizedItemPattern_Realize(This)	\
    ( (This)->lpVtbl -> Realize(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationVirtualizedItemPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationAnnotationPattern_INTERFACE_DEFINED__
#define __IUIAutomationAnnotationPattern_INTERFACE_DEFINED__

/* interface IUIAutomationAnnotationPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationAnnotationPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9a175b21-339e-41b1-8e8b-623f6b681098")
    IUIAutomationAnnotationPattern : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentAnnotationTypeId( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentAnnotationTypeName( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentAuthor( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentDateTime( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentTarget( 
            /* [retval][out] */ IUIAutomationElement **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedAnnotationTypeId( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedAnnotationTypeName( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedAuthor( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedDateTime( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedTarget( 
            /* [retval][out] */ IUIAutomationElement **retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationAnnotationPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationAnnotationPattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationAnnotationPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationAnnotationPattern * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAnnotationTypeId )( 
            IUIAutomationAnnotationPattern * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAnnotationTypeName )( 
            IUIAutomationAnnotationPattern * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAuthor )( 
            IUIAutomationAnnotationPattern * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentDateTime )( 
            IUIAutomationAnnotationPattern * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentTarget )( 
            IUIAutomationAnnotationPattern * This,
            /* [retval][out] */ IUIAutomationElement **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAnnotationTypeId )( 
            IUIAutomationAnnotationPattern * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAnnotationTypeName )( 
            IUIAutomationAnnotationPattern * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAuthor )( 
            IUIAutomationAnnotationPattern * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedDateTime )( 
            IUIAutomationAnnotationPattern * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedTarget )( 
            IUIAutomationAnnotationPattern * This,
            /* [retval][out] */ IUIAutomationElement **retVal);
        
        END_INTERFACE
    } IUIAutomationAnnotationPatternVtbl;

    interface IUIAutomationAnnotationPattern
    {
        CONST_VTBL struct IUIAutomationAnnotationPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationAnnotationPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationAnnotationPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationAnnotationPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationAnnotationPattern_get_CurrentAnnotationTypeId(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAnnotationTypeId(This,retVal) ) 

#define IUIAutomationAnnotationPattern_get_CurrentAnnotationTypeName(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAnnotationTypeName(This,retVal) ) 

#define IUIAutomationAnnotationPattern_get_CurrentAuthor(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAuthor(This,retVal) ) 

#define IUIAutomationAnnotationPattern_get_CurrentDateTime(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentDateTime(This,retVal) ) 

#define IUIAutomationAnnotationPattern_get_CurrentTarget(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentTarget(This,retVal) ) 

#define IUIAutomationAnnotationPattern_get_CachedAnnotationTypeId(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAnnotationTypeId(This,retVal) ) 

#define IUIAutomationAnnotationPattern_get_CachedAnnotationTypeName(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAnnotationTypeName(This,retVal) ) 

#define IUIAutomationAnnotationPattern_get_CachedAuthor(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAuthor(This,retVal) ) 

#define IUIAutomationAnnotationPattern_get_CachedDateTime(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedDateTime(This,retVal) ) 

#define IUIAutomationAnnotationPattern_get_CachedTarget(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedTarget(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationAnnotationPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationStylesPattern_INTERFACE_DEFINED__
#define __IUIAutomationStylesPattern_INTERFACE_DEFINED__

/* interface IUIAutomationStylesPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationStylesPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("85b5f0a2-bd79-484a-ad2b-388c9838d5fb")
    IUIAutomationStylesPattern : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentStyleId( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentStyleName( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentFillColor( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentFillPatternStyle( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentShape( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentFillPatternColor( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentExtendedProperties( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentExtendedPropertiesAsArray( 
            /* [size_is][size_is][out] */ struct ExtendedProperty **propertyArray,
            /* [out] */ int *propertyCount) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedStyleId( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedStyleName( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedFillColor( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedFillPatternStyle( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedShape( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedFillPatternColor( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedExtendedProperties( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCachedExtendedPropertiesAsArray( 
            /* [size_is][size_is][out] */ struct ExtendedProperty **propertyArray,
            /* [out] */ int *propertyCount) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationStylesPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationStylesPattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationStylesPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationStylesPattern * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentStyleId )( 
            IUIAutomationStylesPattern * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentStyleName )( 
            IUIAutomationStylesPattern * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentFillColor )( 
            IUIAutomationStylesPattern * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentFillPatternStyle )( 
            IUIAutomationStylesPattern * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentShape )( 
            IUIAutomationStylesPattern * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentFillPatternColor )( 
            IUIAutomationStylesPattern * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentExtendedProperties )( 
            IUIAutomationStylesPattern * This,
            /* [retval][out] */ BSTR *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentExtendedPropertiesAsArray )( 
            IUIAutomationStylesPattern * This,
            /* [size_is][size_is][out] */ struct ExtendedProperty **propertyArray,
            /* [out] */ int *propertyCount);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedStyleId )( 
            IUIAutomationStylesPattern * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedStyleName )( 
            IUIAutomationStylesPattern * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedFillColor )( 
            IUIAutomationStylesPattern * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedFillPatternStyle )( 
            IUIAutomationStylesPattern * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedShape )( 
            IUIAutomationStylesPattern * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedFillPatternColor )( 
            IUIAutomationStylesPattern * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedExtendedProperties )( 
            IUIAutomationStylesPattern * This,
            /* [retval][out] */ BSTR *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedExtendedPropertiesAsArray )( 
            IUIAutomationStylesPattern * This,
            /* [size_is][size_is][out] */ struct ExtendedProperty **propertyArray,
            /* [out] */ int *propertyCount);
        
        END_INTERFACE
    } IUIAutomationStylesPatternVtbl;

    interface IUIAutomationStylesPattern
    {
        CONST_VTBL struct IUIAutomationStylesPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationStylesPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationStylesPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationStylesPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationStylesPattern_get_CurrentStyleId(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentStyleId(This,retVal) ) 

#define IUIAutomationStylesPattern_get_CurrentStyleName(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentStyleName(This,retVal) ) 

#define IUIAutomationStylesPattern_get_CurrentFillColor(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentFillColor(This,retVal) ) 

#define IUIAutomationStylesPattern_get_CurrentFillPatternStyle(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentFillPatternStyle(This,retVal) ) 

#define IUIAutomationStylesPattern_get_CurrentShape(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentShape(This,retVal) ) 

#define IUIAutomationStylesPattern_get_CurrentFillPatternColor(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentFillPatternColor(This,retVal) ) 

#define IUIAutomationStylesPattern_get_CurrentExtendedProperties(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentExtendedProperties(This,retVal) ) 

#define IUIAutomationStylesPattern_GetCurrentExtendedPropertiesAsArray(This,propertyArray,propertyCount)	\
    ( (This)->lpVtbl -> GetCurrentExtendedPropertiesAsArray(This,propertyArray,propertyCount) ) 

#define IUIAutomationStylesPattern_get_CachedStyleId(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedStyleId(This,retVal) ) 

#define IUIAutomationStylesPattern_get_CachedStyleName(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedStyleName(This,retVal) ) 

#define IUIAutomationStylesPattern_get_CachedFillColor(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedFillColor(This,retVal) ) 

#define IUIAutomationStylesPattern_get_CachedFillPatternStyle(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedFillPatternStyle(This,retVal) ) 

#define IUIAutomationStylesPattern_get_CachedShape(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedShape(This,retVal) ) 

#define IUIAutomationStylesPattern_get_CachedFillPatternColor(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedFillPatternColor(This,retVal) ) 

#define IUIAutomationStylesPattern_get_CachedExtendedProperties(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedExtendedProperties(This,retVal) ) 

#define IUIAutomationStylesPattern_GetCachedExtendedPropertiesAsArray(This,propertyArray,propertyCount)	\
    ( (This)->lpVtbl -> GetCachedExtendedPropertiesAsArray(This,propertyArray,propertyCount) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationStylesPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationSpreadsheetPattern_INTERFACE_DEFINED__
#define __IUIAutomationSpreadsheetPattern_INTERFACE_DEFINED__

/* interface IUIAutomationSpreadsheetPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationSpreadsheetPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7517a7c8-faae-4de9-9f08-29b91e8595c1")
    IUIAutomationSpreadsheetPattern : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetItemByName( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IUIAutomationElement **element) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationSpreadsheetPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationSpreadsheetPattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationSpreadsheetPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationSpreadsheetPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemByName )( 
            IUIAutomationSpreadsheetPattern * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IUIAutomationElement **element);
        
        END_INTERFACE
    } IUIAutomationSpreadsheetPatternVtbl;

    interface IUIAutomationSpreadsheetPattern
    {
        CONST_VTBL struct IUIAutomationSpreadsheetPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationSpreadsheetPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationSpreadsheetPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationSpreadsheetPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationSpreadsheetPattern_GetItemByName(This,name,element)	\
    ( (This)->lpVtbl -> GetItemByName(This,name,element) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationSpreadsheetPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationSpreadsheetItemPattern_INTERFACE_DEFINED__
#define __IUIAutomationSpreadsheetItemPattern_INTERFACE_DEFINED__

/* interface IUIAutomationSpreadsheetItemPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationSpreadsheetItemPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7d4fb86c-8d34-40e1-8e83-62c15204e335")
    IUIAutomationSpreadsheetItemPattern : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentFormula( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentAnnotationObjects( 
            /* [retval][out] */ IUIAutomationElementArray **retVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentAnnotationTypes( 
            /* [retval][out] */ SAFEARRAY * *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedFormula( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCachedAnnotationObjects( 
            /* [retval][out] */ IUIAutomationElementArray **retVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCachedAnnotationTypes( 
            /* [retval][out] */ SAFEARRAY * *retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationSpreadsheetItemPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationSpreadsheetItemPattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationSpreadsheetItemPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationSpreadsheetItemPattern * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentFormula )( 
            IUIAutomationSpreadsheetItemPattern * This,
            /* [retval][out] */ BSTR *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentAnnotationObjects )( 
            IUIAutomationSpreadsheetItemPattern * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentAnnotationTypes )( 
            IUIAutomationSpreadsheetItemPattern * This,
            /* [retval][out] */ SAFEARRAY * *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedFormula )( 
            IUIAutomationSpreadsheetItemPattern * This,
            /* [retval][out] */ BSTR *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedAnnotationObjects )( 
            IUIAutomationSpreadsheetItemPattern * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedAnnotationTypes )( 
            IUIAutomationSpreadsheetItemPattern * This,
            /* [retval][out] */ SAFEARRAY * *retVal);
        
        END_INTERFACE
    } IUIAutomationSpreadsheetItemPatternVtbl;

    interface IUIAutomationSpreadsheetItemPattern
    {
        CONST_VTBL struct IUIAutomationSpreadsheetItemPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationSpreadsheetItemPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationSpreadsheetItemPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationSpreadsheetItemPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationSpreadsheetItemPattern_get_CurrentFormula(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentFormula(This,retVal) ) 

#define IUIAutomationSpreadsheetItemPattern_GetCurrentAnnotationObjects(This,retVal)	\
    ( (This)->lpVtbl -> GetCurrentAnnotationObjects(This,retVal) ) 

#define IUIAutomationSpreadsheetItemPattern_GetCurrentAnnotationTypes(This,retVal)	\
    ( (This)->lpVtbl -> GetCurrentAnnotationTypes(This,retVal) ) 

#define IUIAutomationSpreadsheetItemPattern_get_CachedFormula(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedFormula(This,retVal) ) 

#define IUIAutomationSpreadsheetItemPattern_GetCachedAnnotationObjects(This,retVal)	\
    ( (This)->lpVtbl -> GetCachedAnnotationObjects(This,retVal) ) 

#define IUIAutomationSpreadsheetItemPattern_GetCachedAnnotationTypes(This,retVal)	\
    ( (This)->lpVtbl -> GetCachedAnnotationTypes(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationSpreadsheetItemPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationTransformPattern2_INTERFACE_DEFINED__
#define __IUIAutomationTransformPattern2_INTERFACE_DEFINED__

/* interface IUIAutomationTransformPattern2 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationTransformPattern2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6d74d017-6ecb-4381-b38b-3c17a48ff1c2")
    IUIAutomationTransformPattern2 : public IUIAutomationTransformPattern
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Zoom( 
            /* [in] */ double zoomValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ZoomByUnit( 
            /* [in] */ enum ZoomUnit zoomUnit) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentCanZoom( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedCanZoom( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentZoomLevel( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedZoomLevel( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentZoomMinimum( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedZoomMinimum( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentZoomMaximum( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedZoomMaximum( 
            /* [retval][out] */ double *retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationTransformPattern2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationTransformPattern2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationTransformPattern2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationTransformPattern2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Move )( 
            IUIAutomationTransformPattern2 * This,
            /* [in] */ double x,
            /* [in] */ double y);
        
        HRESULT ( STDMETHODCALLTYPE *Resize )( 
            IUIAutomationTransformPattern2 * This,
            /* [in] */ double width,
            /* [in] */ double height);
        
        HRESULT ( STDMETHODCALLTYPE *Rotate )( 
            IUIAutomationTransformPattern2 * This,
            /* [in] */ double degrees);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentCanMove )( 
            IUIAutomationTransformPattern2 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentCanResize )( 
            IUIAutomationTransformPattern2 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentCanRotate )( 
            IUIAutomationTransformPattern2 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedCanMove )( 
            IUIAutomationTransformPattern2 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedCanResize )( 
            IUIAutomationTransformPattern2 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedCanRotate )( 
            IUIAutomationTransformPattern2 * This,
            /* [retval][out] */ BOOL *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *Zoom )( 
            IUIAutomationTransformPattern2 * This,
            /* [in] */ double zoomValue);
        
        HRESULT ( STDMETHODCALLTYPE *ZoomByUnit )( 
            IUIAutomationTransformPattern2 * This,
            /* [in] */ enum ZoomUnit zoomUnit);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentCanZoom )( 
            IUIAutomationTransformPattern2 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedCanZoom )( 
            IUIAutomationTransformPattern2 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentZoomLevel )( 
            IUIAutomationTransformPattern2 * This,
            /* [retval][out] */ double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedZoomLevel )( 
            IUIAutomationTransformPattern2 * This,
            /* [retval][out] */ double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentZoomMinimum )( 
            IUIAutomationTransformPattern2 * This,
            /* [retval][out] */ double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedZoomMinimum )( 
            IUIAutomationTransformPattern2 * This,
            /* [retval][out] */ double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentZoomMaximum )( 
            IUIAutomationTransformPattern2 * This,
            /* [retval][out] */ double *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedZoomMaximum )( 
            IUIAutomationTransformPattern2 * This,
            /* [retval][out] */ double *retVal);
        
        END_INTERFACE
    } IUIAutomationTransformPattern2Vtbl;

    interface IUIAutomationTransformPattern2
    {
        CONST_VTBL struct IUIAutomationTransformPattern2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationTransformPattern2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationTransformPattern2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationTransformPattern2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationTransformPattern2_Move(This,x,y)	\
    ( (This)->lpVtbl -> Move(This,x,y) ) 

#define IUIAutomationTransformPattern2_Resize(This,width,height)	\
    ( (This)->lpVtbl -> Resize(This,width,height) ) 

#define IUIAutomationTransformPattern2_Rotate(This,degrees)	\
    ( (This)->lpVtbl -> Rotate(This,degrees) ) 

#define IUIAutomationTransformPattern2_get_CurrentCanMove(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentCanMove(This,retVal) ) 

#define IUIAutomationTransformPattern2_get_CurrentCanResize(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentCanResize(This,retVal) ) 

#define IUIAutomationTransformPattern2_get_CurrentCanRotate(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentCanRotate(This,retVal) ) 

#define IUIAutomationTransformPattern2_get_CachedCanMove(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedCanMove(This,retVal) ) 

#define IUIAutomationTransformPattern2_get_CachedCanResize(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedCanResize(This,retVal) ) 

#define IUIAutomationTransformPattern2_get_CachedCanRotate(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedCanRotate(This,retVal) ) 


#define IUIAutomationTransformPattern2_Zoom(This,zoomValue)	\
    ( (This)->lpVtbl -> Zoom(This,zoomValue) ) 

#define IUIAutomationTransformPattern2_ZoomByUnit(This,zoomUnit)	\
    ( (This)->lpVtbl -> ZoomByUnit(This,zoomUnit) ) 

#define IUIAutomationTransformPattern2_get_CurrentCanZoom(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentCanZoom(This,retVal) ) 

#define IUIAutomationTransformPattern2_get_CachedCanZoom(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedCanZoom(This,retVal) ) 

#define IUIAutomationTransformPattern2_get_CurrentZoomLevel(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentZoomLevel(This,retVal) ) 

#define IUIAutomationTransformPattern2_get_CachedZoomLevel(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedZoomLevel(This,retVal) ) 

#define IUIAutomationTransformPattern2_get_CurrentZoomMinimum(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentZoomMinimum(This,retVal) ) 

#define IUIAutomationTransformPattern2_get_CachedZoomMinimum(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedZoomMinimum(This,retVal) ) 

#define IUIAutomationTransformPattern2_get_CurrentZoomMaximum(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentZoomMaximum(This,retVal) ) 

#define IUIAutomationTransformPattern2_get_CachedZoomMaximum(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedZoomMaximum(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationTransformPattern2_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationTextChildPattern_INTERFACE_DEFINED__
#define __IUIAutomationTextChildPattern_INTERFACE_DEFINED__

/* interface IUIAutomationTextChildPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationTextChildPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6552b038-ae05-40c8-abfd-aa08352aab86")
    IUIAutomationTextChildPattern : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TextContainer( 
            /* [retval][out] */ IUIAutomationElement **container) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TextRange( 
            /* [retval][out] */ IUIAutomationTextRange **range) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationTextChildPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationTextChildPattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationTextChildPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationTextChildPattern * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TextContainer )( 
            IUIAutomationTextChildPattern * This,
            /* [retval][out] */ IUIAutomationElement **container);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TextRange )( 
            IUIAutomationTextChildPattern * This,
            /* [retval][out] */ IUIAutomationTextRange **range);
        
        END_INTERFACE
    } IUIAutomationTextChildPatternVtbl;

    interface IUIAutomationTextChildPattern
    {
        CONST_VTBL struct IUIAutomationTextChildPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationTextChildPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationTextChildPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationTextChildPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationTextChildPattern_get_TextContainer(This,container)	\
    ( (This)->lpVtbl -> get_TextContainer(This,container) ) 

#define IUIAutomationTextChildPattern_get_TextRange(This,range)	\
    ( (This)->lpVtbl -> get_TextRange(This,range) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationTextChildPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationDragPattern_INTERFACE_DEFINED__
#define __IUIAutomationDragPattern_INTERFACE_DEFINED__

/* interface IUIAutomationDragPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationDragPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1dc7b570-1f54-4bad-bcda-d36a722fb7bd")
    IUIAutomationDragPattern : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsGrabbed( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsGrabbed( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentDropEffect( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedDropEffect( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentDropEffects( 
            /* [retval][out] */ SAFEARRAY * *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedDropEffects( 
            /* [retval][out] */ SAFEARRAY * *retVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentGrabbedItems( 
            /* [retval][out] */ IUIAutomationElementArray **retVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCachedGrabbedItems( 
            /* [retval][out] */ IUIAutomationElementArray **retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationDragPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationDragPattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationDragPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationDragPattern * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsGrabbed )( 
            IUIAutomationDragPattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsGrabbed )( 
            IUIAutomationDragPattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentDropEffect )( 
            IUIAutomationDragPattern * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedDropEffect )( 
            IUIAutomationDragPattern * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentDropEffects )( 
            IUIAutomationDragPattern * This,
            /* [retval][out] */ SAFEARRAY * *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedDropEffects )( 
            IUIAutomationDragPattern * This,
            /* [retval][out] */ SAFEARRAY * *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentGrabbedItems )( 
            IUIAutomationDragPattern * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedGrabbedItems )( 
            IUIAutomationDragPattern * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        END_INTERFACE
    } IUIAutomationDragPatternVtbl;

    interface IUIAutomationDragPattern
    {
        CONST_VTBL struct IUIAutomationDragPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationDragPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationDragPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationDragPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationDragPattern_get_CurrentIsGrabbed(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsGrabbed(This,retVal) ) 

#define IUIAutomationDragPattern_get_CachedIsGrabbed(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsGrabbed(This,retVal) ) 

#define IUIAutomationDragPattern_get_CurrentDropEffect(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentDropEffect(This,retVal) ) 

#define IUIAutomationDragPattern_get_CachedDropEffect(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedDropEffect(This,retVal) ) 

#define IUIAutomationDragPattern_get_CurrentDropEffects(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentDropEffects(This,retVal) ) 

#define IUIAutomationDragPattern_get_CachedDropEffects(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedDropEffects(This,retVal) ) 

#define IUIAutomationDragPattern_GetCurrentGrabbedItems(This,retVal)	\
    ( (This)->lpVtbl -> GetCurrentGrabbedItems(This,retVal) ) 

#define IUIAutomationDragPattern_GetCachedGrabbedItems(This,retVal)	\
    ( (This)->lpVtbl -> GetCachedGrabbedItems(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationDragPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationDropTargetPattern_INTERFACE_DEFINED__
#define __IUIAutomationDropTargetPattern_INTERFACE_DEFINED__

/* interface IUIAutomationDropTargetPattern */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationDropTargetPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("69a095f7-eee4-430e-a46b-fb73b1ae39a5")
    IUIAutomationDropTargetPattern : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentDropTargetEffect( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedDropTargetEffect( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentDropTargetEffects( 
            /* [retval][out] */ SAFEARRAY * *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedDropTargetEffects( 
            /* [retval][out] */ SAFEARRAY * *retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationDropTargetPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationDropTargetPattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationDropTargetPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationDropTargetPattern * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentDropTargetEffect )( 
            IUIAutomationDropTargetPattern * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedDropTargetEffect )( 
            IUIAutomationDropTargetPattern * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentDropTargetEffects )( 
            IUIAutomationDropTargetPattern * This,
            /* [retval][out] */ SAFEARRAY * *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedDropTargetEffects )( 
            IUIAutomationDropTargetPattern * This,
            /* [retval][out] */ SAFEARRAY * *retVal);
        
        END_INTERFACE
    } IUIAutomationDropTargetPatternVtbl;

    interface IUIAutomationDropTargetPattern
    {
        CONST_VTBL struct IUIAutomationDropTargetPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationDropTargetPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationDropTargetPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationDropTargetPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationDropTargetPattern_get_CurrentDropTargetEffect(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentDropTargetEffect(This,retVal) ) 

#define IUIAutomationDropTargetPattern_get_CachedDropTargetEffect(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedDropTargetEffect(This,retVal) ) 

#define IUIAutomationDropTargetPattern_get_CurrentDropTargetEffects(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentDropTargetEffects(This,retVal) ) 

#define IUIAutomationDropTargetPattern_get_CachedDropTargetEffects(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedDropTargetEffects(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationDropTargetPattern_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationElement2_INTERFACE_DEFINED__
#define __IUIAutomationElement2_INTERFACE_DEFINED__

/* interface IUIAutomationElement2 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationElement2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6749c683-f70d-4487-a698-5f79d55290d6")
    IUIAutomationElement2 : public IUIAutomationElement
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentOptimizeForVisualContent( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedOptimizeForVisualContent( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentLiveSetting( 
            /* [retval][out] */ enum LiveSetting *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedLiveSetting( 
            /* [retval][out] */ enum LiveSetting *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentFlowsFrom( 
            /* [retval][out] */ IUIAutomationElementArray **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedFlowsFrom( 
            /* [retval][out] */ IUIAutomationElementArray **retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationElement2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationElement2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationElement2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationElement2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetFocus )( 
            IUIAutomationElement2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeId )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ SAFEARRAY * *runtimeId);
        
        HRESULT ( STDMETHODCALLTYPE *FindFirst )( 
            IUIAutomationElement2 * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [retval][out] */ IUIAutomationElement **found);
        
        HRESULT ( STDMETHODCALLTYPE *FindAll )( 
            IUIAutomationElement2 * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [retval][out] */ IUIAutomationElementArray **found);
        
        HRESULT ( STDMETHODCALLTYPE *FindFirstBuildCache )( 
            IUIAutomationElement2 * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **found);
        
        HRESULT ( STDMETHODCALLTYPE *FindAllBuildCache )( 
            IUIAutomationElement2 * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElementArray **found);
        
        HRESULT ( STDMETHODCALLTYPE *BuildUpdatedCache )( 
            IUIAutomationElement2 * This,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **updatedElement);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPropertyValue )( 
            IUIAutomationElement2 * This,
            /* [in] */ PROPERTYID propertyId,
            /* [retval][out] */ VARIANT *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPropertyValueEx )( 
            IUIAutomationElement2 * This,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ BOOL ignoreDefaultValue,
            /* [retval][out] */ VARIANT *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedPropertyValue )( 
            IUIAutomationElement2 * This,
            /* [in] */ PROPERTYID propertyId,
            /* [retval][out] */ VARIANT *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedPropertyValueEx )( 
            IUIAutomationElement2 * This,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ BOOL ignoreDefaultValue,
            /* [retval][out] */ VARIANT *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPatternAs )( 
            IUIAutomationElement2 * This,
            /* [in] */ PATTERNID patternId,
            /* [in] */ REFIID riid,
            /* [retval][iid_is][out] */ void **patternObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedPatternAs )( 
            IUIAutomationElement2 * This,
            /* [in] */ PATTERNID patternId,
            /* [in] */ REFIID riid,
            /* [retval][iid_is][out] */ void **patternObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPattern )( 
            IUIAutomationElement2 * This,
            /* [in] */ PATTERNID patternId,
            /* [retval][out] */ IUnknown **patternObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedPattern )( 
            IUIAutomationElement2 * This,
            /* [in] */ PATTERNID patternId,
            /* [retval][out] */ IUnknown **patternObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedParent )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ IUIAutomationElement **parent);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedChildren )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ IUIAutomationElementArray **children);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentProcessId )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentControlType )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ CONTROLTYPEID *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLocalizedControlType )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentName )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAcceleratorKey )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAccessKey )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentHasKeyboardFocus )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsKeyboardFocusable )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsEnabled )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAutomationId )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentClassName )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentHelpText )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentCulture )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsControlElement )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsContentElement )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsPassword )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentNativeWindowHandle )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ UIA_HWND *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentItemType )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsOffscreen )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentOrientation )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ enum OrientationType *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentFrameworkId )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsRequiredForForm )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentItemStatus )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentBoundingRectangle )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ RECT *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLabeledBy )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ IUIAutomationElement **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAriaRole )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAriaProperties )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsDataValidForForm )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentControllerFor )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentDescribedBy )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentFlowsTo )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentProviderDescription )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedProcessId )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedControlType )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ CONTROLTYPEID *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedLocalizedControlType )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedName )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAcceleratorKey )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAccessKey )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedHasKeyboardFocus )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsKeyboardFocusable )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsEnabled )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAutomationId )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedClassName )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedHelpText )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedCulture )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsControlElement )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsContentElement )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsPassword )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedNativeWindowHandle )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ UIA_HWND *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedItemType )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsOffscreen )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedOrientation )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ enum OrientationType *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedFrameworkId )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsRequiredForForm )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedItemStatus )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedBoundingRectangle )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ RECT *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedLabeledBy )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ IUIAutomationElement **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAriaRole )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAriaProperties )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsDataValidForForm )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedControllerFor )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedDescribedBy )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedFlowsTo )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedProviderDescription )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BSTR *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetClickablePoint )( 
            IUIAutomationElement2 * This,
            /* [out] */ POINT *clickable,
            /* [retval][out] */ BOOL *gotClickable);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentOptimizeForVisualContent )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedOptimizeForVisualContent )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLiveSetting )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ enum LiveSetting *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedLiveSetting )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ enum LiveSetting *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentFlowsFrom )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedFlowsFrom )( 
            IUIAutomationElement2 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        END_INTERFACE
    } IUIAutomationElement2Vtbl;

    interface IUIAutomationElement2
    {
        CONST_VTBL struct IUIAutomationElement2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationElement2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationElement2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationElement2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationElement2_SetFocus(This)	\
    ( (This)->lpVtbl -> SetFocus(This) ) 

#define IUIAutomationElement2_GetRuntimeId(This,runtimeId)	\
    ( (This)->lpVtbl -> GetRuntimeId(This,runtimeId) ) 

#define IUIAutomationElement2_FindFirst(This,scope,condition,found)	\
    ( (This)->lpVtbl -> FindFirst(This,scope,condition,found) ) 

#define IUIAutomationElement2_FindAll(This,scope,condition,found)	\
    ( (This)->lpVtbl -> FindAll(This,scope,condition,found) ) 

#define IUIAutomationElement2_FindFirstBuildCache(This,scope,condition,cacheRequest,found)	\
    ( (This)->lpVtbl -> FindFirstBuildCache(This,scope,condition,cacheRequest,found) ) 

#define IUIAutomationElement2_FindAllBuildCache(This,scope,condition,cacheRequest,found)	\
    ( (This)->lpVtbl -> FindAllBuildCache(This,scope,condition,cacheRequest,found) ) 

#define IUIAutomationElement2_BuildUpdatedCache(This,cacheRequest,updatedElement)	\
    ( (This)->lpVtbl -> BuildUpdatedCache(This,cacheRequest,updatedElement) ) 

#define IUIAutomationElement2_GetCurrentPropertyValue(This,propertyId,retVal)	\
    ( (This)->lpVtbl -> GetCurrentPropertyValue(This,propertyId,retVal) ) 

#define IUIAutomationElement2_GetCurrentPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal)	\
    ( (This)->lpVtbl -> GetCurrentPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) ) 

#define IUIAutomationElement2_GetCachedPropertyValue(This,propertyId,retVal)	\
    ( (This)->lpVtbl -> GetCachedPropertyValue(This,propertyId,retVal) ) 

#define IUIAutomationElement2_GetCachedPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal)	\
    ( (This)->lpVtbl -> GetCachedPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) ) 

#define IUIAutomationElement2_GetCurrentPatternAs(This,patternId,riid,patternObject)	\
    ( (This)->lpVtbl -> GetCurrentPatternAs(This,patternId,riid,patternObject) ) 

#define IUIAutomationElement2_GetCachedPatternAs(This,patternId,riid,patternObject)	\
    ( (This)->lpVtbl -> GetCachedPatternAs(This,patternId,riid,patternObject) ) 

#define IUIAutomationElement2_GetCurrentPattern(This,patternId,patternObject)	\
    ( (This)->lpVtbl -> GetCurrentPattern(This,patternId,patternObject) ) 

#define IUIAutomationElement2_GetCachedPattern(This,patternId,patternObject)	\
    ( (This)->lpVtbl -> GetCachedPattern(This,patternId,patternObject) ) 

#define IUIAutomationElement2_GetCachedParent(This,parent)	\
    ( (This)->lpVtbl -> GetCachedParent(This,parent) ) 

#define IUIAutomationElement2_GetCachedChildren(This,children)	\
    ( (This)->lpVtbl -> GetCachedChildren(This,children) ) 

#define IUIAutomationElement2_get_CurrentProcessId(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentProcessId(This,retVal) ) 

#define IUIAutomationElement2_get_CurrentControlType(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentControlType(This,retVal) ) 

#define IUIAutomationElement2_get_CurrentLocalizedControlType(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLocalizedControlType(This,retVal) ) 

#define IUIAutomationElement2_get_CurrentName(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentName(This,retVal) ) 

#define IUIAutomationElement2_get_CurrentAcceleratorKey(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAcceleratorKey(This,retVal) ) 

#define IUIAutomationElement2_get_CurrentAccessKey(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAccessKey(This,retVal) ) 

#define IUIAutomationElement2_get_CurrentHasKeyboardFocus(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentHasKeyboardFocus(This,retVal) ) 

#define IUIAutomationElement2_get_CurrentIsKeyboardFocusable(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsKeyboardFocusable(This,retVal) ) 

#define IUIAutomationElement2_get_CurrentIsEnabled(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsEnabled(This,retVal) ) 

#define IUIAutomationElement2_get_CurrentAutomationId(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAutomationId(This,retVal) ) 

#define IUIAutomationElement2_get_CurrentClassName(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentClassName(This,retVal) ) 

#define IUIAutomationElement2_get_CurrentHelpText(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentHelpText(This,retVal) ) 

#define IUIAutomationElement2_get_CurrentCulture(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentCulture(This,retVal) ) 

#define IUIAutomationElement2_get_CurrentIsControlElement(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsControlElement(This,retVal) ) 

#define IUIAutomationElement2_get_CurrentIsContentElement(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsContentElement(This,retVal) ) 

#define IUIAutomationElement2_get_CurrentIsPassword(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsPassword(This,retVal) ) 

#define IUIAutomationElement2_get_CurrentNativeWindowHandle(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentNativeWindowHandle(This,retVal) ) 

#define IUIAutomationElement2_get_CurrentItemType(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentItemType(This,retVal) ) 

#define IUIAutomationElement2_get_CurrentIsOffscreen(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsOffscreen(This,retVal) ) 

#define IUIAutomationElement2_get_CurrentOrientation(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentOrientation(This,retVal) ) 

#define IUIAutomationElement2_get_CurrentFrameworkId(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentFrameworkId(This,retVal) ) 

#define IUIAutomationElement2_get_CurrentIsRequiredForForm(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsRequiredForForm(This,retVal) ) 

#define IUIAutomationElement2_get_CurrentItemStatus(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentItemStatus(This,retVal) ) 

#define IUIAutomationElement2_get_CurrentBoundingRectangle(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentBoundingRectangle(This,retVal) ) 

#define IUIAutomationElement2_get_CurrentLabeledBy(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLabeledBy(This,retVal) ) 

#define IUIAutomationElement2_get_CurrentAriaRole(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAriaRole(This,retVal) ) 

#define IUIAutomationElement2_get_CurrentAriaProperties(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAriaProperties(This,retVal) ) 

#define IUIAutomationElement2_get_CurrentIsDataValidForForm(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsDataValidForForm(This,retVal) ) 

#define IUIAutomationElement2_get_CurrentControllerFor(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentControllerFor(This,retVal) ) 

#define IUIAutomationElement2_get_CurrentDescribedBy(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentDescribedBy(This,retVal) ) 

#define IUIAutomationElement2_get_CurrentFlowsTo(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentFlowsTo(This,retVal) ) 

#define IUIAutomationElement2_get_CurrentProviderDescription(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentProviderDescription(This,retVal) ) 

#define IUIAutomationElement2_get_CachedProcessId(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedProcessId(This,retVal) ) 

#define IUIAutomationElement2_get_CachedControlType(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedControlType(This,retVal) ) 

#define IUIAutomationElement2_get_CachedLocalizedControlType(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedLocalizedControlType(This,retVal) ) 

#define IUIAutomationElement2_get_CachedName(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedName(This,retVal) ) 

#define IUIAutomationElement2_get_CachedAcceleratorKey(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAcceleratorKey(This,retVal) ) 

#define IUIAutomationElement2_get_CachedAccessKey(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAccessKey(This,retVal) ) 

#define IUIAutomationElement2_get_CachedHasKeyboardFocus(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedHasKeyboardFocus(This,retVal) ) 

#define IUIAutomationElement2_get_CachedIsKeyboardFocusable(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsKeyboardFocusable(This,retVal) ) 

#define IUIAutomationElement2_get_CachedIsEnabled(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsEnabled(This,retVal) ) 

#define IUIAutomationElement2_get_CachedAutomationId(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAutomationId(This,retVal) ) 

#define IUIAutomationElement2_get_CachedClassName(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedClassName(This,retVal) ) 

#define IUIAutomationElement2_get_CachedHelpText(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedHelpText(This,retVal) ) 

#define IUIAutomationElement2_get_CachedCulture(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedCulture(This,retVal) ) 

#define IUIAutomationElement2_get_CachedIsControlElement(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsControlElement(This,retVal) ) 

#define IUIAutomationElement2_get_CachedIsContentElement(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsContentElement(This,retVal) ) 

#define IUIAutomationElement2_get_CachedIsPassword(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsPassword(This,retVal) ) 

#define IUIAutomationElement2_get_CachedNativeWindowHandle(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedNativeWindowHandle(This,retVal) ) 

#define IUIAutomationElement2_get_CachedItemType(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedItemType(This,retVal) ) 

#define IUIAutomationElement2_get_CachedIsOffscreen(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsOffscreen(This,retVal) ) 

#define IUIAutomationElement2_get_CachedOrientation(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedOrientation(This,retVal) ) 

#define IUIAutomationElement2_get_CachedFrameworkId(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedFrameworkId(This,retVal) ) 

#define IUIAutomationElement2_get_CachedIsRequiredForForm(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsRequiredForForm(This,retVal) ) 

#define IUIAutomationElement2_get_CachedItemStatus(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedItemStatus(This,retVal) ) 

#define IUIAutomationElement2_get_CachedBoundingRectangle(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedBoundingRectangle(This,retVal) ) 

#define IUIAutomationElement2_get_CachedLabeledBy(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedLabeledBy(This,retVal) ) 

#define IUIAutomationElement2_get_CachedAriaRole(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAriaRole(This,retVal) ) 

#define IUIAutomationElement2_get_CachedAriaProperties(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAriaProperties(This,retVal) ) 

#define IUIAutomationElement2_get_CachedIsDataValidForForm(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsDataValidForForm(This,retVal) ) 

#define IUIAutomationElement2_get_CachedControllerFor(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedControllerFor(This,retVal) ) 

#define IUIAutomationElement2_get_CachedDescribedBy(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedDescribedBy(This,retVal) ) 

#define IUIAutomationElement2_get_CachedFlowsTo(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedFlowsTo(This,retVal) ) 

#define IUIAutomationElement2_get_CachedProviderDescription(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedProviderDescription(This,retVal) ) 

#define IUIAutomationElement2_GetClickablePoint(This,clickable,gotClickable)	\
    ( (This)->lpVtbl -> GetClickablePoint(This,clickable,gotClickable) ) 


#define IUIAutomationElement2_get_CurrentOptimizeForVisualContent(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentOptimizeForVisualContent(This,retVal) ) 

#define IUIAutomationElement2_get_CachedOptimizeForVisualContent(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedOptimizeForVisualContent(This,retVal) ) 

#define IUIAutomationElement2_get_CurrentLiveSetting(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLiveSetting(This,retVal) ) 

#define IUIAutomationElement2_get_CachedLiveSetting(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedLiveSetting(This,retVal) ) 

#define IUIAutomationElement2_get_CurrentFlowsFrom(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentFlowsFrom(This,retVal) ) 

#define IUIAutomationElement2_get_CachedFlowsFrom(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedFlowsFrom(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationElement2_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationElement3_INTERFACE_DEFINED__
#define __IUIAutomationElement3_INTERFACE_DEFINED__

/* interface IUIAutomationElement3 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationElement3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8471DF34-AEE0-4A01-A7DE-7DB9AF12C296")
    IUIAutomationElement3 : public IUIAutomationElement2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ShowContextMenu( void) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsPeripheral( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsPeripheral( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationElement3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationElement3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationElement3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationElement3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetFocus )( 
            IUIAutomationElement3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeId )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ SAFEARRAY * *runtimeId);
        
        HRESULT ( STDMETHODCALLTYPE *FindFirst )( 
            IUIAutomationElement3 * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [retval][out] */ IUIAutomationElement **found);
        
        HRESULT ( STDMETHODCALLTYPE *FindAll )( 
            IUIAutomationElement3 * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [retval][out] */ IUIAutomationElementArray **found);
        
        HRESULT ( STDMETHODCALLTYPE *FindFirstBuildCache )( 
            IUIAutomationElement3 * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **found);
        
        HRESULT ( STDMETHODCALLTYPE *FindAllBuildCache )( 
            IUIAutomationElement3 * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElementArray **found);
        
        HRESULT ( STDMETHODCALLTYPE *BuildUpdatedCache )( 
            IUIAutomationElement3 * This,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **updatedElement);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPropertyValue )( 
            IUIAutomationElement3 * This,
            /* [in] */ PROPERTYID propertyId,
            /* [retval][out] */ VARIANT *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPropertyValueEx )( 
            IUIAutomationElement3 * This,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ BOOL ignoreDefaultValue,
            /* [retval][out] */ VARIANT *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedPropertyValue )( 
            IUIAutomationElement3 * This,
            /* [in] */ PROPERTYID propertyId,
            /* [retval][out] */ VARIANT *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedPropertyValueEx )( 
            IUIAutomationElement3 * This,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ BOOL ignoreDefaultValue,
            /* [retval][out] */ VARIANT *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPatternAs )( 
            IUIAutomationElement3 * This,
            /* [in] */ PATTERNID patternId,
            /* [in] */ REFIID riid,
            /* [retval][iid_is][out] */ void **patternObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedPatternAs )( 
            IUIAutomationElement3 * This,
            /* [in] */ PATTERNID patternId,
            /* [in] */ REFIID riid,
            /* [retval][iid_is][out] */ void **patternObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPattern )( 
            IUIAutomationElement3 * This,
            /* [in] */ PATTERNID patternId,
            /* [retval][out] */ IUnknown **patternObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedPattern )( 
            IUIAutomationElement3 * This,
            /* [in] */ PATTERNID patternId,
            /* [retval][out] */ IUnknown **patternObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedParent )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ IUIAutomationElement **parent);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedChildren )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ IUIAutomationElementArray **children);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentProcessId )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentControlType )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ CONTROLTYPEID *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLocalizedControlType )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentName )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAcceleratorKey )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAccessKey )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentHasKeyboardFocus )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsKeyboardFocusable )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsEnabled )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAutomationId )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentClassName )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentHelpText )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentCulture )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsControlElement )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsContentElement )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsPassword )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentNativeWindowHandle )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ UIA_HWND *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentItemType )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsOffscreen )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentOrientation )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ enum OrientationType *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentFrameworkId )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsRequiredForForm )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentItemStatus )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentBoundingRectangle )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ RECT *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLabeledBy )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ IUIAutomationElement **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAriaRole )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAriaProperties )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsDataValidForForm )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentControllerFor )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentDescribedBy )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentFlowsTo )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentProviderDescription )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedProcessId )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedControlType )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ CONTROLTYPEID *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedLocalizedControlType )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedName )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAcceleratorKey )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAccessKey )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedHasKeyboardFocus )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsKeyboardFocusable )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsEnabled )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAutomationId )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedClassName )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedHelpText )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedCulture )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsControlElement )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsContentElement )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsPassword )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedNativeWindowHandle )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ UIA_HWND *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedItemType )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsOffscreen )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedOrientation )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ enum OrientationType *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedFrameworkId )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsRequiredForForm )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedItemStatus )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedBoundingRectangle )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ RECT *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedLabeledBy )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ IUIAutomationElement **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAriaRole )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAriaProperties )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsDataValidForForm )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedControllerFor )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedDescribedBy )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedFlowsTo )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedProviderDescription )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BSTR *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetClickablePoint )( 
            IUIAutomationElement3 * This,
            /* [out] */ POINT *clickable,
            /* [retval][out] */ BOOL *gotClickable);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentOptimizeForVisualContent )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedOptimizeForVisualContent )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLiveSetting )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ enum LiveSetting *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedLiveSetting )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ enum LiveSetting *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentFlowsFrom )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedFlowsFrom )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        HRESULT ( STDMETHODCALLTYPE *ShowContextMenu )( 
            IUIAutomationElement3 * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsPeripheral )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsPeripheral )( 
            IUIAutomationElement3 * This,
            /* [retval][out] */ BOOL *retVal);
        
        END_INTERFACE
    } IUIAutomationElement3Vtbl;

    interface IUIAutomationElement3
    {
        CONST_VTBL struct IUIAutomationElement3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationElement3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationElement3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationElement3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationElement3_SetFocus(This)	\
    ( (This)->lpVtbl -> SetFocus(This) ) 

#define IUIAutomationElement3_GetRuntimeId(This,runtimeId)	\
    ( (This)->lpVtbl -> GetRuntimeId(This,runtimeId) ) 

#define IUIAutomationElement3_FindFirst(This,scope,condition,found)	\
    ( (This)->lpVtbl -> FindFirst(This,scope,condition,found) ) 

#define IUIAutomationElement3_FindAll(This,scope,condition,found)	\
    ( (This)->lpVtbl -> FindAll(This,scope,condition,found) ) 

#define IUIAutomationElement3_FindFirstBuildCache(This,scope,condition,cacheRequest,found)	\
    ( (This)->lpVtbl -> FindFirstBuildCache(This,scope,condition,cacheRequest,found) ) 

#define IUIAutomationElement3_FindAllBuildCache(This,scope,condition,cacheRequest,found)	\
    ( (This)->lpVtbl -> FindAllBuildCache(This,scope,condition,cacheRequest,found) ) 

#define IUIAutomationElement3_BuildUpdatedCache(This,cacheRequest,updatedElement)	\
    ( (This)->lpVtbl -> BuildUpdatedCache(This,cacheRequest,updatedElement) ) 

#define IUIAutomationElement3_GetCurrentPropertyValue(This,propertyId,retVal)	\
    ( (This)->lpVtbl -> GetCurrentPropertyValue(This,propertyId,retVal) ) 

#define IUIAutomationElement3_GetCurrentPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal)	\
    ( (This)->lpVtbl -> GetCurrentPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) ) 

#define IUIAutomationElement3_GetCachedPropertyValue(This,propertyId,retVal)	\
    ( (This)->lpVtbl -> GetCachedPropertyValue(This,propertyId,retVal) ) 

#define IUIAutomationElement3_GetCachedPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal)	\
    ( (This)->lpVtbl -> GetCachedPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) ) 

#define IUIAutomationElement3_GetCurrentPatternAs(This,patternId,riid,patternObject)	\
    ( (This)->lpVtbl -> GetCurrentPatternAs(This,patternId,riid,patternObject) ) 

#define IUIAutomationElement3_GetCachedPatternAs(This,patternId,riid,patternObject)	\
    ( (This)->lpVtbl -> GetCachedPatternAs(This,patternId,riid,patternObject) ) 

#define IUIAutomationElement3_GetCurrentPattern(This,patternId,patternObject)	\
    ( (This)->lpVtbl -> GetCurrentPattern(This,patternId,patternObject) ) 

#define IUIAutomationElement3_GetCachedPattern(This,patternId,patternObject)	\
    ( (This)->lpVtbl -> GetCachedPattern(This,patternId,patternObject) ) 

#define IUIAutomationElement3_GetCachedParent(This,parent)	\
    ( (This)->lpVtbl -> GetCachedParent(This,parent) ) 

#define IUIAutomationElement3_GetCachedChildren(This,children)	\
    ( (This)->lpVtbl -> GetCachedChildren(This,children) ) 

#define IUIAutomationElement3_get_CurrentProcessId(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentProcessId(This,retVal) ) 

#define IUIAutomationElement3_get_CurrentControlType(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentControlType(This,retVal) ) 

#define IUIAutomationElement3_get_CurrentLocalizedControlType(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLocalizedControlType(This,retVal) ) 

#define IUIAutomationElement3_get_CurrentName(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentName(This,retVal) ) 

#define IUIAutomationElement3_get_CurrentAcceleratorKey(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAcceleratorKey(This,retVal) ) 

#define IUIAutomationElement3_get_CurrentAccessKey(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAccessKey(This,retVal) ) 

#define IUIAutomationElement3_get_CurrentHasKeyboardFocus(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentHasKeyboardFocus(This,retVal) ) 

#define IUIAutomationElement3_get_CurrentIsKeyboardFocusable(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsKeyboardFocusable(This,retVal) ) 

#define IUIAutomationElement3_get_CurrentIsEnabled(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsEnabled(This,retVal) ) 

#define IUIAutomationElement3_get_CurrentAutomationId(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAutomationId(This,retVal) ) 

#define IUIAutomationElement3_get_CurrentClassName(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentClassName(This,retVal) ) 

#define IUIAutomationElement3_get_CurrentHelpText(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentHelpText(This,retVal) ) 

#define IUIAutomationElement3_get_CurrentCulture(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentCulture(This,retVal) ) 

#define IUIAutomationElement3_get_CurrentIsControlElement(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsControlElement(This,retVal) ) 

#define IUIAutomationElement3_get_CurrentIsContentElement(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsContentElement(This,retVal) ) 

#define IUIAutomationElement3_get_CurrentIsPassword(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsPassword(This,retVal) ) 

#define IUIAutomationElement3_get_CurrentNativeWindowHandle(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentNativeWindowHandle(This,retVal) ) 

#define IUIAutomationElement3_get_CurrentItemType(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentItemType(This,retVal) ) 

#define IUIAutomationElement3_get_CurrentIsOffscreen(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsOffscreen(This,retVal) ) 

#define IUIAutomationElement3_get_CurrentOrientation(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentOrientation(This,retVal) ) 

#define IUIAutomationElement3_get_CurrentFrameworkId(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentFrameworkId(This,retVal) ) 

#define IUIAutomationElement3_get_CurrentIsRequiredForForm(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsRequiredForForm(This,retVal) ) 

#define IUIAutomationElement3_get_CurrentItemStatus(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentItemStatus(This,retVal) ) 

#define IUIAutomationElement3_get_CurrentBoundingRectangle(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentBoundingRectangle(This,retVal) ) 

#define IUIAutomationElement3_get_CurrentLabeledBy(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLabeledBy(This,retVal) ) 

#define IUIAutomationElement3_get_CurrentAriaRole(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAriaRole(This,retVal) ) 

#define IUIAutomationElement3_get_CurrentAriaProperties(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAriaProperties(This,retVal) ) 

#define IUIAutomationElement3_get_CurrentIsDataValidForForm(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsDataValidForForm(This,retVal) ) 

#define IUIAutomationElement3_get_CurrentControllerFor(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentControllerFor(This,retVal) ) 

#define IUIAutomationElement3_get_CurrentDescribedBy(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentDescribedBy(This,retVal) ) 

#define IUIAutomationElement3_get_CurrentFlowsTo(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentFlowsTo(This,retVal) ) 

#define IUIAutomationElement3_get_CurrentProviderDescription(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentProviderDescription(This,retVal) ) 

#define IUIAutomationElement3_get_CachedProcessId(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedProcessId(This,retVal) ) 

#define IUIAutomationElement3_get_CachedControlType(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedControlType(This,retVal) ) 

#define IUIAutomationElement3_get_CachedLocalizedControlType(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedLocalizedControlType(This,retVal) ) 

#define IUIAutomationElement3_get_CachedName(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedName(This,retVal) ) 

#define IUIAutomationElement3_get_CachedAcceleratorKey(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAcceleratorKey(This,retVal) ) 

#define IUIAutomationElement3_get_CachedAccessKey(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAccessKey(This,retVal) ) 

#define IUIAutomationElement3_get_CachedHasKeyboardFocus(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedHasKeyboardFocus(This,retVal) ) 

#define IUIAutomationElement3_get_CachedIsKeyboardFocusable(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsKeyboardFocusable(This,retVal) ) 

#define IUIAutomationElement3_get_CachedIsEnabled(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsEnabled(This,retVal) ) 

#define IUIAutomationElement3_get_CachedAutomationId(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAutomationId(This,retVal) ) 

#define IUIAutomationElement3_get_CachedClassName(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedClassName(This,retVal) ) 

#define IUIAutomationElement3_get_CachedHelpText(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedHelpText(This,retVal) ) 

#define IUIAutomationElement3_get_CachedCulture(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedCulture(This,retVal) ) 

#define IUIAutomationElement3_get_CachedIsControlElement(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsControlElement(This,retVal) ) 

#define IUIAutomationElement3_get_CachedIsContentElement(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsContentElement(This,retVal) ) 

#define IUIAutomationElement3_get_CachedIsPassword(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsPassword(This,retVal) ) 

#define IUIAutomationElement3_get_CachedNativeWindowHandle(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedNativeWindowHandle(This,retVal) ) 

#define IUIAutomationElement3_get_CachedItemType(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedItemType(This,retVal) ) 

#define IUIAutomationElement3_get_CachedIsOffscreen(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsOffscreen(This,retVal) ) 

#define IUIAutomationElement3_get_CachedOrientation(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedOrientation(This,retVal) ) 

#define IUIAutomationElement3_get_CachedFrameworkId(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedFrameworkId(This,retVal) ) 

#define IUIAutomationElement3_get_CachedIsRequiredForForm(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsRequiredForForm(This,retVal) ) 

#define IUIAutomationElement3_get_CachedItemStatus(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedItemStatus(This,retVal) ) 

#define IUIAutomationElement3_get_CachedBoundingRectangle(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedBoundingRectangle(This,retVal) ) 

#define IUIAutomationElement3_get_CachedLabeledBy(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedLabeledBy(This,retVal) ) 

#define IUIAutomationElement3_get_CachedAriaRole(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAriaRole(This,retVal) ) 

#define IUIAutomationElement3_get_CachedAriaProperties(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAriaProperties(This,retVal) ) 

#define IUIAutomationElement3_get_CachedIsDataValidForForm(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsDataValidForForm(This,retVal) ) 

#define IUIAutomationElement3_get_CachedControllerFor(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedControllerFor(This,retVal) ) 

#define IUIAutomationElement3_get_CachedDescribedBy(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedDescribedBy(This,retVal) ) 

#define IUIAutomationElement3_get_CachedFlowsTo(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedFlowsTo(This,retVal) ) 

#define IUIAutomationElement3_get_CachedProviderDescription(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedProviderDescription(This,retVal) ) 

#define IUIAutomationElement3_GetClickablePoint(This,clickable,gotClickable)	\
    ( (This)->lpVtbl -> GetClickablePoint(This,clickable,gotClickable) ) 


#define IUIAutomationElement3_get_CurrentOptimizeForVisualContent(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentOptimizeForVisualContent(This,retVal) ) 

#define IUIAutomationElement3_get_CachedOptimizeForVisualContent(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedOptimizeForVisualContent(This,retVal) ) 

#define IUIAutomationElement3_get_CurrentLiveSetting(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLiveSetting(This,retVal) ) 

#define IUIAutomationElement3_get_CachedLiveSetting(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedLiveSetting(This,retVal) ) 

#define IUIAutomationElement3_get_CurrentFlowsFrom(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentFlowsFrom(This,retVal) ) 

#define IUIAutomationElement3_get_CachedFlowsFrom(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedFlowsFrom(This,retVal) ) 


#define IUIAutomationElement3_ShowContextMenu(This)	\
    ( (This)->lpVtbl -> ShowContextMenu(This) ) 

#define IUIAutomationElement3_get_CurrentIsPeripheral(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsPeripheral(This,retVal) ) 

#define IUIAutomationElement3_get_CachedIsPeripheral(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsPeripheral(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationElement3_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationElement4_INTERFACE_DEFINED__
#define __IUIAutomationElement4_INTERFACE_DEFINED__

/* interface IUIAutomationElement4 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationElement4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3B6E233C-52FB-4063-A4C9-77C075C2A06B")
    IUIAutomationElement4 : public IUIAutomationElement3
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentPositionInSet( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentSizeOfSet( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentLevel( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentAnnotationTypes( 
            /* [retval][out] */ SAFEARRAY * *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentAnnotationObjects( 
            /* [retval][out] */ IUIAutomationElementArray **retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedPositionInSet( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedSizeOfSet( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedLevel( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedAnnotationTypes( 
            /* [retval][out] */ SAFEARRAY * *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedAnnotationObjects( 
            /* [retval][out] */ IUIAutomationElementArray **retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationElement4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationElement4 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationElement4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationElement4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetFocus )( 
            IUIAutomationElement4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeId )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ SAFEARRAY * *runtimeId);
        
        HRESULT ( STDMETHODCALLTYPE *FindFirst )( 
            IUIAutomationElement4 * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [retval][out] */ IUIAutomationElement **found);
        
        HRESULT ( STDMETHODCALLTYPE *FindAll )( 
            IUIAutomationElement4 * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [retval][out] */ IUIAutomationElementArray **found);
        
        HRESULT ( STDMETHODCALLTYPE *FindFirstBuildCache )( 
            IUIAutomationElement4 * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **found);
        
        HRESULT ( STDMETHODCALLTYPE *FindAllBuildCache )( 
            IUIAutomationElement4 * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElementArray **found);
        
        HRESULT ( STDMETHODCALLTYPE *BuildUpdatedCache )( 
            IUIAutomationElement4 * This,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **updatedElement);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPropertyValue )( 
            IUIAutomationElement4 * This,
            /* [in] */ PROPERTYID propertyId,
            /* [retval][out] */ VARIANT *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPropertyValueEx )( 
            IUIAutomationElement4 * This,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ BOOL ignoreDefaultValue,
            /* [retval][out] */ VARIANT *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedPropertyValue )( 
            IUIAutomationElement4 * This,
            /* [in] */ PROPERTYID propertyId,
            /* [retval][out] */ VARIANT *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedPropertyValueEx )( 
            IUIAutomationElement4 * This,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ BOOL ignoreDefaultValue,
            /* [retval][out] */ VARIANT *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPatternAs )( 
            IUIAutomationElement4 * This,
            /* [in] */ PATTERNID patternId,
            /* [in] */ REFIID riid,
            /* [retval][iid_is][out] */ void **patternObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedPatternAs )( 
            IUIAutomationElement4 * This,
            /* [in] */ PATTERNID patternId,
            /* [in] */ REFIID riid,
            /* [retval][iid_is][out] */ void **patternObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPattern )( 
            IUIAutomationElement4 * This,
            /* [in] */ PATTERNID patternId,
            /* [retval][out] */ IUnknown **patternObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedPattern )( 
            IUIAutomationElement4 * This,
            /* [in] */ PATTERNID patternId,
            /* [retval][out] */ IUnknown **patternObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedParent )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ IUIAutomationElement **parent);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedChildren )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ IUIAutomationElementArray **children);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentProcessId )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentControlType )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ CONTROLTYPEID *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLocalizedControlType )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentName )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAcceleratorKey )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAccessKey )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentHasKeyboardFocus )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsKeyboardFocusable )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsEnabled )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAutomationId )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentClassName )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentHelpText )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentCulture )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsControlElement )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsContentElement )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsPassword )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentNativeWindowHandle )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ UIA_HWND *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentItemType )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsOffscreen )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentOrientation )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ enum OrientationType *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentFrameworkId )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsRequiredForForm )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentItemStatus )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentBoundingRectangle )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ RECT *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLabeledBy )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ IUIAutomationElement **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAriaRole )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAriaProperties )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsDataValidForForm )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentControllerFor )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentDescribedBy )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentFlowsTo )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentProviderDescription )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedProcessId )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedControlType )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ CONTROLTYPEID *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedLocalizedControlType )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedName )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAcceleratorKey )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAccessKey )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedHasKeyboardFocus )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsKeyboardFocusable )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsEnabled )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAutomationId )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedClassName )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedHelpText )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedCulture )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsControlElement )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsContentElement )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsPassword )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedNativeWindowHandle )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ UIA_HWND *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedItemType )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsOffscreen )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedOrientation )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ enum OrientationType *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedFrameworkId )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsRequiredForForm )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedItemStatus )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedBoundingRectangle )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ RECT *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedLabeledBy )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ IUIAutomationElement **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAriaRole )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAriaProperties )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsDataValidForForm )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedControllerFor )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedDescribedBy )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedFlowsTo )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedProviderDescription )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BSTR *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetClickablePoint )( 
            IUIAutomationElement4 * This,
            /* [out] */ POINT *clickable,
            /* [retval][out] */ BOOL *gotClickable);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentOptimizeForVisualContent )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedOptimizeForVisualContent )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLiveSetting )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ enum LiveSetting *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedLiveSetting )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ enum LiveSetting *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentFlowsFrom )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedFlowsFrom )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        HRESULT ( STDMETHODCALLTYPE *ShowContextMenu )( 
            IUIAutomationElement4 * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsPeripheral )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsPeripheral )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentPositionInSet )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentSizeOfSet )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLevel )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAnnotationTypes )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ SAFEARRAY * *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAnnotationObjects )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedPositionInSet )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedSizeOfSet )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedLevel )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAnnotationTypes )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ SAFEARRAY * *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAnnotationObjects )( 
            IUIAutomationElement4 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        END_INTERFACE
    } IUIAutomationElement4Vtbl;

    interface IUIAutomationElement4
    {
        CONST_VTBL struct IUIAutomationElement4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationElement4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationElement4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationElement4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationElement4_SetFocus(This)	\
    ( (This)->lpVtbl -> SetFocus(This) ) 

#define IUIAutomationElement4_GetRuntimeId(This,runtimeId)	\
    ( (This)->lpVtbl -> GetRuntimeId(This,runtimeId) ) 

#define IUIAutomationElement4_FindFirst(This,scope,condition,found)	\
    ( (This)->lpVtbl -> FindFirst(This,scope,condition,found) ) 

#define IUIAutomationElement4_FindAll(This,scope,condition,found)	\
    ( (This)->lpVtbl -> FindAll(This,scope,condition,found) ) 

#define IUIAutomationElement4_FindFirstBuildCache(This,scope,condition,cacheRequest,found)	\
    ( (This)->lpVtbl -> FindFirstBuildCache(This,scope,condition,cacheRequest,found) ) 

#define IUIAutomationElement4_FindAllBuildCache(This,scope,condition,cacheRequest,found)	\
    ( (This)->lpVtbl -> FindAllBuildCache(This,scope,condition,cacheRequest,found) ) 

#define IUIAutomationElement4_BuildUpdatedCache(This,cacheRequest,updatedElement)	\
    ( (This)->lpVtbl -> BuildUpdatedCache(This,cacheRequest,updatedElement) ) 

#define IUIAutomationElement4_GetCurrentPropertyValue(This,propertyId,retVal)	\
    ( (This)->lpVtbl -> GetCurrentPropertyValue(This,propertyId,retVal) ) 

#define IUIAutomationElement4_GetCurrentPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal)	\
    ( (This)->lpVtbl -> GetCurrentPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) ) 

#define IUIAutomationElement4_GetCachedPropertyValue(This,propertyId,retVal)	\
    ( (This)->lpVtbl -> GetCachedPropertyValue(This,propertyId,retVal) ) 

#define IUIAutomationElement4_GetCachedPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal)	\
    ( (This)->lpVtbl -> GetCachedPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) ) 

#define IUIAutomationElement4_GetCurrentPatternAs(This,patternId,riid,patternObject)	\
    ( (This)->lpVtbl -> GetCurrentPatternAs(This,patternId,riid,patternObject) ) 

#define IUIAutomationElement4_GetCachedPatternAs(This,patternId,riid,patternObject)	\
    ( (This)->lpVtbl -> GetCachedPatternAs(This,patternId,riid,patternObject) ) 

#define IUIAutomationElement4_GetCurrentPattern(This,patternId,patternObject)	\
    ( (This)->lpVtbl -> GetCurrentPattern(This,patternId,patternObject) ) 

#define IUIAutomationElement4_GetCachedPattern(This,patternId,patternObject)	\
    ( (This)->lpVtbl -> GetCachedPattern(This,patternId,patternObject) ) 

#define IUIAutomationElement4_GetCachedParent(This,parent)	\
    ( (This)->lpVtbl -> GetCachedParent(This,parent) ) 

#define IUIAutomationElement4_GetCachedChildren(This,children)	\
    ( (This)->lpVtbl -> GetCachedChildren(This,children) ) 

#define IUIAutomationElement4_get_CurrentProcessId(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentProcessId(This,retVal) ) 

#define IUIAutomationElement4_get_CurrentControlType(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentControlType(This,retVal) ) 

#define IUIAutomationElement4_get_CurrentLocalizedControlType(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLocalizedControlType(This,retVal) ) 

#define IUIAutomationElement4_get_CurrentName(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentName(This,retVal) ) 

#define IUIAutomationElement4_get_CurrentAcceleratorKey(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAcceleratorKey(This,retVal) ) 

#define IUIAutomationElement4_get_CurrentAccessKey(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAccessKey(This,retVal) ) 

#define IUIAutomationElement4_get_CurrentHasKeyboardFocus(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentHasKeyboardFocus(This,retVal) ) 

#define IUIAutomationElement4_get_CurrentIsKeyboardFocusable(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsKeyboardFocusable(This,retVal) ) 

#define IUIAutomationElement4_get_CurrentIsEnabled(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsEnabled(This,retVal) ) 

#define IUIAutomationElement4_get_CurrentAutomationId(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAutomationId(This,retVal) ) 

#define IUIAutomationElement4_get_CurrentClassName(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentClassName(This,retVal) ) 

#define IUIAutomationElement4_get_CurrentHelpText(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentHelpText(This,retVal) ) 

#define IUIAutomationElement4_get_CurrentCulture(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentCulture(This,retVal) ) 

#define IUIAutomationElement4_get_CurrentIsControlElement(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsControlElement(This,retVal) ) 

#define IUIAutomationElement4_get_CurrentIsContentElement(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsContentElement(This,retVal) ) 

#define IUIAutomationElement4_get_CurrentIsPassword(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsPassword(This,retVal) ) 

#define IUIAutomationElement4_get_CurrentNativeWindowHandle(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentNativeWindowHandle(This,retVal) ) 

#define IUIAutomationElement4_get_CurrentItemType(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentItemType(This,retVal) ) 

#define IUIAutomationElement4_get_CurrentIsOffscreen(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsOffscreen(This,retVal) ) 

#define IUIAutomationElement4_get_CurrentOrientation(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentOrientation(This,retVal) ) 

#define IUIAutomationElement4_get_CurrentFrameworkId(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentFrameworkId(This,retVal) ) 

#define IUIAutomationElement4_get_CurrentIsRequiredForForm(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsRequiredForForm(This,retVal) ) 

#define IUIAutomationElement4_get_CurrentItemStatus(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentItemStatus(This,retVal) ) 

#define IUIAutomationElement4_get_CurrentBoundingRectangle(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentBoundingRectangle(This,retVal) ) 

#define IUIAutomationElement4_get_CurrentLabeledBy(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLabeledBy(This,retVal) ) 

#define IUIAutomationElement4_get_CurrentAriaRole(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAriaRole(This,retVal) ) 

#define IUIAutomationElement4_get_CurrentAriaProperties(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAriaProperties(This,retVal) ) 

#define IUIAutomationElement4_get_CurrentIsDataValidForForm(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsDataValidForForm(This,retVal) ) 

#define IUIAutomationElement4_get_CurrentControllerFor(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentControllerFor(This,retVal) ) 

#define IUIAutomationElement4_get_CurrentDescribedBy(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentDescribedBy(This,retVal) ) 

#define IUIAutomationElement4_get_CurrentFlowsTo(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentFlowsTo(This,retVal) ) 

#define IUIAutomationElement4_get_CurrentProviderDescription(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentProviderDescription(This,retVal) ) 

#define IUIAutomationElement4_get_CachedProcessId(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedProcessId(This,retVal) ) 

#define IUIAutomationElement4_get_CachedControlType(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedControlType(This,retVal) ) 

#define IUIAutomationElement4_get_CachedLocalizedControlType(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedLocalizedControlType(This,retVal) ) 

#define IUIAutomationElement4_get_CachedName(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedName(This,retVal) ) 

#define IUIAutomationElement4_get_CachedAcceleratorKey(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAcceleratorKey(This,retVal) ) 

#define IUIAutomationElement4_get_CachedAccessKey(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAccessKey(This,retVal) ) 

#define IUIAutomationElement4_get_CachedHasKeyboardFocus(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedHasKeyboardFocus(This,retVal) ) 

#define IUIAutomationElement4_get_CachedIsKeyboardFocusable(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsKeyboardFocusable(This,retVal) ) 

#define IUIAutomationElement4_get_CachedIsEnabled(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsEnabled(This,retVal) ) 

#define IUIAutomationElement4_get_CachedAutomationId(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAutomationId(This,retVal) ) 

#define IUIAutomationElement4_get_CachedClassName(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedClassName(This,retVal) ) 

#define IUIAutomationElement4_get_CachedHelpText(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedHelpText(This,retVal) ) 

#define IUIAutomationElement4_get_CachedCulture(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedCulture(This,retVal) ) 

#define IUIAutomationElement4_get_CachedIsControlElement(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsControlElement(This,retVal) ) 

#define IUIAutomationElement4_get_CachedIsContentElement(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsContentElement(This,retVal) ) 

#define IUIAutomationElement4_get_CachedIsPassword(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsPassword(This,retVal) ) 

#define IUIAutomationElement4_get_CachedNativeWindowHandle(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedNativeWindowHandle(This,retVal) ) 

#define IUIAutomationElement4_get_CachedItemType(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedItemType(This,retVal) ) 

#define IUIAutomationElement4_get_CachedIsOffscreen(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsOffscreen(This,retVal) ) 

#define IUIAutomationElement4_get_CachedOrientation(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedOrientation(This,retVal) ) 

#define IUIAutomationElement4_get_CachedFrameworkId(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedFrameworkId(This,retVal) ) 

#define IUIAutomationElement4_get_CachedIsRequiredForForm(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsRequiredForForm(This,retVal) ) 

#define IUIAutomationElement4_get_CachedItemStatus(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedItemStatus(This,retVal) ) 

#define IUIAutomationElement4_get_CachedBoundingRectangle(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedBoundingRectangle(This,retVal) ) 

#define IUIAutomationElement4_get_CachedLabeledBy(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedLabeledBy(This,retVal) ) 

#define IUIAutomationElement4_get_CachedAriaRole(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAriaRole(This,retVal) ) 

#define IUIAutomationElement4_get_CachedAriaProperties(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAriaProperties(This,retVal) ) 

#define IUIAutomationElement4_get_CachedIsDataValidForForm(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsDataValidForForm(This,retVal) ) 

#define IUIAutomationElement4_get_CachedControllerFor(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedControllerFor(This,retVal) ) 

#define IUIAutomationElement4_get_CachedDescribedBy(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedDescribedBy(This,retVal) ) 

#define IUIAutomationElement4_get_CachedFlowsTo(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedFlowsTo(This,retVal) ) 

#define IUIAutomationElement4_get_CachedProviderDescription(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedProviderDescription(This,retVal) ) 

#define IUIAutomationElement4_GetClickablePoint(This,clickable,gotClickable)	\
    ( (This)->lpVtbl -> GetClickablePoint(This,clickable,gotClickable) ) 


#define IUIAutomationElement4_get_CurrentOptimizeForVisualContent(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentOptimizeForVisualContent(This,retVal) ) 

#define IUIAutomationElement4_get_CachedOptimizeForVisualContent(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedOptimizeForVisualContent(This,retVal) ) 

#define IUIAutomationElement4_get_CurrentLiveSetting(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLiveSetting(This,retVal) ) 

#define IUIAutomationElement4_get_CachedLiveSetting(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedLiveSetting(This,retVal) ) 

#define IUIAutomationElement4_get_CurrentFlowsFrom(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentFlowsFrom(This,retVal) ) 

#define IUIAutomationElement4_get_CachedFlowsFrom(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedFlowsFrom(This,retVal) ) 


#define IUIAutomationElement4_ShowContextMenu(This)	\
    ( (This)->lpVtbl -> ShowContextMenu(This) ) 

#define IUIAutomationElement4_get_CurrentIsPeripheral(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsPeripheral(This,retVal) ) 

#define IUIAutomationElement4_get_CachedIsPeripheral(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsPeripheral(This,retVal) ) 


#define IUIAutomationElement4_get_CurrentPositionInSet(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentPositionInSet(This,retVal) ) 

#define IUIAutomationElement4_get_CurrentSizeOfSet(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentSizeOfSet(This,retVal) ) 

#define IUIAutomationElement4_get_CurrentLevel(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLevel(This,retVal) ) 

#define IUIAutomationElement4_get_CurrentAnnotationTypes(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAnnotationTypes(This,retVal) ) 

#define IUIAutomationElement4_get_CurrentAnnotationObjects(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAnnotationObjects(This,retVal) ) 

#define IUIAutomationElement4_get_CachedPositionInSet(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedPositionInSet(This,retVal) ) 

#define IUIAutomationElement4_get_CachedSizeOfSet(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedSizeOfSet(This,retVal) ) 

#define IUIAutomationElement4_get_CachedLevel(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedLevel(This,retVal) ) 

#define IUIAutomationElement4_get_CachedAnnotationTypes(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAnnotationTypes(This,retVal) ) 

#define IUIAutomationElement4_get_CachedAnnotationObjects(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAnnotationObjects(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationElement4_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationElement5_INTERFACE_DEFINED__
#define __IUIAutomationElement5_INTERFACE_DEFINED__

/* interface IUIAutomationElement5 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationElement5;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("98141C1D-0D0E-4175-BBE2-6BFF455842A7")
    IUIAutomationElement5 : public IUIAutomationElement4
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentLandmarkType( 
            /* [retval][out] */ LANDMARKTYPEID *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentLocalizedLandmarkType( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedLandmarkType( 
            /* [retval][out] */ LANDMARKTYPEID *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedLocalizedLandmarkType( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationElement5Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationElement5 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationElement5 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationElement5 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetFocus )( 
            IUIAutomationElement5 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeId )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ SAFEARRAY * *runtimeId);
        
        HRESULT ( STDMETHODCALLTYPE *FindFirst )( 
            IUIAutomationElement5 * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [retval][out] */ IUIAutomationElement **found);
        
        HRESULT ( STDMETHODCALLTYPE *FindAll )( 
            IUIAutomationElement5 * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [retval][out] */ IUIAutomationElementArray **found);
        
        HRESULT ( STDMETHODCALLTYPE *FindFirstBuildCache )( 
            IUIAutomationElement5 * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **found);
        
        HRESULT ( STDMETHODCALLTYPE *FindAllBuildCache )( 
            IUIAutomationElement5 * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElementArray **found);
        
        HRESULT ( STDMETHODCALLTYPE *BuildUpdatedCache )( 
            IUIAutomationElement5 * This,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **updatedElement);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPropertyValue )( 
            IUIAutomationElement5 * This,
            /* [in] */ PROPERTYID propertyId,
            /* [retval][out] */ VARIANT *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPropertyValueEx )( 
            IUIAutomationElement5 * This,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ BOOL ignoreDefaultValue,
            /* [retval][out] */ VARIANT *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedPropertyValue )( 
            IUIAutomationElement5 * This,
            /* [in] */ PROPERTYID propertyId,
            /* [retval][out] */ VARIANT *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedPropertyValueEx )( 
            IUIAutomationElement5 * This,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ BOOL ignoreDefaultValue,
            /* [retval][out] */ VARIANT *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPatternAs )( 
            IUIAutomationElement5 * This,
            /* [in] */ PATTERNID patternId,
            /* [in] */ REFIID riid,
            /* [retval][iid_is][out] */ void **patternObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedPatternAs )( 
            IUIAutomationElement5 * This,
            /* [in] */ PATTERNID patternId,
            /* [in] */ REFIID riid,
            /* [retval][iid_is][out] */ void **patternObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPattern )( 
            IUIAutomationElement5 * This,
            /* [in] */ PATTERNID patternId,
            /* [retval][out] */ IUnknown **patternObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedPattern )( 
            IUIAutomationElement5 * This,
            /* [in] */ PATTERNID patternId,
            /* [retval][out] */ IUnknown **patternObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedParent )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ IUIAutomationElement **parent);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedChildren )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ IUIAutomationElementArray **children);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentProcessId )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentControlType )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ CONTROLTYPEID *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLocalizedControlType )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentName )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAcceleratorKey )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAccessKey )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentHasKeyboardFocus )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsKeyboardFocusable )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsEnabled )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAutomationId )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentClassName )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentHelpText )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentCulture )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsControlElement )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsContentElement )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsPassword )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentNativeWindowHandle )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ UIA_HWND *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentItemType )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsOffscreen )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentOrientation )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ enum OrientationType *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentFrameworkId )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsRequiredForForm )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentItemStatus )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentBoundingRectangle )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ RECT *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLabeledBy )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ IUIAutomationElement **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAriaRole )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAriaProperties )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsDataValidForForm )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentControllerFor )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentDescribedBy )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentFlowsTo )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentProviderDescription )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedProcessId )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedControlType )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ CONTROLTYPEID *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedLocalizedControlType )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedName )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAcceleratorKey )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAccessKey )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedHasKeyboardFocus )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsKeyboardFocusable )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsEnabled )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAutomationId )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedClassName )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedHelpText )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedCulture )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsControlElement )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsContentElement )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsPassword )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedNativeWindowHandle )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ UIA_HWND *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedItemType )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsOffscreen )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedOrientation )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ enum OrientationType *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedFrameworkId )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsRequiredForForm )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedItemStatus )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedBoundingRectangle )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ RECT *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedLabeledBy )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ IUIAutomationElement **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAriaRole )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAriaProperties )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsDataValidForForm )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedControllerFor )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedDescribedBy )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedFlowsTo )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedProviderDescription )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BSTR *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetClickablePoint )( 
            IUIAutomationElement5 * This,
            /* [out] */ POINT *clickable,
            /* [retval][out] */ BOOL *gotClickable);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentOptimizeForVisualContent )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedOptimizeForVisualContent )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLiveSetting )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ enum LiveSetting *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedLiveSetting )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ enum LiveSetting *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentFlowsFrom )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedFlowsFrom )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        HRESULT ( STDMETHODCALLTYPE *ShowContextMenu )( 
            IUIAutomationElement5 * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsPeripheral )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsPeripheral )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentPositionInSet )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentSizeOfSet )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLevel )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAnnotationTypes )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ SAFEARRAY * *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAnnotationObjects )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedPositionInSet )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedSizeOfSet )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedLevel )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAnnotationTypes )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ SAFEARRAY * *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAnnotationObjects )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLandmarkType )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ LANDMARKTYPEID *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLocalizedLandmarkType )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedLandmarkType )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ LANDMARKTYPEID *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedLocalizedLandmarkType )( 
            IUIAutomationElement5 * This,
            /* [retval][out] */ BSTR *retVal);
        
        END_INTERFACE
    } IUIAutomationElement5Vtbl;

    interface IUIAutomationElement5
    {
        CONST_VTBL struct IUIAutomationElement5Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationElement5_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationElement5_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationElement5_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationElement5_SetFocus(This)	\
    ( (This)->lpVtbl -> SetFocus(This) ) 

#define IUIAutomationElement5_GetRuntimeId(This,runtimeId)	\
    ( (This)->lpVtbl -> GetRuntimeId(This,runtimeId) ) 

#define IUIAutomationElement5_FindFirst(This,scope,condition,found)	\
    ( (This)->lpVtbl -> FindFirst(This,scope,condition,found) ) 

#define IUIAutomationElement5_FindAll(This,scope,condition,found)	\
    ( (This)->lpVtbl -> FindAll(This,scope,condition,found) ) 

#define IUIAutomationElement5_FindFirstBuildCache(This,scope,condition,cacheRequest,found)	\
    ( (This)->lpVtbl -> FindFirstBuildCache(This,scope,condition,cacheRequest,found) ) 

#define IUIAutomationElement5_FindAllBuildCache(This,scope,condition,cacheRequest,found)	\
    ( (This)->lpVtbl -> FindAllBuildCache(This,scope,condition,cacheRequest,found) ) 

#define IUIAutomationElement5_BuildUpdatedCache(This,cacheRequest,updatedElement)	\
    ( (This)->lpVtbl -> BuildUpdatedCache(This,cacheRequest,updatedElement) ) 

#define IUIAutomationElement5_GetCurrentPropertyValue(This,propertyId,retVal)	\
    ( (This)->lpVtbl -> GetCurrentPropertyValue(This,propertyId,retVal) ) 

#define IUIAutomationElement5_GetCurrentPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal)	\
    ( (This)->lpVtbl -> GetCurrentPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) ) 

#define IUIAutomationElement5_GetCachedPropertyValue(This,propertyId,retVal)	\
    ( (This)->lpVtbl -> GetCachedPropertyValue(This,propertyId,retVal) ) 

#define IUIAutomationElement5_GetCachedPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal)	\
    ( (This)->lpVtbl -> GetCachedPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) ) 

#define IUIAutomationElement5_GetCurrentPatternAs(This,patternId,riid,patternObject)	\
    ( (This)->lpVtbl -> GetCurrentPatternAs(This,patternId,riid,patternObject) ) 

#define IUIAutomationElement5_GetCachedPatternAs(This,patternId,riid,patternObject)	\
    ( (This)->lpVtbl -> GetCachedPatternAs(This,patternId,riid,patternObject) ) 

#define IUIAutomationElement5_GetCurrentPattern(This,patternId,patternObject)	\
    ( (This)->lpVtbl -> GetCurrentPattern(This,patternId,patternObject) ) 

#define IUIAutomationElement5_GetCachedPattern(This,patternId,patternObject)	\
    ( (This)->lpVtbl -> GetCachedPattern(This,patternId,patternObject) ) 

#define IUIAutomationElement5_GetCachedParent(This,parent)	\
    ( (This)->lpVtbl -> GetCachedParent(This,parent) ) 

#define IUIAutomationElement5_GetCachedChildren(This,children)	\
    ( (This)->lpVtbl -> GetCachedChildren(This,children) ) 

#define IUIAutomationElement5_get_CurrentProcessId(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentProcessId(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentControlType(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentControlType(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentLocalizedControlType(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLocalizedControlType(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentName(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentName(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentAcceleratorKey(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAcceleratorKey(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentAccessKey(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAccessKey(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentHasKeyboardFocus(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentHasKeyboardFocus(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentIsKeyboardFocusable(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsKeyboardFocusable(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentIsEnabled(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsEnabled(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentAutomationId(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAutomationId(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentClassName(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentClassName(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentHelpText(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentHelpText(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentCulture(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentCulture(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentIsControlElement(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsControlElement(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentIsContentElement(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsContentElement(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentIsPassword(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsPassword(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentNativeWindowHandle(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentNativeWindowHandle(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentItemType(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentItemType(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentIsOffscreen(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsOffscreen(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentOrientation(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentOrientation(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentFrameworkId(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentFrameworkId(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentIsRequiredForForm(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsRequiredForForm(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentItemStatus(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentItemStatus(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentBoundingRectangle(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentBoundingRectangle(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentLabeledBy(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLabeledBy(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentAriaRole(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAriaRole(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentAriaProperties(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAriaProperties(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentIsDataValidForForm(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsDataValidForForm(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentControllerFor(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentControllerFor(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentDescribedBy(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentDescribedBy(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentFlowsTo(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentFlowsTo(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentProviderDescription(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentProviderDescription(This,retVal) ) 

#define IUIAutomationElement5_get_CachedProcessId(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedProcessId(This,retVal) ) 

#define IUIAutomationElement5_get_CachedControlType(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedControlType(This,retVal) ) 

#define IUIAutomationElement5_get_CachedLocalizedControlType(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedLocalizedControlType(This,retVal) ) 

#define IUIAutomationElement5_get_CachedName(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedName(This,retVal) ) 

#define IUIAutomationElement5_get_CachedAcceleratorKey(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAcceleratorKey(This,retVal) ) 

#define IUIAutomationElement5_get_CachedAccessKey(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAccessKey(This,retVal) ) 

#define IUIAutomationElement5_get_CachedHasKeyboardFocus(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedHasKeyboardFocus(This,retVal) ) 

#define IUIAutomationElement5_get_CachedIsKeyboardFocusable(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsKeyboardFocusable(This,retVal) ) 

#define IUIAutomationElement5_get_CachedIsEnabled(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsEnabled(This,retVal) ) 

#define IUIAutomationElement5_get_CachedAutomationId(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAutomationId(This,retVal) ) 

#define IUIAutomationElement5_get_CachedClassName(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedClassName(This,retVal) ) 

#define IUIAutomationElement5_get_CachedHelpText(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedHelpText(This,retVal) ) 

#define IUIAutomationElement5_get_CachedCulture(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedCulture(This,retVal) ) 

#define IUIAutomationElement5_get_CachedIsControlElement(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsControlElement(This,retVal) ) 

#define IUIAutomationElement5_get_CachedIsContentElement(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsContentElement(This,retVal) ) 

#define IUIAutomationElement5_get_CachedIsPassword(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsPassword(This,retVal) ) 

#define IUIAutomationElement5_get_CachedNativeWindowHandle(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedNativeWindowHandle(This,retVal) ) 

#define IUIAutomationElement5_get_CachedItemType(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedItemType(This,retVal) ) 

#define IUIAutomationElement5_get_CachedIsOffscreen(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsOffscreen(This,retVal) ) 

#define IUIAutomationElement5_get_CachedOrientation(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedOrientation(This,retVal) ) 

#define IUIAutomationElement5_get_CachedFrameworkId(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedFrameworkId(This,retVal) ) 

#define IUIAutomationElement5_get_CachedIsRequiredForForm(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsRequiredForForm(This,retVal) ) 

#define IUIAutomationElement5_get_CachedItemStatus(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedItemStatus(This,retVal) ) 

#define IUIAutomationElement5_get_CachedBoundingRectangle(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedBoundingRectangle(This,retVal) ) 

#define IUIAutomationElement5_get_CachedLabeledBy(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedLabeledBy(This,retVal) ) 

#define IUIAutomationElement5_get_CachedAriaRole(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAriaRole(This,retVal) ) 

#define IUIAutomationElement5_get_CachedAriaProperties(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAriaProperties(This,retVal) ) 

#define IUIAutomationElement5_get_CachedIsDataValidForForm(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsDataValidForForm(This,retVal) ) 

#define IUIAutomationElement5_get_CachedControllerFor(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedControllerFor(This,retVal) ) 

#define IUIAutomationElement5_get_CachedDescribedBy(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedDescribedBy(This,retVal) ) 

#define IUIAutomationElement5_get_CachedFlowsTo(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedFlowsTo(This,retVal) ) 

#define IUIAutomationElement5_get_CachedProviderDescription(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedProviderDescription(This,retVal) ) 

#define IUIAutomationElement5_GetClickablePoint(This,clickable,gotClickable)	\
    ( (This)->lpVtbl -> GetClickablePoint(This,clickable,gotClickable) ) 


#define IUIAutomationElement5_get_CurrentOptimizeForVisualContent(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentOptimizeForVisualContent(This,retVal) ) 

#define IUIAutomationElement5_get_CachedOptimizeForVisualContent(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedOptimizeForVisualContent(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentLiveSetting(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLiveSetting(This,retVal) ) 

#define IUIAutomationElement5_get_CachedLiveSetting(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedLiveSetting(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentFlowsFrom(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentFlowsFrom(This,retVal) ) 

#define IUIAutomationElement5_get_CachedFlowsFrom(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedFlowsFrom(This,retVal) ) 


#define IUIAutomationElement5_ShowContextMenu(This)	\
    ( (This)->lpVtbl -> ShowContextMenu(This) ) 

#define IUIAutomationElement5_get_CurrentIsPeripheral(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsPeripheral(This,retVal) ) 

#define IUIAutomationElement5_get_CachedIsPeripheral(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsPeripheral(This,retVal) ) 


#define IUIAutomationElement5_get_CurrentPositionInSet(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentPositionInSet(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentSizeOfSet(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentSizeOfSet(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentLevel(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLevel(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentAnnotationTypes(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAnnotationTypes(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentAnnotationObjects(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAnnotationObjects(This,retVal) ) 

#define IUIAutomationElement5_get_CachedPositionInSet(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedPositionInSet(This,retVal) ) 

#define IUIAutomationElement5_get_CachedSizeOfSet(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedSizeOfSet(This,retVal) ) 

#define IUIAutomationElement5_get_CachedLevel(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedLevel(This,retVal) ) 

#define IUIAutomationElement5_get_CachedAnnotationTypes(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAnnotationTypes(This,retVal) ) 

#define IUIAutomationElement5_get_CachedAnnotationObjects(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAnnotationObjects(This,retVal) ) 


#define IUIAutomationElement5_get_CurrentLandmarkType(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLandmarkType(This,retVal) ) 

#define IUIAutomationElement5_get_CurrentLocalizedLandmarkType(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLocalizedLandmarkType(This,retVal) ) 

#define IUIAutomationElement5_get_CachedLandmarkType(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedLandmarkType(This,retVal) ) 

#define IUIAutomationElement5_get_CachedLocalizedLandmarkType(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedLocalizedLandmarkType(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationElement5_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationElement6_INTERFACE_DEFINED__
#define __IUIAutomationElement6_INTERFACE_DEFINED__

/* interface IUIAutomationElement6 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationElement6;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4780d450-8bca-4977-afa5-a4a517f555e3")
    IUIAutomationElement6 : public IUIAutomationElement5
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentFullDescription( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedFullDescription( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationElement6Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationElement6 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationElement6 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationElement6 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetFocus )( 
            IUIAutomationElement6 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeId )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ SAFEARRAY * *runtimeId);
        
        HRESULT ( STDMETHODCALLTYPE *FindFirst )( 
            IUIAutomationElement6 * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [retval][out] */ IUIAutomationElement **found);
        
        HRESULT ( STDMETHODCALLTYPE *FindAll )( 
            IUIAutomationElement6 * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [retval][out] */ IUIAutomationElementArray **found);
        
        HRESULT ( STDMETHODCALLTYPE *FindFirstBuildCache )( 
            IUIAutomationElement6 * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **found);
        
        HRESULT ( STDMETHODCALLTYPE *FindAllBuildCache )( 
            IUIAutomationElement6 * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElementArray **found);
        
        HRESULT ( STDMETHODCALLTYPE *BuildUpdatedCache )( 
            IUIAutomationElement6 * This,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **updatedElement);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPropertyValue )( 
            IUIAutomationElement6 * This,
            /* [in] */ PROPERTYID propertyId,
            /* [retval][out] */ VARIANT *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPropertyValueEx )( 
            IUIAutomationElement6 * This,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ BOOL ignoreDefaultValue,
            /* [retval][out] */ VARIANT *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedPropertyValue )( 
            IUIAutomationElement6 * This,
            /* [in] */ PROPERTYID propertyId,
            /* [retval][out] */ VARIANT *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedPropertyValueEx )( 
            IUIAutomationElement6 * This,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ BOOL ignoreDefaultValue,
            /* [retval][out] */ VARIANT *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPatternAs )( 
            IUIAutomationElement6 * This,
            /* [in] */ PATTERNID patternId,
            /* [in] */ REFIID riid,
            /* [retval][iid_is][out] */ void **patternObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedPatternAs )( 
            IUIAutomationElement6 * This,
            /* [in] */ PATTERNID patternId,
            /* [in] */ REFIID riid,
            /* [retval][iid_is][out] */ void **patternObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPattern )( 
            IUIAutomationElement6 * This,
            /* [in] */ PATTERNID patternId,
            /* [retval][out] */ IUnknown **patternObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedPattern )( 
            IUIAutomationElement6 * This,
            /* [in] */ PATTERNID patternId,
            /* [retval][out] */ IUnknown **patternObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedParent )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ IUIAutomationElement **parent);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedChildren )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ IUIAutomationElementArray **children);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentProcessId )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentControlType )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ CONTROLTYPEID *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLocalizedControlType )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentName )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAcceleratorKey )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAccessKey )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentHasKeyboardFocus )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsKeyboardFocusable )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsEnabled )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAutomationId )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentClassName )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentHelpText )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentCulture )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsControlElement )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsContentElement )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsPassword )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentNativeWindowHandle )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ UIA_HWND *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentItemType )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsOffscreen )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentOrientation )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ enum OrientationType *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentFrameworkId )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsRequiredForForm )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentItemStatus )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentBoundingRectangle )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ RECT *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLabeledBy )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ IUIAutomationElement **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAriaRole )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAriaProperties )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsDataValidForForm )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentControllerFor )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentDescribedBy )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentFlowsTo )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentProviderDescription )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedProcessId )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedControlType )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ CONTROLTYPEID *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedLocalizedControlType )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedName )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAcceleratorKey )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAccessKey )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedHasKeyboardFocus )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsKeyboardFocusable )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsEnabled )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAutomationId )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedClassName )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedHelpText )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedCulture )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsControlElement )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsContentElement )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsPassword )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedNativeWindowHandle )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ UIA_HWND *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedItemType )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsOffscreen )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedOrientation )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ enum OrientationType *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedFrameworkId )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsRequiredForForm )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedItemStatus )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedBoundingRectangle )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ RECT *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedLabeledBy )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ IUIAutomationElement **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAriaRole )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAriaProperties )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsDataValidForForm )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedControllerFor )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedDescribedBy )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedFlowsTo )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedProviderDescription )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BSTR *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetClickablePoint )( 
            IUIAutomationElement6 * This,
            /* [out] */ POINT *clickable,
            /* [retval][out] */ BOOL *gotClickable);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentOptimizeForVisualContent )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedOptimizeForVisualContent )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLiveSetting )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ enum LiveSetting *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedLiveSetting )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ enum LiveSetting *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentFlowsFrom )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedFlowsFrom )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        HRESULT ( STDMETHODCALLTYPE *ShowContextMenu )( 
            IUIAutomationElement6 * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsPeripheral )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsPeripheral )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentPositionInSet )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentSizeOfSet )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLevel )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAnnotationTypes )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ SAFEARRAY * *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAnnotationObjects )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedPositionInSet )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedSizeOfSet )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedLevel )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAnnotationTypes )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ SAFEARRAY * *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAnnotationObjects )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLandmarkType )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ LANDMARKTYPEID *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLocalizedLandmarkType )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedLandmarkType )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ LANDMARKTYPEID *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedLocalizedLandmarkType )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentFullDescription )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedFullDescription )( 
            IUIAutomationElement6 * This,
            /* [retval][out] */ BSTR *retVal);
        
        END_INTERFACE
    } IUIAutomationElement6Vtbl;

    interface IUIAutomationElement6
    {
        CONST_VTBL struct IUIAutomationElement6Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationElement6_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationElement6_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationElement6_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationElement6_SetFocus(This)	\
    ( (This)->lpVtbl -> SetFocus(This) ) 

#define IUIAutomationElement6_GetRuntimeId(This,runtimeId)	\
    ( (This)->lpVtbl -> GetRuntimeId(This,runtimeId) ) 

#define IUIAutomationElement6_FindFirst(This,scope,condition,found)	\
    ( (This)->lpVtbl -> FindFirst(This,scope,condition,found) ) 

#define IUIAutomationElement6_FindAll(This,scope,condition,found)	\
    ( (This)->lpVtbl -> FindAll(This,scope,condition,found) ) 

#define IUIAutomationElement6_FindFirstBuildCache(This,scope,condition,cacheRequest,found)	\
    ( (This)->lpVtbl -> FindFirstBuildCache(This,scope,condition,cacheRequest,found) ) 

#define IUIAutomationElement6_FindAllBuildCache(This,scope,condition,cacheRequest,found)	\
    ( (This)->lpVtbl -> FindAllBuildCache(This,scope,condition,cacheRequest,found) ) 

#define IUIAutomationElement6_BuildUpdatedCache(This,cacheRequest,updatedElement)	\
    ( (This)->lpVtbl -> BuildUpdatedCache(This,cacheRequest,updatedElement) ) 

#define IUIAutomationElement6_GetCurrentPropertyValue(This,propertyId,retVal)	\
    ( (This)->lpVtbl -> GetCurrentPropertyValue(This,propertyId,retVal) ) 

#define IUIAutomationElement6_GetCurrentPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal)	\
    ( (This)->lpVtbl -> GetCurrentPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) ) 

#define IUIAutomationElement6_GetCachedPropertyValue(This,propertyId,retVal)	\
    ( (This)->lpVtbl -> GetCachedPropertyValue(This,propertyId,retVal) ) 

#define IUIAutomationElement6_GetCachedPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal)	\
    ( (This)->lpVtbl -> GetCachedPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) ) 

#define IUIAutomationElement6_GetCurrentPatternAs(This,patternId,riid,patternObject)	\
    ( (This)->lpVtbl -> GetCurrentPatternAs(This,patternId,riid,patternObject) ) 

#define IUIAutomationElement6_GetCachedPatternAs(This,patternId,riid,patternObject)	\
    ( (This)->lpVtbl -> GetCachedPatternAs(This,patternId,riid,patternObject) ) 

#define IUIAutomationElement6_GetCurrentPattern(This,patternId,patternObject)	\
    ( (This)->lpVtbl -> GetCurrentPattern(This,patternId,patternObject) ) 

#define IUIAutomationElement6_GetCachedPattern(This,patternId,patternObject)	\
    ( (This)->lpVtbl -> GetCachedPattern(This,patternId,patternObject) ) 

#define IUIAutomationElement6_GetCachedParent(This,parent)	\
    ( (This)->lpVtbl -> GetCachedParent(This,parent) ) 

#define IUIAutomationElement6_GetCachedChildren(This,children)	\
    ( (This)->lpVtbl -> GetCachedChildren(This,children) ) 

#define IUIAutomationElement6_get_CurrentProcessId(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentProcessId(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentControlType(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentControlType(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentLocalizedControlType(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLocalizedControlType(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentName(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentName(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentAcceleratorKey(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAcceleratorKey(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentAccessKey(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAccessKey(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentHasKeyboardFocus(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentHasKeyboardFocus(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentIsKeyboardFocusable(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsKeyboardFocusable(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentIsEnabled(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsEnabled(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentAutomationId(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAutomationId(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentClassName(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentClassName(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentHelpText(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentHelpText(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentCulture(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentCulture(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentIsControlElement(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsControlElement(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentIsContentElement(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsContentElement(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentIsPassword(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsPassword(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentNativeWindowHandle(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentNativeWindowHandle(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentItemType(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentItemType(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentIsOffscreen(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsOffscreen(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentOrientation(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentOrientation(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentFrameworkId(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentFrameworkId(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentIsRequiredForForm(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsRequiredForForm(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentItemStatus(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentItemStatus(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentBoundingRectangle(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentBoundingRectangle(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentLabeledBy(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLabeledBy(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentAriaRole(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAriaRole(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentAriaProperties(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAriaProperties(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentIsDataValidForForm(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsDataValidForForm(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentControllerFor(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentControllerFor(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentDescribedBy(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentDescribedBy(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentFlowsTo(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentFlowsTo(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentProviderDescription(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentProviderDescription(This,retVal) ) 

#define IUIAutomationElement6_get_CachedProcessId(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedProcessId(This,retVal) ) 

#define IUIAutomationElement6_get_CachedControlType(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedControlType(This,retVal) ) 

#define IUIAutomationElement6_get_CachedLocalizedControlType(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedLocalizedControlType(This,retVal) ) 

#define IUIAutomationElement6_get_CachedName(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedName(This,retVal) ) 

#define IUIAutomationElement6_get_CachedAcceleratorKey(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAcceleratorKey(This,retVal) ) 

#define IUIAutomationElement6_get_CachedAccessKey(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAccessKey(This,retVal) ) 

#define IUIAutomationElement6_get_CachedHasKeyboardFocus(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedHasKeyboardFocus(This,retVal) ) 

#define IUIAutomationElement6_get_CachedIsKeyboardFocusable(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsKeyboardFocusable(This,retVal) ) 

#define IUIAutomationElement6_get_CachedIsEnabled(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsEnabled(This,retVal) ) 

#define IUIAutomationElement6_get_CachedAutomationId(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAutomationId(This,retVal) ) 

#define IUIAutomationElement6_get_CachedClassName(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedClassName(This,retVal) ) 

#define IUIAutomationElement6_get_CachedHelpText(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedHelpText(This,retVal) ) 

#define IUIAutomationElement6_get_CachedCulture(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedCulture(This,retVal) ) 

#define IUIAutomationElement6_get_CachedIsControlElement(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsControlElement(This,retVal) ) 

#define IUIAutomationElement6_get_CachedIsContentElement(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsContentElement(This,retVal) ) 

#define IUIAutomationElement6_get_CachedIsPassword(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsPassword(This,retVal) ) 

#define IUIAutomationElement6_get_CachedNativeWindowHandle(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedNativeWindowHandle(This,retVal) ) 

#define IUIAutomationElement6_get_CachedItemType(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedItemType(This,retVal) ) 

#define IUIAutomationElement6_get_CachedIsOffscreen(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsOffscreen(This,retVal) ) 

#define IUIAutomationElement6_get_CachedOrientation(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedOrientation(This,retVal) ) 

#define IUIAutomationElement6_get_CachedFrameworkId(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedFrameworkId(This,retVal) ) 

#define IUIAutomationElement6_get_CachedIsRequiredForForm(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsRequiredForForm(This,retVal) ) 

#define IUIAutomationElement6_get_CachedItemStatus(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedItemStatus(This,retVal) ) 

#define IUIAutomationElement6_get_CachedBoundingRectangle(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedBoundingRectangle(This,retVal) ) 

#define IUIAutomationElement6_get_CachedLabeledBy(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedLabeledBy(This,retVal) ) 

#define IUIAutomationElement6_get_CachedAriaRole(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAriaRole(This,retVal) ) 

#define IUIAutomationElement6_get_CachedAriaProperties(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAriaProperties(This,retVal) ) 

#define IUIAutomationElement6_get_CachedIsDataValidForForm(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsDataValidForForm(This,retVal) ) 

#define IUIAutomationElement6_get_CachedControllerFor(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedControllerFor(This,retVal) ) 

#define IUIAutomationElement6_get_CachedDescribedBy(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedDescribedBy(This,retVal) ) 

#define IUIAutomationElement6_get_CachedFlowsTo(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedFlowsTo(This,retVal) ) 

#define IUIAutomationElement6_get_CachedProviderDescription(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedProviderDescription(This,retVal) ) 

#define IUIAutomationElement6_GetClickablePoint(This,clickable,gotClickable)	\
    ( (This)->lpVtbl -> GetClickablePoint(This,clickable,gotClickable) ) 


#define IUIAutomationElement6_get_CurrentOptimizeForVisualContent(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentOptimizeForVisualContent(This,retVal) ) 

#define IUIAutomationElement6_get_CachedOptimizeForVisualContent(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedOptimizeForVisualContent(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentLiveSetting(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLiveSetting(This,retVal) ) 

#define IUIAutomationElement6_get_CachedLiveSetting(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedLiveSetting(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentFlowsFrom(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentFlowsFrom(This,retVal) ) 

#define IUIAutomationElement6_get_CachedFlowsFrom(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedFlowsFrom(This,retVal) ) 


#define IUIAutomationElement6_ShowContextMenu(This)	\
    ( (This)->lpVtbl -> ShowContextMenu(This) ) 

#define IUIAutomationElement6_get_CurrentIsPeripheral(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsPeripheral(This,retVal) ) 

#define IUIAutomationElement6_get_CachedIsPeripheral(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsPeripheral(This,retVal) ) 


#define IUIAutomationElement6_get_CurrentPositionInSet(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentPositionInSet(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentSizeOfSet(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentSizeOfSet(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentLevel(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLevel(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentAnnotationTypes(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAnnotationTypes(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentAnnotationObjects(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAnnotationObjects(This,retVal) ) 

#define IUIAutomationElement6_get_CachedPositionInSet(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedPositionInSet(This,retVal) ) 

#define IUIAutomationElement6_get_CachedSizeOfSet(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedSizeOfSet(This,retVal) ) 

#define IUIAutomationElement6_get_CachedLevel(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedLevel(This,retVal) ) 

#define IUIAutomationElement6_get_CachedAnnotationTypes(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAnnotationTypes(This,retVal) ) 

#define IUIAutomationElement6_get_CachedAnnotationObjects(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAnnotationObjects(This,retVal) ) 


#define IUIAutomationElement6_get_CurrentLandmarkType(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLandmarkType(This,retVal) ) 

#define IUIAutomationElement6_get_CurrentLocalizedLandmarkType(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLocalizedLandmarkType(This,retVal) ) 

#define IUIAutomationElement6_get_CachedLandmarkType(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedLandmarkType(This,retVal) ) 

#define IUIAutomationElement6_get_CachedLocalizedLandmarkType(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedLocalizedLandmarkType(This,retVal) ) 


#define IUIAutomationElement6_get_CurrentFullDescription(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentFullDescription(This,retVal) ) 

#define IUIAutomationElement6_get_CachedFullDescription(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedFullDescription(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationElement6_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationElement7_INTERFACE_DEFINED__
#define __IUIAutomationElement7_INTERFACE_DEFINED__

/* interface IUIAutomationElement7 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationElement7;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("204e8572-cfc3-4c11-b0c8-7da7420750b7")
    IUIAutomationElement7 : public IUIAutomationElement6
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE FindFirstWithOptions( 
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [in] */ enum TreeTraversalOptions traversalOptions,
            /* [in] */ IUIAutomationElement *root,
            /* [retval][out] */ IUIAutomationElement **found) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindAllWithOptions( 
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [in] */ enum TreeTraversalOptions traversalOptions,
            /* [in] */ IUIAutomationElement *root,
            /* [retval][out] */ IUIAutomationElementArray **found) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindFirstWithOptionsBuildCache( 
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ enum TreeTraversalOptions traversalOptions,
            /* [in] */ IUIAutomationElement *root,
            /* [retval][out] */ IUIAutomationElement **found) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindAllWithOptionsBuildCache( 
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ enum TreeTraversalOptions traversalOptions,
            /* [in] */ IUIAutomationElement *root,
            /* [retval][out] */ IUIAutomationElementArray **found) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentMetadataValue( 
            /* [in] */ int targetId,
            /* [in] */ METADATAID metadataId,
            /* [retval][out] */ VARIANT *returnVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationElement7Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationElement7 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationElement7 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationElement7 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetFocus )( 
            IUIAutomationElement7 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeId )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ SAFEARRAY * *runtimeId);
        
        HRESULT ( STDMETHODCALLTYPE *FindFirst )( 
            IUIAutomationElement7 * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [retval][out] */ IUIAutomationElement **found);
        
        HRESULT ( STDMETHODCALLTYPE *FindAll )( 
            IUIAutomationElement7 * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [retval][out] */ IUIAutomationElementArray **found);
        
        HRESULT ( STDMETHODCALLTYPE *FindFirstBuildCache )( 
            IUIAutomationElement7 * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **found);
        
        HRESULT ( STDMETHODCALLTYPE *FindAllBuildCache )( 
            IUIAutomationElement7 * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElementArray **found);
        
        HRESULT ( STDMETHODCALLTYPE *BuildUpdatedCache )( 
            IUIAutomationElement7 * This,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **updatedElement);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPropertyValue )( 
            IUIAutomationElement7 * This,
            /* [in] */ PROPERTYID propertyId,
            /* [retval][out] */ VARIANT *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPropertyValueEx )( 
            IUIAutomationElement7 * This,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ BOOL ignoreDefaultValue,
            /* [retval][out] */ VARIANT *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedPropertyValue )( 
            IUIAutomationElement7 * This,
            /* [in] */ PROPERTYID propertyId,
            /* [retval][out] */ VARIANT *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedPropertyValueEx )( 
            IUIAutomationElement7 * This,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ BOOL ignoreDefaultValue,
            /* [retval][out] */ VARIANT *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPatternAs )( 
            IUIAutomationElement7 * This,
            /* [in] */ PATTERNID patternId,
            /* [in] */ REFIID riid,
            /* [retval][iid_is][out] */ void **patternObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedPatternAs )( 
            IUIAutomationElement7 * This,
            /* [in] */ PATTERNID patternId,
            /* [in] */ REFIID riid,
            /* [retval][iid_is][out] */ void **patternObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPattern )( 
            IUIAutomationElement7 * This,
            /* [in] */ PATTERNID patternId,
            /* [retval][out] */ IUnknown **patternObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedPattern )( 
            IUIAutomationElement7 * This,
            /* [in] */ PATTERNID patternId,
            /* [retval][out] */ IUnknown **patternObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedParent )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ IUIAutomationElement **parent);
        
        HRESULT ( STDMETHODCALLTYPE *GetCachedChildren )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ IUIAutomationElementArray **children);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentProcessId )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentControlType )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ CONTROLTYPEID *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLocalizedControlType )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentName )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAcceleratorKey )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAccessKey )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentHasKeyboardFocus )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsKeyboardFocusable )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsEnabled )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAutomationId )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentClassName )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentHelpText )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentCulture )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsControlElement )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsContentElement )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsPassword )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentNativeWindowHandle )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ UIA_HWND *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentItemType )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsOffscreen )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentOrientation )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ enum OrientationType *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentFrameworkId )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsRequiredForForm )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentItemStatus )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentBoundingRectangle )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ RECT *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLabeledBy )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ IUIAutomationElement **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAriaRole )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAriaProperties )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsDataValidForForm )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentControllerFor )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentDescribedBy )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentFlowsTo )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentProviderDescription )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedProcessId )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedControlType )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ CONTROLTYPEID *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedLocalizedControlType )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedName )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAcceleratorKey )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAccessKey )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedHasKeyboardFocus )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsKeyboardFocusable )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsEnabled )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAutomationId )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedClassName )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedHelpText )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedCulture )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsControlElement )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsContentElement )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsPassword )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedNativeWindowHandle )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ UIA_HWND *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedItemType )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsOffscreen )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedOrientation )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ enum OrientationType *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedFrameworkId )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsRequiredForForm )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedItemStatus )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedBoundingRectangle )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ RECT *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedLabeledBy )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ IUIAutomationElement **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAriaRole )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAriaProperties )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsDataValidForForm )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedControllerFor )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedDescribedBy )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedFlowsTo )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedProviderDescription )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BSTR *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetClickablePoint )( 
            IUIAutomationElement7 * This,
            /* [out] */ POINT *clickable,
            /* [retval][out] */ BOOL *gotClickable);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentOptimizeForVisualContent )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedOptimizeForVisualContent )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLiveSetting )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ enum LiveSetting *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedLiveSetting )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ enum LiveSetting *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentFlowsFrom )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedFlowsFrom )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        HRESULT ( STDMETHODCALLTYPE *ShowContextMenu )( 
            IUIAutomationElement7 * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsPeripheral )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsPeripheral )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentPositionInSet )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentSizeOfSet )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLevel )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAnnotationTypes )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ SAFEARRAY * *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAnnotationObjects )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedPositionInSet )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedSizeOfSet )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedLevel )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ int *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAnnotationTypes )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ SAFEARRAY * *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedAnnotationObjects )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ IUIAutomationElementArray **retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLandmarkType )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ LANDMARKTYPEID *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLocalizedLandmarkType )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedLandmarkType )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ LANDMARKTYPEID *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedLocalizedLandmarkType )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentFullDescription )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedFullDescription )( 
            IUIAutomationElement7 * This,
            /* [retval][out] */ BSTR *retVal);
        
        HRESULT ( STDMETHODCALLTYPE *FindFirstWithOptions )( 
            IUIAutomationElement7 * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [in] */ enum TreeTraversalOptions traversalOptions,
            /* [in] */ IUIAutomationElement *root,
            /* [retval][out] */ IUIAutomationElement **found);
        
        HRESULT ( STDMETHODCALLTYPE *FindAllWithOptions )( 
            IUIAutomationElement7 * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [in] */ enum TreeTraversalOptions traversalOptions,
            /* [in] */ IUIAutomationElement *root,
            /* [retval][out] */ IUIAutomationElementArray **found);
        
        HRESULT ( STDMETHODCALLTYPE *FindFirstWithOptionsBuildCache )( 
            IUIAutomationElement7 * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ enum TreeTraversalOptions traversalOptions,
            /* [in] */ IUIAutomationElement *root,
            /* [retval][out] */ IUIAutomationElement **found);
        
        HRESULT ( STDMETHODCALLTYPE *FindAllWithOptionsBuildCache )( 
            IUIAutomationElement7 * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCondition *condition,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ enum TreeTraversalOptions traversalOptions,
            /* [in] */ IUIAutomationElement *root,
            /* [retval][out] */ IUIAutomationElementArray **found);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentMetadataValue )( 
            IUIAutomationElement7 * This,
            /* [in] */ int targetId,
            /* [in] */ METADATAID metadataId,
            /* [retval][out] */ VARIANT *returnVal);
        
        END_INTERFACE
    } IUIAutomationElement7Vtbl;

    interface IUIAutomationElement7
    {
        CONST_VTBL struct IUIAutomationElement7Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationElement7_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationElement7_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationElement7_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationElement7_SetFocus(This)	\
    ( (This)->lpVtbl -> SetFocus(This) ) 

#define IUIAutomationElement7_GetRuntimeId(This,runtimeId)	\
    ( (This)->lpVtbl -> GetRuntimeId(This,runtimeId) ) 

#define IUIAutomationElement7_FindFirst(This,scope,condition,found)	\
    ( (This)->lpVtbl -> FindFirst(This,scope,condition,found) ) 

#define IUIAutomationElement7_FindAll(This,scope,condition,found)	\
    ( (This)->lpVtbl -> FindAll(This,scope,condition,found) ) 

#define IUIAutomationElement7_FindFirstBuildCache(This,scope,condition,cacheRequest,found)	\
    ( (This)->lpVtbl -> FindFirstBuildCache(This,scope,condition,cacheRequest,found) ) 

#define IUIAutomationElement7_FindAllBuildCache(This,scope,condition,cacheRequest,found)	\
    ( (This)->lpVtbl -> FindAllBuildCache(This,scope,condition,cacheRequest,found) ) 

#define IUIAutomationElement7_BuildUpdatedCache(This,cacheRequest,updatedElement)	\
    ( (This)->lpVtbl -> BuildUpdatedCache(This,cacheRequest,updatedElement) ) 

#define IUIAutomationElement7_GetCurrentPropertyValue(This,propertyId,retVal)	\
    ( (This)->lpVtbl -> GetCurrentPropertyValue(This,propertyId,retVal) ) 

#define IUIAutomationElement7_GetCurrentPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal)	\
    ( (This)->lpVtbl -> GetCurrentPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) ) 

#define IUIAutomationElement7_GetCachedPropertyValue(This,propertyId,retVal)	\
    ( (This)->lpVtbl -> GetCachedPropertyValue(This,propertyId,retVal) ) 

#define IUIAutomationElement7_GetCachedPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal)	\
    ( (This)->lpVtbl -> GetCachedPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) ) 

#define IUIAutomationElement7_GetCurrentPatternAs(This,patternId,riid,patternObject)	\
    ( (This)->lpVtbl -> GetCurrentPatternAs(This,patternId,riid,patternObject) ) 

#define IUIAutomationElement7_GetCachedPatternAs(This,patternId,riid,patternObject)	\
    ( (This)->lpVtbl -> GetCachedPatternAs(This,patternId,riid,patternObject) ) 

#define IUIAutomationElement7_GetCurrentPattern(This,patternId,patternObject)	\
    ( (This)->lpVtbl -> GetCurrentPattern(This,patternId,patternObject) ) 

#define IUIAutomationElement7_GetCachedPattern(This,patternId,patternObject)	\
    ( (This)->lpVtbl -> GetCachedPattern(This,patternId,patternObject) ) 

#define IUIAutomationElement7_GetCachedParent(This,parent)	\
    ( (This)->lpVtbl -> GetCachedParent(This,parent) ) 

#define IUIAutomationElement7_GetCachedChildren(This,children)	\
    ( (This)->lpVtbl -> GetCachedChildren(This,children) ) 

#define IUIAutomationElement7_get_CurrentProcessId(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentProcessId(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentControlType(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentControlType(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentLocalizedControlType(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLocalizedControlType(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentName(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentName(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentAcceleratorKey(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAcceleratorKey(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentAccessKey(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAccessKey(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentHasKeyboardFocus(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentHasKeyboardFocus(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentIsKeyboardFocusable(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsKeyboardFocusable(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentIsEnabled(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsEnabled(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentAutomationId(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAutomationId(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentClassName(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentClassName(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentHelpText(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentHelpText(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentCulture(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentCulture(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentIsControlElement(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsControlElement(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentIsContentElement(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsContentElement(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentIsPassword(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsPassword(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentNativeWindowHandle(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentNativeWindowHandle(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentItemType(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentItemType(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentIsOffscreen(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsOffscreen(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentOrientation(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentOrientation(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentFrameworkId(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentFrameworkId(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentIsRequiredForForm(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsRequiredForForm(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentItemStatus(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentItemStatus(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentBoundingRectangle(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentBoundingRectangle(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentLabeledBy(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLabeledBy(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentAriaRole(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAriaRole(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentAriaProperties(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAriaProperties(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentIsDataValidForForm(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsDataValidForForm(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentControllerFor(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentControllerFor(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentDescribedBy(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentDescribedBy(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentFlowsTo(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentFlowsTo(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentProviderDescription(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentProviderDescription(This,retVal) ) 

#define IUIAutomationElement7_get_CachedProcessId(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedProcessId(This,retVal) ) 

#define IUIAutomationElement7_get_CachedControlType(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedControlType(This,retVal) ) 

#define IUIAutomationElement7_get_CachedLocalizedControlType(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedLocalizedControlType(This,retVal) ) 

#define IUIAutomationElement7_get_CachedName(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedName(This,retVal) ) 

#define IUIAutomationElement7_get_CachedAcceleratorKey(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAcceleratorKey(This,retVal) ) 

#define IUIAutomationElement7_get_CachedAccessKey(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAccessKey(This,retVal) ) 

#define IUIAutomationElement7_get_CachedHasKeyboardFocus(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedHasKeyboardFocus(This,retVal) ) 

#define IUIAutomationElement7_get_CachedIsKeyboardFocusable(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsKeyboardFocusable(This,retVal) ) 

#define IUIAutomationElement7_get_CachedIsEnabled(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsEnabled(This,retVal) ) 

#define IUIAutomationElement7_get_CachedAutomationId(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAutomationId(This,retVal) ) 

#define IUIAutomationElement7_get_CachedClassName(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedClassName(This,retVal) ) 

#define IUIAutomationElement7_get_CachedHelpText(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedHelpText(This,retVal) ) 

#define IUIAutomationElement7_get_CachedCulture(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedCulture(This,retVal) ) 

#define IUIAutomationElement7_get_CachedIsControlElement(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsControlElement(This,retVal) ) 

#define IUIAutomationElement7_get_CachedIsContentElement(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsContentElement(This,retVal) ) 

#define IUIAutomationElement7_get_CachedIsPassword(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsPassword(This,retVal) ) 

#define IUIAutomationElement7_get_CachedNativeWindowHandle(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedNativeWindowHandle(This,retVal) ) 

#define IUIAutomationElement7_get_CachedItemType(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedItemType(This,retVal) ) 

#define IUIAutomationElement7_get_CachedIsOffscreen(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsOffscreen(This,retVal) ) 

#define IUIAutomationElement7_get_CachedOrientation(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedOrientation(This,retVal) ) 

#define IUIAutomationElement7_get_CachedFrameworkId(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedFrameworkId(This,retVal) ) 

#define IUIAutomationElement7_get_CachedIsRequiredForForm(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsRequiredForForm(This,retVal) ) 

#define IUIAutomationElement7_get_CachedItemStatus(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedItemStatus(This,retVal) ) 

#define IUIAutomationElement7_get_CachedBoundingRectangle(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedBoundingRectangle(This,retVal) ) 

#define IUIAutomationElement7_get_CachedLabeledBy(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedLabeledBy(This,retVal) ) 

#define IUIAutomationElement7_get_CachedAriaRole(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAriaRole(This,retVal) ) 

#define IUIAutomationElement7_get_CachedAriaProperties(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAriaProperties(This,retVal) ) 

#define IUIAutomationElement7_get_CachedIsDataValidForForm(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsDataValidForForm(This,retVal) ) 

#define IUIAutomationElement7_get_CachedControllerFor(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedControllerFor(This,retVal) ) 

#define IUIAutomationElement7_get_CachedDescribedBy(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedDescribedBy(This,retVal) ) 

#define IUIAutomationElement7_get_CachedFlowsTo(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedFlowsTo(This,retVal) ) 

#define IUIAutomationElement7_get_CachedProviderDescription(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedProviderDescription(This,retVal) ) 

#define IUIAutomationElement7_GetClickablePoint(This,clickable,gotClickable)	\
    ( (This)->lpVtbl -> GetClickablePoint(This,clickable,gotClickable) ) 


#define IUIAutomationElement7_get_CurrentOptimizeForVisualContent(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentOptimizeForVisualContent(This,retVal) ) 

#define IUIAutomationElement7_get_CachedOptimizeForVisualContent(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedOptimizeForVisualContent(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentLiveSetting(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLiveSetting(This,retVal) ) 

#define IUIAutomationElement7_get_CachedLiveSetting(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedLiveSetting(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentFlowsFrom(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentFlowsFrom(This,retVal) ) 

#define IUIAutomationElement7_get_CachedFlowsFrom(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedFlowsFrom(This,retVal) ) 


#define IUIAutomationElement7_ShowContextMenu(This)	\
    ( (This)->lpVtbl -> ShowContextMenu(This) ) 

#define IUIAutomationElement7_get_CurrentIsPeripheral(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsPeripheral(This,retVal) ) 

#define IUIAutomationElement7_get_CachedIsPeripheral(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsPeripheral(This,retVal) ) 


#define IUIAutomationElement7_get_CurrentPositionInSet(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentPositionInSet(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentSizeOfSet(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentSizeOfSet(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentLevel(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLevel(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentAnnotationTypes(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAnnotationTypes(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentAnnotationObjects(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAnnotationObjects(This,retVal) ) 

#define IUIAutomationElement7_get_CachedPositionInSet(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedPositionInSet(This,retVal) ) 

#define IUIAutomationElement7_get_CachedSizeOfSet(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedSizeOfSet(This,retVal) ) 

#define IUIAutomationElement7_get_CachedLevel(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedLevel(This,retVal) ) 

#define IUIAutomationElement7_get_CachedAnnotationTypes(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAnnotationTypes(This,retVal) ) 

#define IUIAutomationElement7_get_CachedAnnotationObjects(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedAnnotationObjects(This,retVal) ) 


#define IUIAutomationElement7_get_CurrentLandmarkType(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLandmarkType(This,retVal) ) 

#define IUIAutomationElement7_get_CurrentLocalizedLandmarkType(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLocalizedLandmarkType(This,retVal) ) 

#define IUIAutomationElement7_get_CachedLandmarkType(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedLandmarkType(This,retVal) ) 

#define IUIAutomationElement7_get_CachedLocalizedLandmarkType(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedLocalizedLandmarkType(This,retVal) ) 


#define IUIAutomationElement7_get_CurrentFullDescription(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentFullDescription(This,retVal) ) 

#define IUIAutomationElement7_get_CachedFullDescription(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedFullDescription(This,retVal) ) 


#define IUIAutomationElement7_FindFirstWithOptions(This,scope,condition,traversalOptions,root,found)	\
    ( (This)->lpVtbl -> FindFirstWithOptions(This,scope,condition,traversalOptions,root,found) ) 

#define IUIAutomationElement7_FindAllWithOptions(This,scope,condition,traversalOptions,root,found)	\
    ( (This)->lpVtbl -> FindAllWithOptions(This,scope,condition,traversalOptions,root,found) ) 

#define IUIAutomationElement7_FindFirstWithOptionsBuildCache(This,scope,condition,cacheRequest,traversalOptions,root,found)	\
    ( (This)->lpVtbl -> FindFirstWithOptionsBuildCache(This,scope,condition,cacheRequest,traversalOptions,root,found) ) 

#define IUIAutomationElement7_FindAllWithOptionsBuildCache(This,scope,condition,cacheRequest,traversalOptions,root,found)	\
    ( (This)->lpVtbl -> FindAllWithOptionsBuildCache(This,scope,condition,cacheRequest,traversalOptions,root,found) ) 

#define IUIAutomationElement7_GetCurrentMetadataValue(This,targetId,metadataId,returnVal)	\
    ( (This)->lpVtbl -> GetCurrentMetadataValue(This,targetId,metadataId,returnVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationElement7_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationProxyFactory_INTERFACE_DEFINED__
#define __IUIAutomationProxyFactory_INTERFACE_DEFINED__

/* interface IUIAutomationProxyFactory */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationProxyFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("85b94ecd-849d-42b6-b94d-d6db23fdf5a4")
    IUIAutomationProxyFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateProvider( 
            /* [in] */ UIA_HWND hwnd,
            /* [in] */ LONG idObject,
            /* [in] */ LONG idChild,
            /* [retval][out] */ IRawElementProviderSimple **provider) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ProxyFactoryId( 
            /* [retval][out] */ BSTR *factoryId) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationProxyFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationProxyFactory * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationProxyFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationProxyFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateProvider )( 
            IUIAutomationProxyFactory * This,
            /* [in] */ UIA_HWND hwnd,
            /* [in] */ LONG idObject,
            /* [in] */ LONG idChild,
            /* [retval][out] */ IRawElementProviderSimple **provider);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProxyFactoryId )( 
            IUIAutomationProxyFactory * This,
            /* [retval][out] */ BSTR *factoryId);
        
        END_INTERFACE
    } IUIAutomationProxyFactoryVtbl;

    interface IUIAutomationProxyFactory
    {
        CONST_VTBL struct IUIAutomationProxyFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationProxyFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationProxyFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationProxyFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationProxyFactory_CreateProvider(This,hwnd,idObject,idChild,provider)	\
    ( (This)->lpVtbl -> CreateProvider(This,hwnd,idObject,idChild,provider) ) 

#define IUIAutomationProxyFactory_get_ProxyFactoryId(This,factoryId)	\
    ( (This)->lpVtbl -> get_ProxyFactoryId(This,factoryId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationProxyFactory_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationProxyFactoryEntry_INTERFACE_DEFINED__
#define __IUIAutomationProxyFactoryEntry_INTERFACE_DEFINED__

/* interface IUIAutomationProxyFactoryEntry */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationProxyFactoryEntry;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d50e472e-b64b-490c-bca1-d30696f9f289")
    IUIAutomationProxyFactoryEntry : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ProxyFactory( 
            /* [retval][out] */ IUIAutomationProxyFactory **factory) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ClassName( 
            /* [retval][out] */ BSTR *className) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ImageName( 
            /* [retval][out] */ BSTR *imageName) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AllowSubstringMatch( 
            /* [retval][out] */ BOOL *allowSubstringMatch) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CanCheckBaseClass( 
            /* [retval][out] */ BOOL *canCheckBaseClass) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_NeedsAdviseEvents( 
            /* [retval][out] */ BOOL *adviseEvents) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ClassName( 
            /* [in] */ LPCWSTR className) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ImageName( 
            /* [in] */ LPCWSTR imageName) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_AllowSubstringMatch( 
            /* [in] */ BOOL allowSubstringMatch) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_CanCheckBaseClass( 
            /* [in] */ BOOL canCheckBaseClass) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_NeedsAdviseEvents( 
            /* [in] */ BOOL adviseEvents) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetWinEventsForAutomationEvent( 
            /* [in] */ EVENTID eventId,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ SAFEARRAY * winEvents) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetWinEventsForAutomationEvent( 
            /* [in] */ EVENTID eventId,
            /* [in] */ PROPERTYID propertyId,
            /* [retval][out] */ SAFEARRAY * *winEvents) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationProxyFactoryEntryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationProxyFactoryEntry * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationProxyFactoryEntry * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationProxyFactoryEntry * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProxyFactory )( 
            IUIAutomationProxyFactoryEntry * This,
            /* [retval][out] */ IUIAutomationProxyFactory **factory);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClassName )( 
            IUIAutomationProxyFactoryEntry * This,
            /* [retval][out] */ BSTR *className);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ImageName )( 
            IUIAutomationProxyFactoryEntry * This,
            /* [retval][out] */ BSTR *imageName);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowSubstringMatch )( 
            IUIAutomationProxyFactoryEntry * This,
            /* [retval][out] */ BOOL *allowSubstringMatch);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CanCheckBaseClass )( 
            IUIAutomationProxyFactoryEntry * This,
            /* [retval][out] */ BOOL *canCheckBaseClass);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NeedsAdviseEvents )( 
            IUIAutomationProxyFactoryEntry * This,
            /* [retval][out] */ BOOL *adviseEvents);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClassName )( 
            IUIAutomationProxyFactoryEntry * This,
            /* [in] */ LPCWSTR className);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ImageName )( 
            IUIAutomationProxyFactoryEntry * This,
            /* [in] */ LPCWSTR imageName);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowSubstringMatch )( 
            IUIAutomationProxyFactoryEntry * This,
            /* [in] */ BOOL allowSubstringMatch);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_CanCheckBaseClass )( 
            IUIAutomationProxyFactoryEntry * This,
            /* [in] */ BOOL canCheckBaseClass);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_NeedsAdviseEvents )( 
            IUIAutomationProxyFactoryEntry * This,
            /* [in] */ BOOL adviseEvents);
        
        HRESULT ( STDMETHODCALLTYPE *SetWinEventsForAutomationEvent )( 
            IUIAutomationProxyFactoryEntry * This,
            /* [in] */ EVENTID eventId,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ SAFEARRAY * winEvents);
        
        HRESULT ( STDMETHODCALLTYPE *GetWinEventsForAutomationEvent )( 
            IUIAutomationProxyFactoryEntry * This,
            /* [in] */ EVENTID eventId,
            /* [in] */ PROPERTYID propertyId,
            /* [retval][out] */ SAFEARRAY * *winEvents);
        
        END_INTERFACE
    } IUIAutomationProxyFactoryEntryVtbl;

    interface IUIAutomationProxyFactoryEntry
    {
        CONST_VTBL struct IUIAutomationProxyFactoryEntryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationProxyFactoryEntry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationProxyFactoryEntry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationProxyFactoryEntry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationProxyFactoryEntry_get_ProxyFactory(This,factory)	\
    ( (This)->lpVtbl -> get_ProxyFactory(This,factory) ) 

#define IUIAutomationProxyFactoryEntry_get_ClassName(This,className)	\
    ( (This)->lpVtbl -> get_ClassName(This,className) ) 

#define IUIAutomationProxyFactoryEntry_get_ImageName(This,imageName)	\
    ( (This)->lpVtbl -> get_ImageName(This,imageName) ) 

#define IUIAutomationProxyFactoryEntry_get_AllowSubstringMatch(This,allowSubstringMatch)	\
    ( (This)->lpVtbl -> get_AllowSubstringMatch(This,allowSubstringMatch) ) 

#define IUIAutomationProxyFactoryEntry_get_CanCheckBaseClass(This,canCheckBaseClass)	\
    ( (This)->lpVtbl -> get_CanCheckBaseClass(This,canCheckBaseClass) ) 

#define IUIAutomationProxyFactoryEntry_get_NeedsAdviseEvents(This,adviseEvents)	\
    ( (This)->lpVtbl -> get_NeedsAdviseEvents(This,adviseEvents) ) 

#define IUIAutomationProxyFactoryEntry_put_ClassName(This,className)	\
    ( (This)->lpVtbl -> put_ClassName(This,className) ) 

#define IUIAutomationProxyFactoryEntry_put_ImageName(This,imageName)	\
    ( (This)->lpVtbl -> put_ImageName(This,imageName) ) 

#define IUIAutomationProxyFactoryEntry_put_AllowSubstringMatch(This,allowSubstringMatch)	\
    ( (This)->lpVtbl -> put_AllowSubstringMatch(This,allowSubstringMatch) ) 

#define IUIAutomationProxyFactoryEntry_put_CanCheckBaseClass(This,canCheckBaseClass)	\
    ( (This)->lpVtbl -> put_CanCheckBaseClass(This,canCheckBaseClass) ) 

#define IUIAutomationProxyFactoryEntry_put_NeedsAdviseEvents(This,adviseEvents)	\
    ( (This)->lpVtbl -> put_NeedsAdviseEvents(This,adviseEvents) ) 

#define IUIAutomationProxyFactoryEntry_SetWinEventsForAutomationEvent(This,eventId,propertyId,winEvents)	\
    ( (This)->lpVtbl -> SetWinEventsForAutomationEvent(This,eventId,propertyId,winEvents) ) 

#define IUIAutomationProxyFactoryEntry_GetWinEventsForAutomationEvent(This,eventId,propertyId,winEvents)	\
    ( (This)->lpVtbl -> GetWinEventsForAutomationEvent(This,eventId,propertyId,winEvents) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationProxyFactoryEntry_INTERFACE_DEFINED__ */


#ifndef __IUIAutomationProxyFactoryMapping_INTERFACE_DEFINED__
#define __IUIAutomationProxyFactoryMapping_INTERFACE_DEFINED__

/* interface IUIAutomationProxyFactoryMapping */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomationProxyFactoryMapping;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("09e31e18-872d-4873-93d1-1e541ec133fd")
    IUIAutomationProxyFactoryMapping : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ UINT *count) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTable( 
            /* [retval][out] */ SAFEARRAY * *table) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEntry( 
            /* [in] */ UINT index,
            /* [retval][out] */ IUIAutomationProxyFactoryEntry **entry) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTable( 
            /* [in] */ SAFEARRAY * factoryList) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InsertEntries( 
            /* [in] */ UINT before,
            /* [in] */ SAFEARRAY * factoryList) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InsertEntry( 
            /* [in] */ UINT before,
            /* [in] */ IUIAutomationProxyFactoryEntry *factory) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveEntry( 
            /* [in] */ UINT index) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClearTable( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RestoreDefaultTable( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationProxyFactoryMappingVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomationProxyFactoryMapping * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomationProxyFactoryMapping * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomationProxyFactoryMapping * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IUIAutomationProxyFactoryMapping * This,
            /* [retval][out] */ UINT *count);
        
        HRESULT ( STDMETHODCALLTYPE *GetTable )( 
            IUIAutomationProxyFactoryMapping * This,
            /* [retval][out] */ SAFEARRAY * *table);
        
        HRESULT ( STDMETHODCALLTYPE *GetEntry )( 
            IUIAutomationProxyFactoryMapping * This,
            /* [in] */ UINT index,
            /* [retval][out] */ IUIAutomationProxyFactoryEntry **entry);
        
        HRESULT ( STDMETHODCALLTYPE *SetTable )( 
            IUIAutomationProxyFactoryMapping * This,
            /* [in] */ SAFEARRAY * factoryList);
        
        HRESULT ( STDMETHODCALLTYPE *InsertEntries )( 
            IUIAutomationProxyFactoryMapping * This,
            /* [in] */ UINT before,
            /* [in] */ SAFEARRAY * factoryList);
        
        HRESULT ( STDMETHODCALLTYPE *InsertEntry )( 
            IUIAutomationProxyFactoryMapping * This,
            /* [in] */ UINT before,
            /* [in] */ IUIAutomationProxyFactoryEntry *factory);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveEntry )( 
            IUIAutomationProxyFactoryMapping * This,
            /* [in] */ UINT index);
        
        HRESULT ( STDMETHODCALLTYPE *ClearTable )( 
            IUIAutomationProxyFactoryMapping * This);
        
        HRESULT ( STDMETHODCALLTYPE *RestoreDefaultTable )( 
            IUIAutomationProxyFactoryMapping * This);
        
        END_INTERFACE
    } IUIAutomationProxyFactoryMappingVtbl;

    interface IUIAutomationProxyFactoryMapping
    {
        CONST_VTBL struct IUIAutomationProxyFactoryMappingVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomationProxyFactoryMapping_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomationProxyFactoryMapping_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomationProxyFactoryMapping_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomationProxyFactoryMapping_get_Count(This,count)	\
    ( (This)->lpVtbl -> get_Count(This,count) ) 

#define IUIAutomationProxyFactoryMapping_GetTable(This,table)	\
    ( (This)->lpVtbl -> GetTable(This,table) ) 

#define IUIAutomationProxyFactoryMapping_GetEntry(This,index,entry)	\
    ( (This)->lpVtbl -> GetEntry(This,index,entry) ) 

#define IUIAutomationProxyFactoryMapping_SetTable(This,factoryList)	\
    ( (This)->lpVtbl -> SetTable(This,factoryList) ) 

#define IUIAutomationProxyFactoryMapping_InsertEntries(This,before,factoryList)	\
    ( (This)->lpVtbl -> InsertEntries(This,before,factoryList) ) 

#define IUIAutomationProxyFactoryMapping_InsertEntry(This,before,factory)	\
    ( (This)->lpVtbl -> InsertEntry(This,before,factory) ) 

#define IUIAutomationProxyFactoryMapping_RemoveEntry(This,index)	\
    ( (This)->lpVtbl -> RemoveEntry(This,index) ) 

#define IUIAutomationProxyFactoryMapping_ClearTable(This)	\
    ( (This)->lpVtbl -> ClearTable(This) ) 

#define IUIAutomationProxyFactoryMapping_RestoreDefaultTable(This)	\
    ( (This)->lpVtbl -> RestoreDefaultTable(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomationProxyFactoryMapping_INTERFACE_DEFINED__ */


#ifndef __IUIAutomation_INTERFACE_DEFINED__
#define __IUIAutomation_INTERFACE_DEFINED__

/* interface IUIAutomation */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("30cbe57d-d9d0-452a-ab13-7ac5ac4825ee")
    IUIAutomation : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CompareElements( 
            /* [in] */ IUIAutomationElement *el1,
            /* [in] */ IUIAutomationElement *el2,
            /* [retval][out] */ BOOL *areSame) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CompareRuntimeIds( 
            /* [in] */ SAFEARRAY * runtimeId1,
            /* [in] */ SAFEARRAY * runtimeId2,
            /* [retval][out] */ BOOL *areSame) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRootElement( 
            /* [retval][out] */ IUIAutomationElement **root) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ElementFromHandle( 
            /* [in] */ UIA_HWND hwnd,
            /* [retval][out] */ IUIAutomationElement **element) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ElementFromPoint( 
            /* [in] */ POINT pt,
            /* [retval][out] */ IUIAutomationElement **element) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFocusedElement( 
            /* [retval][out] */ IUIAutomationElement **element) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRootElementBuildCache( 
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **root) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ElementFromHandleBuildCache( 
            /* [in] */ UIA_HWND hwnd,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **element) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ElementFromPointBuildCache( 
            /* [in] */ POINT pt,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **element) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFocusedElementBuildCache( 
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **element) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateTreeWalker( 
            /* [in] */ IUIAutomationCondition *pCondition,
            /* [retval][out] */ IUIAutomationTreeWalker **walker) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ControlViewWalker( 
            /* [retval][out] */ IUIAutomationTreeWalker **walker) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ContentViewWalker( 
            /* [retval][out] */ IUIAutomationTreeWalker **walker) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RawViewWalker( 
            /* [retval][out] */ IUIAutomationTreeWalker **walker) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RawViewCondition( 
            /* [retval][out] */ IUIAutomationCondition **condition) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ControlViewCondition( 
            /* [retval][out] */ IUIAutomationCondition **condition) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ContentViewCondition( 
            /* [retval][out] */ IUIAutomationCondition **condition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateCacheRequest( 
            /* [retval][out] */ IUIAutomationCacheRequest **cacheRequest) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateTrueCondition( 
            /* [retval][out] */ IUIAutomationCondition **newCondition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateFalseCondition( 
            /* [retval][out] */ IUIAutomationCondition **newCondition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreatePropertyCondition( 
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ VARIANT value,
            /* [retval][out] */ IUIAutomationCondition **newCondition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreatePropertyConditionEx( 
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ VARIANT value,
            /* [in] */ enum PropertyConditionFlags flags,
            /* [retval][out] */ IUIAutomationCondition **newCondition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateAndCondition( 
            /* [in] */ IUIAutomationCondition *condition1,
            /* [in] */ IUIAutomationCondition *condition2,
            /* [retval][out] */ IUIAutomationCondition **newCondition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateAndConditionFromArray( 
            /* [in] */ SAFEARRAY * conditions,
            /* [retval][out] */ IUIAutomationCondition **newCondition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateAndConditionFromNativeArray( 
            /* [size_is][in] */ IUIAutomationCondition **conditions,
            /* [in] */ int conditionCount,
            /* [retval][out] */ IUIAutomationCondition **newCondition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateOrCondition( 
            /* [in] */ IUIAutomationCondition *condition1,
            /* [in] */ IUIAutomationCondition *condition2,
            /* [retval][out] */ IUIAutomationCondition **newCondition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateOrConditionFromArray( 
            /* [in] */ SAFEARRAY * conditions,
            /* [retval][out] */ IUIAutomationCondition **newCondition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateOrConditionFromNativeArray( 
            /* [size_is][in] */ IUIAutomationCondition **conditions,
            /* [in] */ int conditionCount,
            /* [retval][out] */ IUIAutomationCondition **newCondition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateNotCondition( 
            /* [in] */ IUIAutomationCondition *condition,
            /* [retval][out] */ IUIAutomationCondition **newCondition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddAutomationEventHandler( 
            /* [in] */ EVENTID eventId,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationEventHandler *handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveAutomationEventHandler( 
            /* [in] */ EVENTID eventId,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationEventHandler *handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddPropertyChangedEventHandlerNativeArray( 
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationPropertyChangedEventHandler *handler,
            /* [size_is][in] */ PROPERTYID *propertyArray,
            /* [in] */ int propertyCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddPropertyChangedEventHandler( 
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationPropertyChangedEventHandler *handler,
            /* [in] */ SAFEARRAY * propertyArray) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemovePropertyChangedEventHandler( 
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationPropertyChangedEventHandler *handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddStructureChangedEventHandler( 
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationStructureChangedEventHandler *handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveStructureChangedEventHandler( 
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationStructureChangedEventHandler *handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddFocusChangedEventHandler( 
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationFocusChangedEventHandler *handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveFocusChangedEventHandler( 
            /* [in] */ IUIAutomationFocusChangedEventHandler *handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveAllEventHandlers( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IntNativeArrayToSafeArray( 
            /* [size_is][in] */ int *array,
            /* [in] */ int arrayCount,
            /* [retval][out] */ SAFEARRAY * *safeArray) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IntSafeArrayToNativeArray( 
            /* [in] */ SAFEARRAY * intArray,
            /* [size_is][size_is][out] */ int **array,
            /* [retval][out] */ int *arrayCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RectToVariant( 
            /* [in] */ RECT rc,
            /* [retval][out] */ VARIANT *var) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE VariantToRect( 
            /* [in] */ VARIANT var,
            /* [retval][out] */ RECT *rc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SafeArrayToRectNativeArray( 
            /* [in] */ SAFEARRAY * rects,
            /* [size_is][size_is][out] */ RECT **rectArray,
            /* [retval][out] */ int *rectArrayCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateProxyFactoryEntry( 
            /* [in] */ IUIAutomationProxyFactory *factory,
            /* [retval][out] */ IUIAutomationProxyFactoryEntry **factoryEntry) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ProxyFactoryMapping( 
            /* [retval][out] */ IUIAutomationProxyFactoryMapping **factoryMapping) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyProgrammaticName( 
            /* [in] */ PROPERTYID property,
            /* [retval][out] */ BSTR *name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPatternProgrammaticName( 
            /* [in] */ PATTERNID pattern,
            /* [retval][out] */ BSTR *name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PollForPotentialSupportedPatterns( 
            /* [in] */ IUIAutomationElement *pElement,
            /* [out] */ SAFEARRAY * *patternIds,
            /* [out] */ SAFEARRAY * *patternNames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PollForPotentialSupportedProperties( 
            /* [in] */ IUIAutomationElement *pElement,
            /* [out] */ SAFEARRAY * *propertyIds,
            /* [out] */ SAFEARRAY * *propertyNames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CheckNotSupported( 
            /* [in] */ VARIANT value,
            /* [retval][out] */ BOOL *isNotSupported) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ReservedNotSupportedValue( 
            /* [retval][out] */ IUnknown **notSupportedValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ReservedMixedAttributeValue( 
            /* [retval][out] */ IUnknown **mixedAttributeValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ElementFromIAccessible( 
            /* [in] */ IAccessible *accessible,
            /* [in] */ int childId,
            /* [retval][out] */ IUIAutomationElement **element) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ElementFromIAccessibleBuildCache( 
            /* [in] */ IAccessible *accessible,
            /* [in] */ int childId,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **element) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomation * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomation * This);
        
        HRESULT ( STDMETHODCALLTYPE *CompareElements )( 
            IUIAutomation * This,
            /* [in] */ IUIAutomationElement *el1,
            /* [in] */ IUIAutomationElement *el2,
            /* [retval][out] */ BOOL *areSame);
        
        HRESULT ( STDMETHODCALLTYPE *CompareRuntimeIds )( 
            IUIAutomation * This,
            /* [in] */ SAFEARRAY * runtimeId1,
            /* [in] */ SAFEARRAY * runtimeId2,
            /* [retval][out] */ BOOL *areSame);
        
        HRESULT ( STDMETHODCALLTYPE *GetRootElement )( 
            IUIAutomation * This,
            /* [retval][out] */ IUIAutomationElement **root);
        
        HRESULT ( STDMETHODCALLTYPE *ElementFromHandle )( 
            IUIAutomation * This,
            /* [in] */ UIA_HWND hwnd,
            /* [retval][out] */ IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *ElementFromPoint )( 
            IUIAutomation * This,
            /* [in] */ POINT pt,
            /* [retval][out] */ IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *GetFocusedElement )( 
            IUIAutomation * This,
            /* [retval][out] */ IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *GetRootElementBuildCache )( 
            IUIAutomation * This,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **root);
        
        HRESULT ( STDMETHODCALLTYPE *ElementFromHandleBuildCache )( 
            IUIAutomation * This,
            /* [in] */ UIA_HWND hwnd,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *ElementFromPointBuildCache )( 
            IUIAutomation * This,
            /* [in] */ POINT pt,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *GetFocusedElementBuildCache )( 
            IUIAutomation * This,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTreeWalker )( 
            IUIAutomation * This,
            /* [in] */ IUIAutomationCondition *pCondition,
            /* [retval][out] */ IUIAutomationTreeWalker **walker);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ControlViewWalker )( 
            IUIAutomation * This,
            /* [retval][out] */ IUIAutomationTreeWalker **walker);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContentViewWalker )( 
            IUIAutomation * This,
            /* [retval][out] */ IUIAutomationTreeWalker **walker);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawViewWalker )( 
            IUIAutomation * This,
            /* [retval][out] */ IUIAutomationTreeWalker **walker);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawViewCondition )( 
            IUIAutomation * This,
            /* [retval][out] */ IUIAutomationCondition **condition);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ControlViewCondition )( 
            IUIAutomation * This,
            /* [retval][out] */ IUIAutomationCondition **condition);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContentViewCondition )( 
            IUIAutomation * This,
            /* [retval][out] */ IUIAutomationCondition **condition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateCacheRequest )( 
            IUIAutomation * This,
            /* [retval][out] */ IUIAutomationCacheRequest **cacheRequest);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTrueCondition )( 
            IUIAutomation * This,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateFalseCondition )( 
            IUIAutomation * This,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreatePropertyCondition )( 
            IUIAutomation * This,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ VARIANT value,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreatePropertyConditionEx )( 
            IUIAutomation * This,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ VARIANT value,
            /* [in] */ enum PropertyConditionFlags flags,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateAndCondition )( 
            IUIAutomation * This,
            /* [in] */ IUIAutomationCondition *condition1,
            /* [in] */ IUIAutomationCondition *condition2,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateAndConditionFromArray )( 
            IUIAutomation * This,
            /* [in] */ SAFEARRAY * conditions,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateAndConditionFromNativeArray )( 
            IUIAutomation * This,
            /* [size_is][in] */ IUIAutomationCondition **conditions,
            /* [in] */ int conditionCount,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateOrCondition )( 
            IUIAutomation * This,
            /* [in] */ IUIAutomationCondition *condition1,
            /* [in] */ IUIAutomationCondition *condition2,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateOrConditionFromArray )( 
            IUIAutomation * This,
            /* [in] */ SAFEARRAY * conditions,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateOrConditionFromNativeArray )( 
            IUIAutomation * This,
            /* [size_is][in] */ IUIAutomationCondition **conditions,
            /* [in] */ int conditionCount,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateNotCondition )( 
            IUIAutomation * This,
            /* [in] */ IUIAutomationCondition *condition,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *AddAutomationEventHandler )( 
            IUIAutomation * This,
            /* [in] */ EVENTID eventId,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveAutomationEventHandler )( 
            IUIAutomation * This,
            /* [in] */ EVENTID eventId,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *AddPropertyChangedEventHandlerNativeArray )( 
            IUIAutomation * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationPropertyChangedEventHandler *handler,
            /* [size_is][in] */ PROPERTYID *propertyArray,
            /* [in] */ int propertyCount);
        
        HRESULT ( STDMETHODCALLTYPE *AddPropertyChangedEventHandler )( 
            IUIAutomation * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationPropertyChangedEventHandler *handler,
            /* [in] */ SAFEARRAY * propertyArray);
        
        HRESULT ( STDMETHODCALLTYPE *RemovePropertyChangedEventHandler )( 
            IUIAutomation * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationPropertyChangedEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *AddStructureChangedEventHandler )( 
            IUIAutomation * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationStructureChangedEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveStructureChangedEventHandler )( 
            IUIAutomation * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationStructureChangedEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *AddFocusChangedEventHandler )( 
            IUIAutomation * This,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationFocusChangedEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveFocusChangedEventHandler )( 
            IUIAutomation * This,
            /* [in] */ IUIAutomationFocusChangedEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveAllEventHandlers )( 
            IUIAutomation * This);
        
        HRESULT ( STDMETHODCALLTYPE *IntNativeArrayToSafeArray )( 
            IUIAutomation * This,
            /* [size_is][in] */ int *array,
            /* [in] */ int arrayCount,
            /* [retval][out] */ SAFEARRAY * *safeArray);
        
        HRESULT ( STDMETHODCALLTYPE *IntSafeArrayToNativeArray )( 
            IUIAutomation * This,
            /* [in] */ SAFEARRAY * intArray,
            /* [size_is][size_is][out] */ int **array,
            /* [retval][out] */ int *arrayCount);
        
        HRESULT ( STDMETHODCALLTYPE *RectToVariant )( 
            IUIAutomation * This,
            /* [in] */ RECT rc,
            /* [retval][out] */ VARIANT *var);
        
        HRESULT ( STDMETHODCALLTYPE *VariantToRect )( 
            IUIAutomation * This,
            /* [in] */ VARIANT var,
            /* [retval][out] */ RECT *rc);
        
        HRESULT ( STDMETHODCALLTYPE *SafeArrayToRectNativeArray )( 
            IUIAutomation * This,
            /* [in] */ SAFEARRAY * rects,
            /* [size_is][size_is][out] */ RECT **rectArray,
            /* [retval][out] */ int *rectArrayCount);
        
        HRESULT ( STDMETHODCALLTYPE *CreateProxyFactoryEntry )( 
            IUIAutomation * This,
            /* [in] */ IUIAutomationProxyFactory *factory,
            /* [retval][out] */ IUIAutomationProxyFactoryEntry **factoryEntry);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProxyFactoryMapping )( 
            IUIAutomation * This,
            /* [retval][out] */ IUIAutomationProxyFactoryMapping **factoryMapping);
        
        HRESULT ( STDMETHODCALLTYPE *GetPropertyProgrammaticName )( 
            IUIAutomation * This,
            /* [in] */ PROPERTYID property,
            /* [retval][out] */ BSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *GetPatternProgrammaticName )( 
            IUIAutomation * This,
            /* [in] */ PATTERNID pattern,
            /* [retval][out] */ BSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *PollForPotentialSupportedPatterns )( 
            IUIAutomation * This,
            /* [in] */ IUIAutomationElement *pElement,
            /* [out] */ SAFEARRAY * *patternIds,
            /* [out] */ SAFEARRAY * *patternNames);
        
        HRESULT ( STDMETHODCALLTYPE *PollForPotentialSupportedProperties )( 
            IUIAutomation * This,
            /* [in] */ IUIAutomationElement *pElement,
            /* [out] */ SAFEARRAY * *propertyIds,
            /* [out] */ SAFEARRAY * *propertyNames);
        
        HRESULT ( STDMETHODCALLTYPE *CheckNotSupported )( 
            IUIAutomation * This,
            /* [in] */ VARIANT value,
            /* [retval][out] */ BOOL *isNotSupported);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReservedNotSupportedValue )( 
            IUIAutomation * This,
            /* [retval][out] */ IUnknown **notSupportedValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReservedMixedAttributeValue )( 
            IUIAutomation * This,
            /* [retval][out] */ IUnknown **mixedAttributeValue);
        
        HRESULT ( STDMETHODCALLTYPE *ElementFromIAccessible )( 
            IUIAutomation * This,
            /* [in] */ IAccessible *accessible,
            /* [in] */ int childId,
            /* [retval][out] */ IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *ElementFromIAccessibleBuildCache )( 
            IUIAutomation * This,
            /* [in] */ IAccessible *accessible,
            /* [in] */ int childId,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **element);
        
        END_INTERFACE
    } IUIAutomationVtbl;

    interface IUIAutomation
    {
        CONST_VTBL struct IUIAutomationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomation_CompareElements(This,el1,el2,areSame)	\
    ( (This)->lpVtbl -> CompareElements(This,el1,el2,areSame) ) 

#define IUIAutomation_CompareRuntimeIds(This,runtimeId1,runtimeId2,areSame)	\
    ( (This)->lpVtbl -> CompareRuntimeIds(This,runtimeId1,runtimeId2,areSame) ) 

#define IUIAutomation_GetRootElement(This,root)	\
    ( (This)->lpVtbl -> GetRootElement(This,root) ) 

#define IUIAutomation_ElementFromHandle(This,hwnd,element)	\
    ( (This)->lpVtbl -> ElementFromHandle(This,hwnd,element) ) 

#define IUIAutomation_ElementFromPoint(This,pt,element)	\
    ( (This)->lpVtbl -> ElementFromPoint(This,pt,element) ) 

#define IUIAutomation_GetFocusedElement(This,element)	\
    ( (This)->lpVtbl -> GetFocusedElement(This,element) ) 

#define IUIAutomation_GetRootElementBuildCache(This,cacheRequest,root)	\
    ( (This)->lpVtbl -> GetRootElementBuildCache(This,cacheRequest,root) ) 

#define IUIAutomation_ElementFromHandleBuildCache(This,hwnd,cacheRequest,element)	\
    ( (This)->lpVtbl -> ElementFromHandleBuildCache(This,hwnd,cacheRequest,element) ) 

#define IUIAutomation_ElementFromPointBuildCache(This,pt,cacheRequest,element)	\
    ( (This)->lpVtbl -> ElementFromPointBuildCache(This,pt,cacheRequest,element) ) 

#define IUIAutomation_GetFocusedElementBuildCache(This,cacheRequest,element)	\
    ( (This)->lpVtbl -> GetFocusedElementBuildCache(This,cacheRequest,element) ) 

#define IUIAutomation_CreateTreeWalker(This,pCondition,walker)	\
    ( (This)->lpVtbl -> CreateTreeWalker(This,pCondition,walker) ) 

#define IUIAutomation_get_ControlViewWalker(This,walker)	\
    ( (This)->lpVtbl -> get_ControlViewWalker(This,walker) ) 

#define IUIAutomation_get_ContentViewWalker(This,walker)	\
    ( (This)->lpVtbl -> get_ContentViewWalker(This,walker) ) 

#define IUIAutomation_get_RawViewWalker(This,walker)	\
    ( (This)->lpVtbl -> get_RawViewWalker(This,walker) ) 

#define IUIAutomation_get_RawViewCondition(This,condition)	\
    ( (This)->lpVtbl -> get_RawViewCondition(This,condition) ) 

#define IUIAutomation_get_ControlViewCondition(This,condition)	\
    ( (This)->lpVtbl -> get_ControlViewCondition(This,condition) ) 

#define IUIAutomation_get_ContentViewCondition(This,condition)	\
    ( (This)->lpVtbl -> get_ContentViewCondition(This,condition) ) 

#define IUIAutomation_CreateCacheRequest(This,cacheRequest)	\
    ( (This)->lpVtbl -> CreateCacheRequest(This,cacheRequest) ) 

#define IUIAutomation_CreateTrueCondition(This,newCondition)	\
    ( (This)->lpVtbl -> CreateTrueCondition(This,newCondition) ) 

#define IUIAutomation_CreateFalseCondition(This,newCondition)	\
    ( (This)->lpVtbl -> CreateFalseCondition(This,newCondition) ) 

#define IUIAutomation_CreatePropertyCondition(This,propertyId,value,newCondition)	\
    ( (This)->lpVtbl -> CreatePropertyCondition(This,propertyId,value,newCondition) ) 

#define IUIAutomation_CreatePropertyConditionEx(This,propertyId,value,flags,newCondition)	\
    ( (This)->lpVtbl -> CreatePropertyConditionEx(This,propertyId,value,flags,newCondition) ) 

#define IUIAutomation_CreateAndCondition(This,condition1,condition2,newCondition)	\
    ( (This)->lpVtbl -> CreateAndCondition(This,condition1,condition2,newCondition) ) 

#define IUIAutomation_CreateAndConditionFromArray(This,conditions,newCondition)	\
    ( (This)->lpVtbl -> CreateAndConditionFromArray(This,conditions,newCondition) ) 

#define IUIAutomation_CreateAndConditionFromNativeArray(This,conditions,conditionCount,newCondition)	\
    ( (This)->lpVtbl -> CreateAndConditionFromNativeArray(This,conditions,conditionCount,newCondition) ) 

#define IUIAutomation_CreateOrCondition(This,condition1,condition2,newCondition)	\
    ( (This)->lpVtbl -> CreateOrCondition(This,condition1,condition2,newCondition) ) 

#define IUIAutomation_CreateOrConditionFromArray(This,conditions,newCondition)	\
    ( (This)->lpVtbl -> CreateOrConditionFromArray(This,conditions,newCondition) ) 

#define IUIAutomation_CreateOrConditionFromNativeArray(This,conditions,conditionCount,newCondition)	\
    ( (This)->lpVtbl -> CreateOrConditionFromNativeArray(This,conditions,conditionCount,newCondition) ) 

#define IUIAutomation_CreateNotCondition(This,condition,newCondition)	\
    ( (This)->lpVtbl -> CreateNotCondition(This,condition,newCondition) ) 

#define IUIAutomation_AddAutomationEventHandler(This,eventId,element,scope,cacheRequest,handler)	\
    ( (This)->lpVtbl -> AddAutomationEventHandler(This,eventId,element,scope,cacheRequest,handler) ) 

#define IUIAutomation_RemoveAutomationEventHandler(This,eventId,element,handler)	\
    ( (This)->lpVtbl -> RemoveAutomationEventHandler(This,eventId,element,handler) ) 

#define IUIAutomation_AddPropertyChangedEventHandlerNativeArray(This,element,scope,cacheRequest,handler,propertyArray,propertyCount)	\
    ( (This)->lpVtbl -> AddPropertyChangedEventHandlerNativeArray(This,element,scope,cacheRequest,handler,propertyArray,propertyCount) ) 

#define IUIAutomation_AddPropertyChangedEventHandler(This,element,scope,cacheRequest,handler,propertyArray)	\
    ( (This)->lpVtbl -> AddPropertyChangedEventHandler(This,element,scope,cacheRequest,handler,propertyArray) ) 

#define IUIAutomation_RemovePropertyChangedEventHandler(This,element,handler)	\
    ( (This)->lpVtbl -> RemovePropertyChangedEventHandler(This,element,handler) ) 

#define IUIAutomation_AddStructureChangedEventHandler(This,element,scope,cacheRequest,handler)	\
    ( (This)->lpVtbl -> AddStructureChangedEventHandler(This,element,scope,cacheRequest,handler) ) 

#define IUIAutomation_RemoveStructureChangedEventHandler(This,element,handler)	\
    ( (This)->lpVtbl -> RemoveStructureChangedEventHandler(This,element,handler) ) 

#define IUIAutomation_AddFocusChangedEventHandler(This,cacheRequest,handler)	\
    ( (This)->lpVtbl -> AddFocusChangedEventHandler(This,cacheRequest,handler) ) 

#define IUIAutomation_RemoveFocusChangedEventHandler(This,handler)	\
    ( (This)->lpVtbl -> RemoveFocusChangedEventHandler(This,handler) ) 

#define IUIAutomation_RemoveAllEventHandlers(This)	\
    ( (This)->lpVtbl -> RemoveAllEventHandlers(This) ) 

#define IUIAutomation_IntNativeArrayToSafeArray(This,array,arrayCount,safeArray)	\
    ( (This)->lpVtbl -> IntNativeArrayToSafeArray(This,array,arrayCount,safeArray) ) 

#define IUIAutomation_IntSafeArrayToNativeArray(This,intArray,array,arrayCount)	\
    ( (This)->lpVtbl -> IntSafeArrayToNativeArray(This,intArray,array,arrayCount) ) 

#define IUIAutomation_RectToVariant(This,rc,var)	\
    ( (This)->lpVtbl -> RectToVariant(This,rc,var) ) 

#define IUIAutomation_VariantToRect(This,var,rc)	\
    ( (This)->lpVtbl -> VariantToRect(This,var,rc) ) 

#define IUIAutomation_SafeArrayToRectNativeArray(This,rects,rectArray,rectArrayCount)	\
    ( (This)->lpVtbl -> SafeArrayToRectNativeArray(This,rects,rectArray,rectArrayCount) ) 

#define IUIAutomation_CreateProxyFactoryEntry(This,factory,factoryEntry)	\
    ( (This)->lpVtbl -> CreateProxyFactoryEntry(This,factory,factoryEntry) ) 

#define IUIAutomation_get_ProxyFactoryMapping(This,factoryMapping)	\
    ( (This)->lpVtbl -> get_ProxyFactoryMapping(This,factoryMapping) ) 

#define IUIAutomation_GetPropertyProgrammaticName(This,property,name)	\
    ( (This)->lpVtbl -> GetPropertyProgrammaticName(This,property,name) ) 

#define IUIAutomation_GetPatternProgrammaticName(This,pattern,name)	\
    ( (This)->lpVtbl -> GetPatternProgrammaticName(This,pattern,name) ) 

#define IUIAutomation_PollForPotentialSupportedPatterns(This,pElement,patternIds,patternNames)	\
    ( (This)->lpVtbl -> PollForPotentialSupportedPatterns(This,pElement,patternIds,patternNames) ) 

#define IUIAutomation_PollForPotentialSupportedProperties(This,pElement,propertyIds,propertyNames)	\
    ( (This)->lpVtbl -> PollForPotentialSupportedProperties(This,pElement,propertyIds,propertyNames) ) 

#define IUIAutomation_CheckNotSupported(This,value,isNotSupported)	\
    ( (This)->lpVtbl -> CheckNotSupported(This,value,isNotSupported) ) 

#define IUIAutomation_get_ReservedNotSupportedValue(This,notSupportedValue)	\
    ( (This)->lpVtbl -> get_ReservedNotSupportedValue(This,notSupportedValue) ) 

#define IUIAutomation_get_ReservedMixedAttributeValue(This,mixedAttributeValue)	\
    ( (This)->lpVtbl -> get_ReservedMixedAttributeValue(This,mixedAttributeValue) ) 

#define IUIAutomation_ElementFromIAccessible(This,accessible,childId,element)	\
    ( (This)->lpVtbl -> ElementFromIAccessible(This,accessible,childId,element) ) 

#define IUIAutomation_ElementFromIAccessibleBuildCache(This,accessible,childId,cacheRequest,element)	\
    ( (This)->lpVtbl -> ElementFromIAccessibleBuildCache(This,accessible,childId,cacheRequest,element) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomation_INTERFACE_DEFINED__ */


#ifndef __IUIAutomation2_INTERFACE_DEFINED__
#define __IUIAutomation2_INTERFACE_DEFINED__

/* interface IUIAutomation2 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomation2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("34723aff-0c9d-49d0-9896-7ab52df8cd8a")
    IUIAutomation2 : public IUIAutomation
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AutoSetFocus( 
            /* [retval][out] */ BOOL *autoSetFocus) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_AutoSetFocus( 
            /* [in] */ BOOL autoSetFocus) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ConnectionTimeout( 
            /* [retval][out] */ DWORD *timeout) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ConnectionTimeout( 
            /* [in] */ DWORD timeout) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TransactionTimeout( 
            /* [retval][out] */ DWORD *timeout) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_TransactionTimeout( 
            /* [in] */ DWORD timeout) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomation2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomation2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomation2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomation2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *CompareElements )( 
            IUIAutomation2 * This,
            /* [in] */ IUIAutomationElement *el1,
            /* [in] */ IUIAutomationElement *el2,
            /* [retval][out] */ BOOL *areSame);
        
        HRESULT ( STDMETHODCALLTYPE *CompareRuntimeIds )( 
            IUIAutomation2 * This,
            /* [in] */ SAFEARRAY * runtimeId1,
            /* [in] */ SAFEARRAY * runtimeId2,
            /* [retval][out] */ BOOL *areSame);
        
        HRESULT ( STDMETHODCALLTYPE *GetRootElement )( 
            IUIAutomation2 * This,
            /* [retval][out] */ IUIAutomationElement **root);
        
        HRESULT ( STDMETHODCALLTYPE *ElementFromHandle )( 
            IUIAutomation2 * This,
            /* [in] */ UIA_HWND hwnd,
            /* [retval][out] */ IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *ElementFromPoint )( 
            IUIAutomation2 * This,
            /* [in] */ POINT pt,
            /* [retval][out] */ IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *GetFocusedElement )( 
            IUIAutomation2 * This,
            /* [retval][out] */ IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *GetRootElementBuildCache )( 
            IUIAutomation2 * This,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **root);
        
        HRESULT ( STDMETHODCALLTYPE *ElementFromHandleBuildCache )( 
            IUIAutomation2 * This,
            /* [in] */ UIA_HWND hwnd,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *ElementFromPointBuildCache )( 
            IUIAutomation2 * This,
            /* [in] */ POINT pt,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *GetFocusedElementBuildCache )( 
            IUIAutomation2 * This,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTreeWalker )( 
            IUIAutomation2 * This,
            /* [in] */ IUIAutomationCondition *pCondition,
            /* [retval][out] */ IUIAutomationTreeWalker **walker);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ControlViewWalker )( 
            IUIAutomation2 * This,
            /* [retval][out] */ IUIAutomationTreeWalker **walker);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContentViewWalker )( 
            IUIAutomation2 * This,
            /* [retval][out] */ IUIAutomationTreeWalker **walker);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawViewWalker )( 
            IUIAutomation2 * This,
            /* [retval][out] */ IUIAutomationTreeWalker **walker);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawViewCondition )( 
            IUIAutomation2 * This,
            /* [retval][out] */ IUIAutomationCondition **condition);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ControlViewCondition )( 
            IUIAutomation2 * This,
            /* [retval][out] */ IUIAutomationCondition **condition);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContentViewCondition )( 
            IUIAutomation2 * This,
            /* [retval][out] */ IUIAutomationCondition **condition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateCacheRequest )( 
            IUIAutomation2 * This,
            /* [retval][out] */ IUIAutomationCacheRequest **cacheRequest);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTrueCondition )( 
            IUIAutomation2 * This,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateFalseCondition )( 
            IUIAutomation2 * This,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreatePropertyCondition )( 
            IUIAutomation2 * This,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ VARIANT value,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreatePropertyConditionEx )( 
            IUIAutomation2 * This,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ VARIANT value,
            /* [in] */ enum PropertyConditionFlags flags,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateAndCondition )( 
            IUIAutomation2 * This,
            /* [in] */ IUIAutomationCondition *condition1,
            /* [in] */ IUIAutomationCondition *condition2,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateAndConditionFromArray )( 
            IUIAutomation2 * This,
            /* [in] */ SAFEARRAY * conditions,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateAndConditionFromNativeArray )( 
            IUIAutomation2 * This,
            /* [size_is][in] */ IUIAutomationCondition **conditions,
            /* [in] */ int conditionCount,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateOrCondition )( 
            IUIAutomation2 * This,
            /* [in] */ IUIAutomationCondition *condition1,
            /* [in] */ IUIAutomationCondition *condition2,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateOrConditionFromArray )( 
            IUIAutomation2 * This,
            /* [in] */ SAFEARRAY * conditions,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateOrConditionFromNativeArray )( 
            IUIAutomation2 * This,
            /* [size_is][in] */ IUIAutomationCondition **conditions,
            /* [in] */ int conditionCount,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateNotCondition )( 
            IUIAutomation2 * This,
            /* [in] */ IUIAutomationCondition *condition,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *AddAutomationEventHandler )( 
            IUIAutomation2 * This,
            /* [in] */ EVENTID eventId,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveAutomationEventHandler )( 
            IUIAutomation2 * This,
            /* [in] */ EVENTID eventId,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *AddPropertyChangedEventHandlerNativeArray )( 
            IUIAutomation2 * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationPropertyChangedEventHandler *handler,
            /* [size_is][in] */ PROPERTYID *propertyArray,
            /* [in] */ int propertyCount);
        
        HRESULT ( STDMETHODCALLTYPE *AddPropertyChangedEventHandler )( 
            IUIAutomation2 * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationPropertyChangedEventHandler *handler,
            /* [in] */ SAFEARRAY * propertyArray);
        
        HRESULT ( STDMETHODCALLTYPE *RemovePropertyChangedEventHandler )( 
            IUIAutomation2 * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationPropertyChangedEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *AddStructureChangedEventHandler )( 
            IUIAutomation2 * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationStructureChangedEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveStructureChangedEventHandler )( 
            IUIAutomation2 * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationStructureChangedEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *AddFocusChangedEventHandler )( 
            IUIAutomation2 * This,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationFocusChangedEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveFocusChangedEventHandler )( 
            IUIAutomation2 * This,
            /* [in] */ IUIAutomationFocusChangedEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveAllEventHandlers )( 
            IUIAutomation2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *IntNativeArrayToSafeArray )( 
            IUIAutomation2 * This,
            /* [size_is][in] */ int *array,
            /* [in] */ int arrayCount,
            /* [retval][out] */ SAFEARRAY * *safeArray);
        
        HRESULT ( STDMETHODCALLTYPE *IntSafeArrayToNativeArray )( 
            IUIAutomation2 * This,
            /* [in] */ SAFEARRAY * intArray,
            /* [size_is][size_is][out] */ int **array,
            /* [retval][out] */ int *arrayCount);
        
        HRESULT ( STDMETHODCALLTYPE *RectToVariant )( 
            IUIAutomation2 * This,
            /* [in] */ RECT rc,
            /* [retval][out] */ VARIANT *var);
        
        HRESULT ( STDMETHODCALLTYPE *VariantToRect )( 
            IUIAutomation2 * This,
            /* [in] */ VARIANT var,
            /* [retval][out] */ RECT *rc);
        
        HRESULT ( STDMETHODCALLTYPE *SafeArrayToRectNativeArray )( 
            IUIAutomation2 * This,
            /* [in] */ SAFEARRAY * rects,
            /* [size_is][size_is][out] */ RECT **rectArray,
            /* [retval][out] */ int *rectArrayCount);
        
        HRESULT ( STDMETHODCALLTYPE *CreateProxyFactoryEntry )( 
            IUIAutomation2 * This,
            /* [in] */ IUIAutomationProxyFactory *factory,
            /* [retval][out] */ IUIAutomationProxyFactoryEntry **factoryEntry);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProxyFactoryMapping )( 
            IUIAutomation2 * This,
            /* [retval][out] */ IUIAutomationProxyFactoryMapping **factoryMapping);
        
        HRESULT ( STDMETHODCALLTYPE *GetPropertyProgrammaticName )( 
            IUIAutomation2 * This,
            /* [in] */ PROPERTYID property,
            /* [retval][out] */ BSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *GetPatternProgrammaticName )( 
            IUIAutomation2 * This,
            /* [in] */ PATTERNID pattern,
            /* [retval][out] */ BSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *PollForPotentialSupportedPatterns )( 
            IUIAutomation2 * This,
            /* [in] */ IUIAutomationElement *pElement,
            /* [out] */ SAFEARRAY * *patternIds,
            /* [out] */ SAFEARRAY * *patternNames);
        
        HRESULT ( STDMETHODCALLTYPE *PollForPotentialSupportedProperties )( 
            IUIAutomation2 * This,
            /* [in] */ IUIAutomationElement *pElement,
            /* [out] */ SAFEARRAY * *propertyIds,
            /* [out] */ SAFEARRAY * *propertyNames);
        
        HRESULT ( STDMETHODCALLTYPE *CheckNotSupported )( 
            IUIAutomation2 * This,
            /* [in] */ VARIANT value,
            /* [retval][out] */ BOOL *isNotSupported);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReservedNotSupportedValue )( 
            IUIAutomation2 * This,
            /* [retval][out] */ IUnknown **notSupportedValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReservedMixedAttributeValue )( 
            IUIAutomation2 * This,
            /* [retval][out] */ IUnknown **mixedAttributeValue);
        
        HRESULT ( STDMETHODCALLTYPE *ElementFromIAccessible )( 
            IUIAutomation2 * This,
            /* [in] */ IAccessible *accessible,
            /* [in] */ int childId,
            /* [retval][out] */ IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *ElementFromIAccessibleBuildCache )( 
            IUIAutomation2 * This,
            /* [in] */ IAccessible *accessible,
            /* [in] */ int childId,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **element);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutoSetFocus )( 
            IUIAutomation2 * This,
            /* [retval][out] */ BOOL *autoSetFocus);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutoSetFocus )( 
            IUIAutomation2 * This,
            /* [in] */ BOOL autoSetFocus);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionTimeout )( 
            IUIAutomation2 * This,
            /* [retval][out] */ DWORD *timeout);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionTimeout )( 
            IUIAutomation2 * This,
            /* [in] */ DWORD timeout);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TransactionTimeout )( 
            IUIAutomation2 * This,
            /* [retval][out] */ DWORD *timeout);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_TransactionTimeout )( 
            IUIAutomation2 * This,
            /* [in] */ DWORD timeout);
        
        END_INTERFACE
    } IUIAutomation2Vtbl;

    interface IUIAutomation2
    {
        CONST_VTBL struct IUIAutomation2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomation2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomation2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomation2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomation2_CompareElements(This,el1,el2,areSame)	\
    ( (This)->lpVtbl -> CompareElements(This,el1,el2,areSame) ) 

#define IUIAutomation2_CompareRuntimeIds(This,runtimeId1,runtimeId2,areSame)	\
    ( (This)->lpVtbl -> CompareRuntimeIds(This,runtimeId1,runtimeId2,areSame) ) 

#define IUIAutomation2_GetRootElement(This,root)	\
    ( (This)->lpVtbl -> GetRootElement(This,root) ) 

#define IUIAutomation2_ElementFromHandle(This,hwnd,element)	\
    ( (This)->lpVtbl -> ElementFromHandle(This,hwnd,element) ) 

#define IUIAutomation2_ElementFromPoint(This,pt,element)	\
    ( (This)->lpVtbl -> ElementFromPoint(This,pt,element) ) 

#define IUIAutomation2_GetFocusedElement(This,element)	\
    ( (This)->lpVtbl -> GetFocusedElement(This,element) ) 

#define IUIAutomation2_GetRootElementBuildCache(This,cacheRequest,root)	\
    ( (This)->lpVtbl -> GetRootElementBuildCache(This,cacheRequest,root) ) 

#define IUIAutomation2_ElementFromHandleBuildCache(This,hwnd,cacheRequest,element)	\
    ( (This)->lpVtbl -> ElementFromHandleBuildCache(This,hwnd,cacheRequest,element) ) 

#define IUIAutomation2_ElementFromPointBuildCache(This,pt,cacheRequest,element)	\
    ( (This)->lpVtbl -> ElementFromPointBuildCache(This,pt,cacheRequest,element) ) 

#define IUIAutomation2_GetFocusedElementBuildCache(This,cacheRequest,element)	\
    ( (This)->lpVtbl -> GetFocusedElementBuildCache(This,cacheRequest,element) ) 

#define IUIAutomation2_CreateTreeWalker(This,pCondition,walker)	\
    ( (This)->lpVtbl -> CreateTreeWalker(This,pCondition,walker) ) 

#define IUIAutomation2_get_ControlViewWalker(This,walker)	\
    ( (This)->lpVtbl -> get_ControlViewWalker(This,walker) ) 

#define IUIAutomation2_get_ContentViewWalker(This,walker)	\
    ( (This)->lpVtbl -> get_ContentViewWalker(This,walker) ) 

#define IUIAutomation2_get_RawViewWalker(This,walker)	\
    ( (This)->lpVtbl -> get_RawViewWalker(This,walker) ) 

#define IUIAutomation2_get_RawViewCondition(This,condition)	\
    ( (This)->lpVtbl -> get_RawViewCondition(This,condition) ) 

#define IUIAutomation2_get_ControlViewCondition(This,condition)	\
    ( (This)->lpVtbl -> get_ControlViewCondition(This,condition) ) 

#define IUIAutomation2_get_ContentViewCondition(This,condition)	\
    ( (This)->lpVtbl -> get_ContentViewCondition(This,condition) ) 

#define IUIAutomation2_CreateCacheRequest(This,cacheRequest)	\
    ( (This)->lpVtbl -> CreateCacheRequest(This,cacheRequest) ) 

#define IUIAutomation2_CreateTrueCondition(This,newCondition)	\
    ( (This)->lpVtbl -> CreateTrueCondition(This,newCondition) ) 

#define IUIAutomation2_CreateFalseCondition(This,newCondition)	\
    ( (This)->lpVtbl -> CreateFalseCondition(This,newCondition) ) 

#define IUIAutomation2_CreatePropertyCondition(This,propertyId,value,newCondition)	\
    ( (This)->lpVtbl -> CreatePropertyCondition(This,propertyId,value,newCondition) ) 

#define IUIAutomation2_CreatePropertyConditionEx(This,propertyId,value,flags,newCondition)	\
    ( (This)->lpVtbl -> CreatePropertyConditionEx(This,propertyId,value,flags,newCondition) ) 

#define IUIAutomation2_CreateAndCondition(This,condition1,condition2,newCondition)	\
    ( (This)->lpVtbl -> CreateAndCondition(This,condition1,condition2,newCondition) ) 

#define IUIAutomation2_CreateAndConditionFromArray(This,conditions,newCondition)	\
    ( (This)->lpVtbl -> CreateAndConditionFromArray(This,conditions,newCondition) ) 

#define IUIAutomation2_CreateAndConditionFromNativeArray(This,conditions,conditionCount,newCondition)	\
    ( (This)->lpVtbl -> CreateAndConditionFromNativeArray(This,conditions,conditionCount,newCondition) ) 

#define IUIAutomation2_CreateOrCondition(This,condition1,condition2,newCondition)	\
    ( (This)->lpVtbl -> CreateOrCondition(This,condition1,condition2,newCondition) ) 

#define IUIAutomation2_CreateOrConditionFromArray(This,conditions,newCondition)	\
    ( (This)->lpVtbl -> CreateOrConditionFromArray(This,conditions,newCondition) ) 

#define IUIAutomation2_CreateOrConditionFromNativeArray(This,conditions,conditionCount,newCondition)	\
    ( (This)->lpVtbl -> CreateOrConditionFromNativeArray(This,conditions,conditionCount,newCondition) ) 

#define IUIAutomation2_CreateNotCondition(This,condition,newCondition)	\
    ( (This)->lpVtbl -> CreateNotCondition(This,condition,newCondition) ) 

#define IUIAutomation2_AddAutomationEventHandler(This,eventId,element,scope,cacheRequest,handler)	\
    ( (This)->lpVtbl -> AddAutomationEventHandler(This,eventId,element,scope,cacheRequest,handler) ) 

#define IUIAutomation2_RemoveAutomationEventHandler(This,eventId,element,handler)	\
    ( (This)->lpVtbl -> RemoveAutomationEventHandler(This,eventId,element,handler) ) 

#define IUIAutomation2_AddPropertyChangedEventHandlerNativeArray(This,element,scope,cacheRequest,handler,propertyArray,propertyCount)	\
    ( (This)->lpVtbl -> AddPropertyChangedEventHandlerNativeArray(This,element,scope,cacheRequest,handler,propertyArray,propertyCount) ) 

#define IUIAutomation2_AddPropertyChangedEventHandler(This,element,scope,cacheRequest,handler,propertyArray)	\
    ( (This)->lpVtbl -> AddPropertyChangedEventHandler(This,element,scope,cacheRequest,handler,propertyArray) ) 

#define IUIAutomation2_RemovePropertyChangedEventHandler(This,element,handler)	\
    ( (This)->lpVtbl -> RemovePropertyChangedEventHandler(This,element,handler) ) 

#define IUIAutomation2_AddStructureChangedEventHandler(This,element,scope,cacheRequest,handler)	\
    ( (This)->lpVtbl -> AddStructureChangedEventHandler(This,element,scope,cacheRequest,handler) ) 

#define IUIAutomation2_RemoveStructureChangedEventHandler(This,element,handler)	\
    ( (This)->lpVtbl -> RemoveStructureChangedEventHandler(This,element,handler) ) 

#define IUIAutomation2_AddFocusChangedEventHandler(This,cacheRequest,handler)	\
    ( (This)->lpVtbl -> AddFocusChangedEventHandler(This,cacheRequest,handler) ) 

#define IUIAutomation2_RemoveFocusChangedEventHandler(This,handler)	\
    ( (This)->lpVtbl -> RemoveFocusChangedEventHandler(This,handler) ) 

#define IUIAutomation2_RemoveAllEventHandlers(This)	\
    ( (This)->lpVtbl -> RemoveAllEventHandlers(This) ) 

#define IUIAutomation2_IntNativeArrayToSafeArray(This,array,arrayCount,safeArray)	\
    ( (This)->lpVtbl -> IntNativeArrayToSafeArray(This,array,arrayCount,safeArray) ) 

#define IUIAutomation2_IntSafeArrayToNativeArray(This,intArray,array,arrayCount)	\
    ( (This)->lpVtbl -> IntSafeArrayToNativeArray(This,intArray,array,arrayCount) ) 

#define IUIAutomation2_RectToVariant(This,rc,var)	\
    ( (This)->lpVtbl -> RectToVariant(This,rc,var) ) 

#define IUIAutomation2_VariantToRect(This,var,rc)	\
    ( (This)->lpVtbl -> VariantToRect(This,var,rc) ) 

#define IUIAutomation2_SafeArrayToRectNativeArray(This,rects,rectArray,rectArrayCount)	\
    ( (This)->lpVtbl -> SafeArrayToRectNativeArray(This,rects,rectArray,rectArrayCount) ) 

#define IUIAutomation2_CreateProxyFactoryEntry(This,factory,factoryEntry)	\
    ( (This)->lpVtbl -> CreateProxyFactoryEntry(This,factory,factoryEntry) ) 

#define IUIAutomation2_get_ProxyFactoryMapping(This,factoryMapping)	\
    ( (This)->lpVtbl -> get_ProxyFactoryMapping(This,factoryMapping) ) 

#define IUIAutomation2_GetPropertyProgrammaticName(This,property,name)	\
    ( (This)->lpVtbl -> GetPropertyProgrammaticName(This,property,name) ) 

#define IUIAutomation2_GetPatternProgrammaticName(This,pattern,name)	\
    ( (This)->lpVtbl -> GetPatternProgrammaticName(This,pattern,name) ) 

#define IUIAutomation2_PollForPotentialSupportedPatterns(This,pElement,patternIds,patternNames)	\
    ( (This)->lpVtbl -> PollForPotentialSupportedPatterns(This,pElement,patternIds,patternNames) ) 

#define IUIAutomation2_PollForPotentialSupportedProperties(This,pElement,propertyIds,propertyNames)	\
    ( (This)->lpVtbl -> PollForPotentialSupportedProperties(This,pElement,propertyIds,propertyNames) ) 

#define IUIAutomation2_CheckNotSupported(This,value,isNotSupported)	\
    ( (This)->lpVtbl -> CheckNotSupported(This,value,isNotSupported) ) 

#define IUIAutomation2_get_ReservedNotSupportedValue(This,notSupportedValue)	\
    ( (This)->lpVtbl -> get_ReservedNotSupportedValue(This,notSupportedValue) ) 

#define IUIAutomation2_get_ReservedMixedAttributeValue(This,mixedAttributeValue)	\
    ( (This)->lpVtbl -> get_ReservedMixedAttributeValue(This,mixedAttributeValue) ) 

#define IUIAutomation2_ElementFromIAccessible(This,accessible,childId,element)	\
    ( (This)->lpVtbl -> ElementFromIAccessible(This,accessible,childId,element) ) 

#define IUIAutomation2_ElementFromIAccessibleBuildCache(This,accessible,childId,cacheRequest,element)	\
    ( (This)->lpVtbl -> ElementFromIAccessibleBuildCache(This,accessible,childId,cacheRequest,element) ) 


#define IUIAutomation2_get_AutoSetFocus(This,autoSetFocus)	\
    ( (This)->lpVtbl -> get_AutoSetFocus(This,autoSetFocus) ) 

#define IUIAutomation2_put_AutoSetFocus(This,autoSetFocus)	\
    ( (This)->lpVtbl -> put_AutoSetFocus(This,autoSetFocus) ) 

#define IUIAutomation2_get_ConnectionTimeout(This,timeout)	\
    ( (This)->lpVtbl -> get_ConnectionTimeout(This,timeout) ) 

#define IUIAutomation2_put_ConnectionTimeout(This,timeout)	\
    ( (This)->lpVtbl -> put_ConnectionTimeout(This,timeout) ) 

#define IUIAutomation2_get_TransactionTimeout(This,timeout)	\
    ( (This)->lpVtbl -> get_TransactionTimeout(This,timeout) ) 

#define IUIAutomation2_put_TransactionTimeout(This,timeout)	\
    ( (This)->lpVtbl -> put_TransactionTimeout(This,timeout) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomation2_INTERFACE_DEFINED__ */


#ifndef __IUIAutomation3_INTERFACE_DEFINED__
#define __IUIAutomation3_INTERFACE_DEFINED__

/* interface IUIAutomation3 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomation3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("73D768DA-9B51-4B89-936E-C209290973E7")
    IUIAutomation3 : public IUIAutomation2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddTextEditTextChangedEventHandler( 
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ enum TextEditChangeType textEditChangeType,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationTextEditTextChangedEventHandler *handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveTextEditTextChangedEventHandler( 
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationTextEditTextChangedEventHandler *handler) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomation3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomation3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomation3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomation3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *CompareElements )( 
            IUIAutomation3 * This,
            /* [in] */ IUIAutomationElement *el1,
            /* [in] */ IUIAutomationElement *el2,
            /* [retval][out] */ BOOL *areSame);
        
        HRESULT ( STDMETHODCALLTYPE *CompareRuntimeIds )( 
            IUIAutomation3 * This,
            /* [in] */ SAFEARRAY * runtimeId1,
            /* [in] */ SAFEARRAY * runtimeId2,
            /* [retval][out] */ BOOL *areSame);
        
        HRESULT ( STDMETHODCALLTYPE *GetRootElement )( 
            IUIAutomation3 * This,
            /* [retval][out] */ IUIAutomationElement **root);
        
        HRESULT ( STDMETHODCALLTYPE *ElementFromHandle )( 
            IUIAutomation3 * This,
            /* [in] */ UIA_HWND hwnd,
            /* [retval][out] */ IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *ElementFromPoint )( 
            IUIAutomation3 * This,
            /* [in] */ POINT pt,
            /* [retval][out] */ IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *GetFocusedElement )( 
            IUIAutomation3 * This,
            /* [retval][out] */ IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *GetRootElementBuildCache )( 
            IUIAutomation3 * This,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **root);
        
        HRESULT ( STDMETHODCALLTYPE *ElementFromHandleBuildCache )( 
            IUIAutomation3 * This,
            /* [in] */ UIA_HWND hwnd,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *ElementFromPointBuildCache )( 
            IUIAutomation3 * This,
            /* [in] */ POINT pt,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *GetFocusedElementBuildCache )( 
            IUIAutomation3 * This,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTreeWalker )( 
            IUIAutomation3 * This,
            /* [in] */ IUIAutomationCondition *pCondition,
            /* [retval][out] */ IUIAutomationTreeWalker **walker);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ControlViewWalker )( 
            IUIAutomation3 * This,
            /* [retval][out] */ IUIAutomationTreeWalker **walker);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContentViewWalker )( 
            IUIAutomation3 * This,
            /* [retval][out] */ IUIAutomationTreeWalker **walker);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawViewWalker )( 
            IUIAutomation3 * This,
            /* [retval][out] */ IUIAutomationTreeWalker **walker);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawViewCondition )( 
            IUIAutomation3 * This,
            /* [retval][out] */ IUIAutomationCondition **condition);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ControlViewCondition )( 
            IUIAutomation3 * This,
            /* [retval][out] */ IUIAutomationCondition **condition);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContentViewCondition )( 
            IUIAutomation3 * This,
            /* [retval][out] */ IUIAutomationCondition **condition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateCacheRequest )( 
            IUIAutomation3 * This,
            /* [retval][out] */ IUIAutomationCacheRequest **cacheRequest);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTrueCondition )( 
            IUIAutomation3 * This,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateFalseCondition )( 
            IUIAutomation3 * This,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreatePropertyCondition )( 
            IUIAutomation3 * This,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ VARIANT value,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreatePropertyConditionEx )( 
            IUIAutomation3 * This,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ VARIANT value,
            /* [in] */ enum PropertyConditionFlags flags,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateAndCondition )( 
            IUIAutomation3 * This,
            /* [in] */ IUIAutomationCondition *condition1,
            /* [in] */ IUIAutomationCondition *condition2,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateAndConditionFromArray )( 
            IUIAutomation3 * This,
            /* [in] */ SAFEARRAY * conditions,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateAndConditionFromNativeArray )( 
            IUIAutomation3 * This,
            /* [size_is][in] */ IUIAutomationCondition **conditions,
            /* [in] */ int conditionCount,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateOrCondition )( 
            IUIAutomation3 * This,
            /* [in] */ IUIAutomationCondition *condition1,
            /* [in] */ IUIAutomationCondition *condition2,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateOrConditionFromArray )( 
            IUIAutomation3 * This,
            /* [in] */ SAFEARRAY * conditions,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateOrConditionFromNativeArray )( 
            IUIAutomation3 * This,
            /* [size_is][in] */ IUIAutomationCondition **conditions,
            /* [in] */ int conditionCount,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateNotCondition )( 
            IUIAutomation3 * This,
            /* [in] */ IUIAutomationCondition *condition,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *AddAutomationEventHandler )( 
            IUIAutomation3 * This,
            /* [in] */ EVENTID eventId,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveAutomationEventHandler )( 
            IUIAutomation3 * This,
            /* [in] */ EVENTID eventId,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *AddPropertyChangedEventHandlerNativeArray )( 
            IUIAutomation3 * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationPropertyChangedEventHandler *handler,
            /* [size_is][in] */ PROPERTYID *propertyArray,
            /* [in] */ int propertyCount);
        
        HRESULT ( STDMETHODCALLTYPE *AddPropertyChangedEventHandler )( 
            IUIAutomation3 * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationPropertyChangedEventHandler *handler,
            /* [in] */ SAFEARRAY * propertyArray);
        
        HRESULT ( STDMETHODCALLTYPE *RemovePropertyChangedEventHandler )( 
            IUIAutomation3 * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationPropertyChangedEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *AddStructureChangedEventHandler )( 
            IUIAutomation3 * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationStructureChangedEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveStructureChangedEventHandler )( 
            IUIAutomation3 * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationStructureChangedEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *AddFocusChangedEventHandler )( 
            IUIAutomation3 * This,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationFocusChangedEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveFocusChangedEventHandler )( 
            IUIAutomation3 * This,
            /* [in] */ IUIAutomationFocusChangedEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveAllEventHandlers )( 
            IUIAutomation3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *IntNativeArrayToSafeArray )( 
            IUIAutomation3 * This,
            /* [size_is][in] */ int *array,
            /* [in] */ int arrayCount,
            /* [retval][out] */ SAFEARRAY * *safeArray);
        
        HRESULT ( STDMETHODCALLTYPE *IntSafeArrayToNativeArray )( 
            IUIAutomation3 * This,
            /* [in] */ SAFEARRAY * intArray,
            /* [size_is][size_is][out] */ int **array,
            /* [retval][out] */ int *arrayCount);
        
        HRESULT ( STDMETHODCALLTYPE *RectToVariant )( 
            IUIAutomation3 * This,
            /* [in] */ RECT rc,
            /* [retval][out] */ VARIANT *var);
        
        HRESULT ( STDMETHODCALLTYPE *VariantToRect )( 
            IUIAutomation3 * This,
            /* [in] */ VARIANT var,
            /* [retval][out] */ RECT *rc);
        
        HRESULT ( STDMETHODCALLTYPE *SafeArrayToRectNativeArray )( 
            IUIAutomation3 * This,
            /* [in] */ SAFEARRAY * rects,
            /* [size_is][size_is][out] */ RECT **rectArray,
            /* [retval][out] */ int *rectArrayCount);
        
        HRESULT ( STDMETHODCALLTYPE *CreateProxyFactoryEntry )( 
            IUIAutomation3 * This,
            /* [in] */ IUIAutomationProxyFactory *factory,
            /* [retval][out] */ IUIAutomationProxyFactoryEntry **factoryEntry);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProxyFactoryMapping )( 
            IUIAutomation3 * This,
            /* [retval][out] */ IUIAutomationProxyFactoryMapping **factoryMapping);
        
        HRESULT ( STDMETHODCALLTYPE *GetPropertyProgrammaticName )( 
            IUIAutomation3 * This,
            /* [in] */ PROPERTYID property,
            /* [retval][out] */ BSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *GetPatternProgrammaticName )( 
            IUIAutomation3 * This,
            /* [in] */ PATTERNID pattern,
            /* [retval][out] */ BSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *PollForPotentialSupportedPatterns )( 
            IUIAutomation3 * This,
            /* [in] */ IUIAutomationElement *pElement,
            /* [out] */ SAFEARRAY * *patternIds,
            /* [out] */ SAFEARRAY * *patternNames);
        
        HRESULT ( STDMETHODCALLTYPE *PollForPotentialSupportedProperties )( 
            IUIAutomation3 * This,
            /* [in] */ IUIAutomationElement *pElement,
            /* [out] */ SAFEARRAY * *propertyIds,
            /* [out] */ SAFEARRAY * *propertyNames);
        
        HRESULT ( STDMETHODCALLTYPE *CheckNotSupported )( 
            IUIAutomation3 * This,
            /* [in] */ VARIANT value,
            /* [retval][out] */ BOOL *isNotSupported);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReservedNotSupportedValue )( 
            IUIAutomation3 * This,
            /* [retval][out] */ IUnknown **notSupportedValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReservedMixedAttributeValue )( 
            IUIAutomation3 * This,
            /* [retval][out] */ IUnknown **mixedAttributeValue);
        
        HRESULT ( STDMETHODCALLTYPE *ElementFromIAccessible )( 
            IUIAutomation3 * This,
            /* [in] */ IAccessible *accessible,
            /* [in] */ int childId,
            /* [retval][out] */ IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *ElementFromIAccessibleBuildCache )( 
            IUIAutomation3 * This,
            /* [in] */ IAccessible *accessible,
            /* [in] */ int childId,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **element);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutoSetFocus )( 
            IUIAutomation3 * This,
            /* [retval][out] */ BOOL *autoSetFocus);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutoSetFocus )( 
            IUIAutomation3 * This,
            /* [in] */ BOOL autoSetFocus);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionTimeout )( 
            IUIAutomation3 * This,
            /* [retval][out] */ DWORD *timeout);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionTimeout )( 
            IUIAutomation3 * This,
            /* [in] */ DWORD timeout);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TransactionTimeout )( 
            IUIAutomation3 * This,
            /* [retval][out] */ DWORD *timeout);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_TransactionTimeout )( 
            IUIAutomation3 * This,
            /* [in] */ DWORD timeout);
        
        HRESULT ( STDMETHODCALLTYPE *AddTextEditTextChangedEventHandler )( 
            IUIAutomation3 * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ enum TextEditChangeType textEditChangeType,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationTextEditTextChangedEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveTextEditTextChangedEventHandler )( 
            IUIAutomation3 * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationTextEditTextChangedEventHandler *handler);
        
        END_INTERFACE
    } IUIAutomation3Vtbl;

    interface IUIAutomation3
    {
        CONST_VTBL struct IUIAutomation3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomation3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomation3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomation3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomation3_CompareElements(This,el1,el2,areSame)	\
    ( (This)->lpVtbl -> CompareElements(This,el1,el2,areSame) ) 

#define IUIAutomation3_CompareRuntimeIds(This,runtimeId1,runtimeId2,areSame)	\
    ( (This)->lpVtbl -> CompareRuntimeIds(This,runtimeId1,runtimeId2,areSame) ) 

#define IUIAutomation3_GetRootElement(This,root)	\
    ( (This)->lpVtbl -> GetRootElement(This,root) ) 

#define IUIAutomation3_ElementFromHandle(This,hwnd,element)	\
    ( (This)->lpVtbl -> ElementFromHandle(This,hwnd,element) ) 

#define IUIAutomation3_ElementFromPoint(This,pt,element)	\
    ( (This)->lpVtbl -> ElementFromPoint(This,pt,element) ) 

#define IUIAutomation3_GetFocusedElement(This,element)	\
    ( (This)->lpVtbl -> GetFocusedElement(This,element) ) 

#define IUIAutomation3_GetRootElementBuildCache(This,cacheRequest,root)	\
    ( (This)->lpVtbl -> GetRootElementBuildCache(This,cacheRequest,root) ) 

#define IUIAutomation3_ElementFromHandleBuildCache(This,hwnd,cacheRequest,element)	\
    ( (This)->lpVtbl -> ElementFromHandleBuildCache(This,hwnd,cacheRequest,element) ) 

#define IUIAutomation3_ElementFromPointBuildCache(This,pt,cacheRequest,element)	\
    ( (This)->lpVtbl -> ElementFromPointBuildCache(This,pt,cacheRequest,element) ) 

#define IUIAutomation3_GetFocusedElementBuildCache(This,cacheRequest,element)	\
    ( (This)->lpVtbl -> GetFocusedElementBuildCache(This,cacheRequest,element) ) 

#define IUIAutomation3_CreateTreeWalker(This,pCondition,walker)	\
    ( (This)->lpVtbl -> CreateTreeWalker(This,pCondition,walker) ) 

#define IUIAutomation3_get_ControlViewWalker(This,walker)	\
    ( (This)->lpVtbl -> get_ControlViewWalker(This,walker) ) 

#define IUIAutomation3_get_ContentViewWalker(This,walker)	\
    ( (This)->lpVtbl -> get_ContentViewWalker(This,walker) ) 

#define IUIAutomation3_get_RawViewWalker(This,walker)	\
    ( (This)->lpVtbl -> get_RawViewWalker(This,walker) ) 

#define IUIAutomation3_get_RawViewCondition(This,condition)	\
    ( (This)->lpVtbl -> get_RawViewCondition(This,condition) ) 

#define IUIAutomation3_get_ControlViewCondition(This,condition)	\
    ( (This)->lpVtbl -> get_ControlViewCondition(This,condition) ) 

#define IUIAutomation3_get_ContentViewCondition(This,condition)	\
    ( (This)->lpVtbl -> get_ContentViewCondition(This,condition) ) 

#define IUIAutomation3_CreateCacheRequest(This,cacheRequest)	\
    ( (This)->lpVtbl -> CreateCacheRequest(This,cacheRequest) ) 

#define IUIAutomation3_CreateTrueCondition(This,newCondition)	\
    ( (This)->lpVtbl -> CreateTrueCondition(This,newCondition) ) 

#define IUIAutomation3_CreateFalseCondition(This,newCondition)	\
    ( (This)->lpVtbl -> CreateFalseCondition(This,newCondition) ) 

#define IUIAutomation3_CreatePropertyCondition(This,propertyId,value,newCondition)	\
    ( (This)->lpVtbl -> CreatePropertyCondition(This,propertyId,value,newCondition) ) 

#define IUIAutomation3_CreatePropertyConditionEx(This,propertyId,value,flags,newCondition)	\
    ( (This)->lpVtbl -> CreatePropertyConditionEx(This,propertyId,value,flags,newCondition) ) 

#define IUIAutomation3_CreateAndCondition(This,condition1,condition2,newCondition)	\
    ( (This)->lpVtbl -> CreateAndCondition(This,condition1,condition2,newCondition) ) 

#define IUIAutomation3_CreateAndConditionFromArray(This,conditions,newCondition)	\
    ( (This)->lpVtbl -> CreateAndConditionFromArray(This,conditions,newCondition) ) 

#define IUIAutomation3_CreateAndConditionFromNativeArray(This,conditions,conditionCount,newCondition)	\
    ( (This)->lpVtbl -> CreateAndConditionFromNativeArray(This,conditions,conditionCount,newCondition) ) 

#define IUIAutomation3_CreateOrCondition(This,condition1,condition2,newCondition)	\
    ( (This)->lpVtbl -> CreateOrCondition(This,condition1,condition2,newCondition) ) 

#define IUIAutomation3_CreateOrConditionFromArray(This,conditions,newCondition)	\
    ( (This)->lpVtbl -> CreateOrConditionFromArray(This,conditions,newCondition) ) 

#define IUIAutomation3_CreateOrConditionFromNativeArray(This,conditions,conditionCount,newCondition)	\
    ( (This)->lpVtbl -> CreateOrConditionFromNativeArray(This,conditions,conditionCount,newCondition) ) 

#define IUIAutomation3_CreateNotCondition(This,condition,newCondition)	\
    ( (This)->lpVtbl -> CreateNotCondition(This,condition,newCondition) ) 

#define IUIAutomation3_AddAutomationEventHandler(This,eventId,element,scope,cacheRequest,handler)	\
    ( (This)->lpVtbl -> AddAutomationEventHandler(This,eventId,element,scope,cacheRequest,handler) ) 

#define IUIAutomation3_RemoveAutomationEventHandler(This,eventId,element,handler)	\
    ( (This)->lpVtbl -> RemoveAutomationEventHandler(This,eventId,element,handler) ) 

#define IUIAutomation3_AddPropertyChangedEventHandlerNativeArray(This,element,scope,cacheRequest,handler,propertyArray,propertyCount)	\
    ( (This)->lpVtbl -> AddPropertyChangedEventHandlerNativeArray(This,element,scope,cacheRequest,handler,propertyArray,propertyCount) ) 

#define IUIAutomation3_AddPropertyChangedEventHandler(This,element,scope,cacheRequest,handler,propertyArray)	\
    ( (This)->lpVtbl -> AddPropertyChangedEventHandler(This,element,scope,cacheRequest,handler,propertyArray) ) 

#define IUIAutomation3_RemovePropertyChangedEventHandler(This,element,handler)	\
    ( (This)->lpVtbl -> RemovePropertyChangedEventHandler(This,element,handler) ) 

#define IUIAutomation3_AddStructureChangedEventHandler(This,element,scope,cacheRequest,handler)	\
    ( (This)->lpVtbl -> AddStructureChangedEventHandler(This,element,scope,cacheRequest,handler) ) 

#define IUIAutomation3_RemoveStructureChangedEventHandler(This,element,handler)	\
    ( (This)->lpVtbl -> RemoveStructureChangedEventHandler(This,element,handler) ) 

#define IUIAutomation3_AddFocusChangedEventHandler(This,cacheRequest,handler)	\
    ( (This)->lpVtbl -> AddFocusChangedEventHandler(This,cacheRequest,handler) ) 

#define IUIAutomation3_RemoveFocusChangedEventHandler(This,handler)	\
    ( (This)->lpVtbl -> RemoveFocusChangedEventHandler(This,handler) ) 

#define IUIAutomation3_RemoveAllEventHandlers(This)	\
    ( (This)->lpVtbl -> RemoveAllEventHandlers(This) ) 

#define IUIAutomation3_IntNativeArrayToSafeArray(This,array,arrayCount,safeArray)	\
    ( (This)->lpVtbl -> IntNativeArrayToSafeArray(This,array,arrayCount,safeArray) ) 

#define IUIAutomation3_IntSafeArrayToNativeArray(This,intArray,array,arrayCount)	\
    ( (This)->lpVtbl -> IntSafeArrayToNativeArray(This,intArray,array,arrayCount) ) 

#define IUIAutomation3_RectToVariant(This,rc,var)	\
    ( (This)->lpVtbl -> RectToVariant(This,rc,var) ) 

#define IUIAutomation3_VariantToRect(This,var,rc)	\
    ( (This)->lpVtbl -> VariantToRect(This,var,rc) ) 

#define IUIAutomation3_SafeArrayToRectNativeArray(This,rects,rectArray,rectArrayCount)	\
    ( (This)->lpVtbl -> SafeArrayToRectNativeArray(This,rects,rectArray,rectArrayCount) ) 

#define IUIAutomation3_CreateProxyFactoryEntry(This,factory,factoryEntry)	\
    ( (This)->lpVtbl -> CreateProxyFactoryEntry(This,factory,factoryEntry) ) 

#define IUIAutomation3_get_ProxyFactoryMapping(This,factoryMapping)	\
    ( (This)->lpVtbl -> get_ProxyFactoryMapping(This,factoryMapping) ) 

#define IUIAutomation3_GetPropertyProgrammaticName(This,property,name)	\
    ( (This)->lpVtbl -> GetPropertyProgrammaticName(This,property,name) ) 

#define IUIAutomation3_GetPatternProgrammaticName(This,pattern,name)	\
    ( (This)->lpVtbl -> GetPatternProgrammaticName(This,pattern,name) ) 

#define IUIAutomation3_PollForPotentialSupportedPatterns(This,pElement,patternIds,patternNames)	\
    ( (This)->lpVtbl -> PollForPotentialSupportedPatterns(This,pElement,patternIds,patternNames) ) 

#define IUIAutomation3_PollForPotentialSupportedProperties(This,pElement,propertyIds,propertyNames)	\
    ( (This)->lpVtbl -> PollForPotentialSupportedProperties(This,pElement,propertyIds,propertyNames) ) 

#define IUIAutomation3_CheckNotSupported(This,value,isNotSupported)	\
    ( (This)->lpVtbl -> CheckNotSupported(This,value,isNotSupported) ) 

#define IUIAutomation3_get_ReservedNotSupportedValue(This,notSupportedValue)	\
    ( (This)->lpVtbl -> get_ReservedNotSupportedValue(This,notSupportedValue) ) 

#define IUIAutomation3_get_ReservedMixedAttributeValue(This,mixedAttributeValue)	\
    ( (This)->lpVtbl -> get_ReservedMixedAttributeValue(This,mixedAttributeValue) ) 

#define IUIAutomation3_ElementFromIAccessible(This,accessible,childId,element)	\
    ( (This)->lpVtbl -> ElementFromIAccessible(This,accessible,childId,element) ) 

#define IUIAutomation3_ElementFromIAccessibleBuildCache(This,accessible,childId,cacheRequest,element)	\
    ( (This)->lpVtbl -> ElementFromIAccessibleBuildCache(This,accessible,childId,cacheRequest,element) ) 


#define IUIAutomation3_get_AutoSetFocus(This,autoSetFocus)	\
    ( (This)->lpVtbl -> get_AutoSetFocus(This,autoSetFocus) ) 

#define IUIAutomation3_put_AutoSetFocus(This,autoSetFocus)	\
    ( (This)->lpVtbl -> put_AutoSetFocus(This,autoSetFocus) ) 

#define IUIAutomation3_get_ConnectionTimeout(This,timeout)	\
    ( (This)->lpVtbl -> get_ConnectionTimeout(This,timeout) ) 

#define IUIAutomation3_put_ConnectionTimeout(This,timeout)	\
    ( (This)->lpVtbl -> put_ConnectionTimeout(This,timeout) ) 

#define IUIAutomation3_get_TransactionTimeout(This,timeout)	\
    ( (This)->lpVtbl -> get_TransactionTimeout(This,timeout) ) 

#define IUIAutomation3_put_TransactionTimeout(This,timeout)	\
    ( (This)->lpVtbl -> put_TransactionTimeout(This,timeout) ) 


#define IUIAutomation3_AddTextEditTextChangedEventHandler(This,element,scope,textEditChangeType,cacheRequest,handler)	\
    ( (This)->lpVtbl -> AddTextEditTextChangedEventHandler(This,element,scope,textEditChangeType,cacheRequest,handler) ) 

#define IUIAutomation3_RemoveTextEditTextChangedEventHandler(This,element,handler)	\
    ( (This)->lpVtbl -> RemoveTextEditTextChangedEventHandler(This,element,handler) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomation3_INTERFACE_DEFINED__ */


#ifndef __IUIAutomation4_INTERFACE_DEFINED__
#define __IUIAutomation4_INTERFACE_DEFINED__

/* interface IUIAutomation4 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomation4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1189C02A-05F8-4319-8E21-E817E3DB2860")
    IUIAutomation4 : public IUIAutomation3
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddChangesEventHandler( 
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [size_is][in] */ int *changeTypes,
            /* [in] */ int changesCount,
            /* [in] */ IUIAutomationCacheRequest *pCacheRequest,
            /* [in] */ IUIAutomationChangesEventHandler *handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveChangesEventHandler( 
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationChangesEventHandler *handler) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomation4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomation4 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomation4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomation4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *CompareElements )( 
            IUIAutomation4 * This,
            /* [in] */ IUIAutomationElement *el1,
            /* [in] */ IUIAutomationElement *el2,
            /* [retval][out] */ BOOL *areSame);
        
        HRESULT ( STDMETHODCALLTYPE *CompareRuntimeIds )( 
            IUIAutomation4 * This,
            /* [in] */ SAFEARRAY * runtimeId1,
            /* [in] */ SAFEARRAY * runtimeId2,
            /* [retval][out] */ BOOL *areSame);
        
        HRESULT ( STDMETHODCALLTYPE *GetRootElement )( 
            IUIAutomation4 * This,
            /* [retval][out] */ IUIAutomationElement **root);
        
        HRESULT ( STDMETHODCALLTYPE *ElementFromHandle )( 
            IUIAutomation4 * This,
            /* [in] */ UIA_HWND hwnd,
            /* [retval][out] */ IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *ElementFromPoint )( 
            IUIAutomation4 * This,
            /* [in] */ POINT pt,
            /* [retval][out] */ IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *GetFocusedElement )( 
            IUIAutomation4 * This,
            /* [retval][out] */ IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *GetRootElementBuildCache )( 
            IUIAutomation4 * This,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **root);
        
        HRESULT ( STDMETHODCALLTYPE *ElementFromHandleBuildCache )( 
            IUIAutomation4 * This,
            /* [in] */ UIA_HWND hwnd,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *ElementFromPointBuildCache )( 
            IUIAutomation4 * This,
            /* [in] */ POINT pt,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *GetFocusedElementBuildCache )( 
            IUIAutomation4 * This,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTreeWalker )( 
            IUIAutomation4 * This,
            /* [in] */ IUIAutomationCondition *pCondition,
            /* [retval][out] */ IUIAutomationTreeWalker **walker);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ControlViewWalker )( 
            IUIAutomation4 * This,
            /* [retval][out] */ IUIAutomationTreeWalker **walker);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContentViewWalker )( 
            IUIAutomation4 * This,
            /* [retval][out] */ IUIAutomationTreeWalker **walker);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawViewWalker )( 
            IUIAutomation4 * This,
            /* [retval][out] */ IUIAutomationTreeWalker **walker);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawViewCondition )( 
            IUIAutomation4 * This,
            /* [retval][out] */ IUIAutomationCondition **condition);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ControlViewCondition )( 
            IUIAutomation4 * This,
            /* [retval][out] */ IUIAutomationCondition **condition);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContentViewCondition )( 
            IUIAutomation4 * This,
            /* [retval][out] */ IUIAutomationCondition **condition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateCacheRequest )( 
            IUIAutomation4 * This,
            /* [retval][out] */ IUIAutomationCacheRequest **cacheRequest);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTrueCondition )( 
            IUIAutomation4 * This,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateFalseCondition )( 
            IUIAutomation4 * This,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreatePropertyCondition )( 
            IUIAutomation4 * This,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ VARIANT value,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreatePropertyConditionEx )( 
            IUIAutomation4 * This,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ VARIANT value,
            /* [in] */ enum PropertyConditionFlags flags,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateAndCondition )( 
            IUIAutomation4 * This,
            /* [in] */ IUIAutomationCondition *condition1,
            /* [in] */ IUIAutomationCondition *condition2,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateAndConditionFromArray )( 
            IUIAutomation4 * This,
            /* [in] */ SAFEARRAY * conditions,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateAndConditionFromNativeArray )( 
            IUIAutomation4 * This,
            /* [size_is][in] */ IUIAutomationCondition **conditions,
            /* [in] */ int conditionCount,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateOrCondition )( 
            IUIAutomation4 * This,
            /* [in] */ IUIAutomationCondition *condition1,
            /* [in] */ IUIAutomationCondition *condition2,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateOrConditionFromArray )( 
            IUIAutomation4 * This,
            /* [in] */ SAFEARRAY * conditions,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateOrConditionFromNativeArray )( 
            IUIAutomation4 * This,
            /* [size_is][in] */ IUIAutomationCondition **conditions,
            /* [in] */ int conditionCount,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateNotCondition )( 
            IUIAutomation4 * This,
            /* [in] */ IUIAutomationCondition *condition,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *AddAutomationEventHandler )( 
            IUIAutomation4 * This,
            /* [in] */ EVENTID eventId,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveAutomationEventHandler )( 
            IUIAutomation4 * This,
            /* [in] */ EVENTID eventId,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *AddPropertyChangedEventHandlerNativeArray )( 
            IUIAutomation4 * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationPropertyChangedEventHandler *handler,
            /* [size_is][in] */ PROPERTYID *propertyArray,
            /* [in] */ int propertyCount);
        
        HRESULT ( STDMETHODCALLTYPE *AddPropertyChangedEventHandler )( 
            IUIAutomation4 * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationPropertyChangedEventHandler *handler,
            /* [in] */ SAFEARRAY * propertyArray);
        
        HRESULT ( STDMETHODCALLTYPE *RemovePropertyChangedEventHandler )( 
            IUIAutomation4 * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationPropertyChangedEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *AddStructureChangedEventHandler )( 
            IUIAutomation4 * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationStructureChangedEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveStructureChangedEventHandler )( 
            IUIAutomation4 * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationStructureChangedEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *AddFocusChangedEventHandler )( 
            IUIAutomation4 * This,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationFocusChangedEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveFocusChangedEventHandler )( 
            IUIAutomation4 * This,
            /* [in] */ IUIAutomationFocusChangedEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveAllEventHandlers )( 
            IUIAutomation4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *IntNativeArrayToSafeArray )( 
            IUIAutomation4 * This,
            /* [size_is][in] */ int *array,
            /* [in] */ int arrayCount,
            /* [retval][out] */ SAFEARRAY * *safeArray);
        
        HRESULT ( STDMETHODCALLTYPE *IntSafeArrayToNativeArray )( 
            IUIAutomation4 * This,
            /* [in] */ SAFEARRAY * intArray,
            /* [size_is][size_is][out] */ int **array,
            /* [retval][out] */ int *arrayCount);
        
        HRESULT ( STDMETHODCALLTYPE *RectToVariant )( 
            IUIAutomation4 * This,
            /* [in] */ RECT rc,
            /* [retval][out] */ VARIANT *var);
        
        HRESULT ( STDMETHODCALLTYPE *VariantToRect )( 
            IUIAutomation4 * This,
            /* [in] */ VARIANT var,
            /* [retval][out] */ RECT *rc);
        
        HRESULT ( STDMETHODCALLTYPE *SafeArrayToRectNativeArray )( 
            IUIAutomation4 * This,
            /* [in] */ SAFEARRAY * rects,
            /* [size_is][size_is][out] */ RECT **rectArray,
            /* [retval][out] */ int *rectArrayCount);
        
        HRESULT ( STDMETHODCALLTYPE *CreateProxyFactoryEntry )( 
            IUIAutomation4 * This,
            /* [in] */ IUIAutomationProxyFactory *factory,
            /* [retval][out] */ IUIAutomationProxyFactoryEntry **factoryEntry);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProxyFactoryMapping )( 
            IUIAutomation4 * This,
            /* [retval][out] */ IUIAutomationProxyFactoryMapping **factoryMapping);
        
        HRESULT ( STDMETHODCALLTYPE *GetPropertyProgrammaticName )( 
            IUIAutomation4 * This,
            /* [in] */ PROPERTYID property,
            /* [retval][out] */ BSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *GetPatternProgrammaticName )( 
            IUIAutomation4 * This,
            /* [in] */ PATTERNID pattern,
            /* [retval][out] */ BSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *PollForPotentialSupportedPatterns )( 
            IUIAutomation4 * This,
            /* [in] */ IUIAutomationElement *pElement,
            /* [out] */ SAFEARRAY * *patternIds,
            /* [out] */ SAFEARRAY * *patternNames);
        
        HRESULT ( STDMETHODCALLTYPE *PollForPotentialSupportedProperties )( 
            IUIAutomation4 * This,
            /* [in] */ IUIAutomationElement *pElement,
            /* [out] */ SAFEARRAY * *propertyIds,
            /* [out] */ SAFEARRAY * *propertyNames);
        
        HRESULT ( STDMETHODCALLTYPE *CheckNotSupported )( 
            IUIAutomation4 * This,
            /* [in] */ VARIANT value,
            /* [retval][out] */ BOOL *isNotSupported);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReservedNotSupportedValue )( 
            IUIAutomation4 * This,
            /* [retval][out] */ IUnknown **notSupportedValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReservedMixedAttributeValue )( 
            IUIAutomation4 * This,
            /* [retval][out] */ IUnknown **mixedAttributeValue);
        
        HRESULT ( STDMETHODCALLTYPE *ElementFromIAccessible )( 
            IUIAutomation4 * This,
            /* [in] */ IAccessible *accessible,
            /* [in] */ int childId,
            /* [retval][out] */ IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *ElementFromIAccessibleBuildCache )( 
            IUIAutomation4 * This,
            /* [in] */ IAccessible *accessible,
            /* [in] */ int childId,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **element);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutoSetFocus )( 
            IUIAutomation4 * This,
            /* [retval][out] */ BOOL *autoSetFocus);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutoSetFocus )( 
            IUIAutomation4 * This,
            /* [in] */ BOOL autoSetFocus);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionTimeout )( 
            IUIAutomation4 * This,
            /* [retval][out] */ DWORD *timeout);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionTimeout )( 
            IUIAutomation4 * This,
            /* [in] */ DWORD timeout);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TransactionTimeout )( 
            IUIAutomation4 * This,
            /* [retval][out] */ DWORD *timeout);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_TransactionTimeout )( 
            IUIAutomation4 * This,
            /* [in] */ DWORD timeout);
        
        HRESULT ( STDMETHODCALLTYPE *AddTextEditTextChangedEventHandler )( 
            IUIAutomation4 * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ enum TextEditChangeType textEditChangeType,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationTextEditTextChangedEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveTextEditTextChangedEventHandler )( 
            IUIAutomation4 * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationTextEditTextChangedEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *AddChangesEventHandler )( 
            IUIAutomation4 * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [size_is][in] */ int *changeTypes,
            /* [in] */ int changesCount,
            /* [in] */ IUIAutomationCacheRequest *pCacheRequest,
            /* [in] */ IUIAutomationChangesEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveChangesEventHandler )( 
            IUIAutomation4 * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationChangesEventHandler *handler);
        
        END_INTERFACE
    } IUIAutomation4Vtbl;

    interface IUIAutomation4
    {
        CONST_VTBL struct IUIAutomation4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomation4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomation4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomation4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomation4_CompareElements(This,el1,el2,areSame)	\
    ( (This)->lpVtbl -> CompareElements(This,el1,el2,areSame) ) 

#define IUIAutomation4_CompareRuntimeIds(This,runtimeId1,runtimeId2,areSame)	\
    ( (This)->lpVtbl -> CompareRuntimeIds(This,runtimeId1,runtimeId2,areSame) ) 

#define IUIAutomation4_GetRootElement(This,root)	\
    ( (This)->lpVtbl -> GetRootElement(This,root) ) 

#define IUIAutomation4_ElementFromHandle(This,hwnd,element)	\
    ( (This)->lpVtbl -> ElementFromHandle(This,hwnd,element) ) 

#define IUIAutomation4_ElementFromPoint(This,pt,element)	\
    ( (This)->lpVtbl -> ElementFromPoint(This,pt,element) ) 

#define IUIAutomation4_GetFocusedElement(This,element)	\
    ( (This)->lpVtbl -> GetFocusedElement(This,element) ) 

#define IUIAutomation4_GetRootElementBuildCache(This,cacheRequest,root)	\
    ( (This)->lpVtbl -> GetRootElementBuildCache(This,cacheRequest,root) ) 

#define IUIAutomation4_ElementFromHandleBuildCache(This,hwnd,cacheRequest,element)	\
    ( (This)->lpVtbl -> ElementFromHandleBuildCache(This,hwnd,cacheRequest,element) ) 

#define IUIAutomation4_ElementFromPointBuildCache(This,pt,cacheRequest,element)	\
    ( (This)->lpVtbl -> ElementFromPointBuildCache(This,pt,cacheRequest,element) ) 

#define IUIAutomation4_GetFocusedElementBuildCache(This,cacheRequest,element)	\
    ( (This)->lpVtbl -> GetFocusedElementBuildCache(This,cacheRequest,element) ) 

#define IUIAutomation4_CreateTreeWalker(This,pCondition,walker)	\
    ( (This)->lpVtbl -> CreateTreeWalker(This,pCondition,walker) ) 

#define IUIAutomation4_get_ControlViewWalker(This,walker)	\
    ( (This)->lpVtbl -> get_ControlViewWalker(This,walker) ) 

#define IUIAutomation4_get_ContentViewWalker(This,walker)	\
    ( (This)->lpVtbl -> get_ContentViewWalker(This,walker) ) 

#define IUIAutomation4_get_RawViewWalker(This,walker)	\
    ( (This)->lpVtbl -> get_RawViewWalker(This,walker) ) 

#define IUIAutomation4_get_RawViewCondition(This,condition)	\
    ( (This)->lpVtbl -> get_RawViewCondition(This,condition) ) 

#define IUIAutomation4_get_ControlViewCondition(This,condition)	\
    ( (This)->lpVtbl -> get_ControlViewCondition(This,condition) ) 

#define IUIAutomation4_get_ContentViewCondition(This,condition)	\
    ( (This)->lpVtbl -> get_ContentViewCondition(This,condition) ) 

#define IUIAutomation4_CreateCacheRequest(This,cacheRequest)	\
    ( (This)->lpVtbl -> CreateCacheRequest(This,cacheRequest) ) 

#define IUIAutomation4_CreateTrueCondition(This,newCondition)	\
    ( (This)->lpVtbl -> CreateTrueCondition(This,newCondition) ) 

#define IUIAutomation4_CreateFalseCondition(This,newCondition)	\
    ( (This)->lpVtbl -> CreateFalseCondition(This,newCondition) ) 

#define IUIAutomation4_CreatePropertyCondition(This,propertyId,value,newCondition)	\
    ( (This)->lpVtbl -> CreatePropertyCondition(This,propertyId,value,newCondition) ) 

#define IUIAutomation4_CreatePropertyConditionEx(This,propertyId,value,flags,newCondition)	\
    ( (This)->lpVtbl -> CreatePropertyConditionEx(This,propertyId,value,flags,newCondition) ) 

#define IUIAutomation4_CreateAndCondition(This,condition1,condition2,newCondition)	\
    ( (This)->lpVtbl -> CreateAndCondition(This,condition1,condition2,newCondition) ) 

#define IUIAutomation4_CreateAndConditionFromArray(This,conditions,newCondition)	\
    ( (This)->lpVtbl -> CreateAndConditionFromArray(This,conditions,newCondition) ) 

#define IUIAutomation4_CreateAndConditionFromNativeArray(This,conditions,conditionCount,newCondition)	\
    ( (This)->lpVtbl -> CreateAndConditionFromNativeArray(This,conditions,conditionCount,newCondition) ) 

#define IUIAutomation4_CreateOrCondition(This,condition1,condition2,newCondition)	\
    ( (This)->lpVtbl -> CreateOrCondition(This,condition1,condition2,newCondition) ) 

#define IUIAutomation4_CreateOrConditionFromArray(This,conditions,newCondition)	\
    ( (This)->lpVtbl -> CreateOrConditionFromArray(This,conditions,newCondition) ) 

#define IUIAutomation4_CreateOrConditionFromNativeArray(This,conditions,conditionCount,newCondition)	\
    ( (This)->lpVtbl -> CreateOrConditionFromNativeArray(This,conditions,conditionCount,newCondition) ) 

#define IUIAutomation4_CreateNotCondition(This,condition,newCondition)	\
    ( (This)->lpVtbl -> CreateNotCondition(This,condition,newCondition) ) 

#define IUIAutomation4_AddAutomationEventHandler(This,eventId,element,scope,cacheRequest,handler)	\
    ( (This)->lpVtbl -> AddAutomationEventHandler(This,eventId,element,scope,cacheRequest,handler) ) 

#define IUIAutomation4_RemoveAutomationEventHandler(This,eventId,element,handler)	\
    ( (This)->lpVtbl -> RemoveAutomationEventHandler(This,eventId,element,handler) ) 

#define IUIAutomation4_AddPropertyChangedEventHandlerNativeArray(This,element,scope,cacheRequest,handler,propertyArray,propertyCount)	\
    ( (This)->lpVtbl -> AddPropertyChangedEventHandlerNativeArray(This,element,scope,cacheRequest,handler,propertyArray,propertyCount) ) 

#define IUIAutomation4_AddPropertyChangedEventHandler(This,element,scope,cacheRequest,handler,propertyArray)	\
    ( (This)->lpVtbl -> AddPropertyChangedEventHandler(This,element,scope,cacheRequest,handler,propertyArray) ) 

#define IUIAutomation4_RemovePropertyChangedEventHandler(This,element,handler)	\
    ( (This)->lpVtbl -> RemovePropertyChangedEventHandler(This,element,handler) ) 

#define IUIAutomation4_AddStructureChangedEventHandler(This,element,scope,cacheRequest,handler)	\
    ( (This)->lpVtbl -> AddStructureChangedEventHandler(This,element,scope,cacheRequest,handler) ) 

#define IUIAutomation4_RemoveStructureChangedEventHandler(This,element,handler)	\
    ( (This)->lpVtbl -> RemoveStructureChangedEventHandler(This,element,handler) ) 

#define IUIAutomation4_AddFocusChangedEventHandler(This,cacheRequest,handler)	\
    ( (This)->lpVtbl -> AddFocusChangedEventHandler(This,cacheRequest,handler) ) 

#define IUIAutomation4_RemoveFocusChangedEventHandler(This,handler)	\
    ( (This)->lpVtbl -> RemoveFocusChangedEventHandler(This,handler) ) 

#define IUIAutomation4_RemoveAllEventHandlers(This)	\
    ( (This)->lpVtbl -> RemoveAllEventHandlers(This) ) 

#define IUIAutomation4_IntNativeArrayToSafeArray(This,array,arrayCount,safeArray)	\
    ( (This)->lpVtbl -> IntNativeArrayToSafeArray(This,array,arrayCount,safeArray) ) 

#define IUIAutomation4_IntSafeArrayToNativeArray(This,intArray,array,arrayCount)	\
    ( (This)->lpVtbl -> IntSafeArrayToNativeArray(This,intArray,array,arrayCount) ) 

#define IUIAutomation4_RectToVariant(This,rc,var)	\
    ( (This)->lpVtbl -> RectToVariant(This,rc,var) ) 

#define IUIAutomation4_VariantToRect(This,var,rc)	\
    ( (This)->lpVtbl -> VariantToRect(This,var,rc) ) 

#define IUIAutomation4_SafeArrayToRectNativeArray(This,rects,rectArray,rectArrayCount)	\
    ( (This)->lpVtbl -> SafeArrayToRectNativeArray(This,rects,rectArray,rectArrayCount) ) 

#define IUIAutomation4_CreateProxyFactoryEntry(This,factory,factoryEntry)	\
    ( (This)->lpVtbl -> CreateProxyFactoryEntry(This,factory,factoryEntry) ) 

#define IUIAutomation4_get_ProxyFactoryMapping(This,factoryMapping)	\
    ( (This)->lpVtbl -> get_ProxyFactoryMapping(This,factoryMapping) ) 

#define IUIAutomation4_GetPropertyProgrammaticName(This,property,name)	\
    ( (This)->lpVtbl -> GetPropertyProgrammaticName(This,property,name) ) 

#define IUIAutomation4_GetPatternProgrammaticName(This,pattern,name)	\
    ( (This)->lpVtbl -> GetPatternProgrammaticName(This,pattern,name) ) 

#define IUIAutomation4_PollForPotentialSupportedPatterns(This,pElement,patternIds,patternNames)	\
    ( (This)->lpVtbl -> PollForPotentialSupportedPatterns(This,pElement,patternIds,patternNames) ) 

#define IUIAutomation4_PollForPotentialSupportedProperties(This,pElement,propertyIds,propertyNames)	\
    ( (This)->lpVtbl -> PollForPotentialSupportedProperties(This,pElement,propertyIds,propertyNames) ) 

#define IUIAutomation4_CheckNotSupported(This,value,isNotSupported)	\
    ( (This)->lpVtbl -> CheckNotSupported(This,value,isNotSupported) ) 

#define IUIAutomation4_get_ReservedNotSupportedValue(This,notSupportedValue)	\
    ( (This)->lpVtbl -> get_ReservedNotSupportedValue(This,notSupportedValue) ) 

#define IUIAutomation4_get_ReservedMixedAttributeValue(This,mixedAttributeValue)	\
    ( (This)->lpVtbl -> get_ReservedMixedAttributeValue(This,mixedAttributeValue) ) 

#define IUIAutomation4_ElementFromIAccessible(This,accessible,childId,element)	\
    ( (This)->lpVtbl -> ElementFromIAccessible(This,accessible,childId,element) ) 

#define IUIAutomation4_ElementFromIAccessibleBuildCache(This,accessible,childId,cacheRequest,element)	\
    ( (This)->lpVtbl -> ElementFromIAccessibleBuildCache(This,accessible,childId,cacheRequest,element) ) 


#define IUIAutomation4_get_AutoSetFocus(This,autoSetFocus)	\
    ( (This)->lpVtbl -> get_AutoSetFocus(This,autoSetFocus) ) 

#define IUIAutomation4_put_AutoSetFocus(This,autoSetFocus)	\
    ( (This)->lpVtbl -> put_AutoSetFocus(This,autoSetFocus) ) 

#define IUIAutomation4_get_ConnectionTimeout(This,timeout)	\
    ( (This)->lpVtbl -> get_ConnectionTimeout(This,timeout) ) 

#define IUIAutomation4_put_ConnectionTimeout(This,timeout)	\
    ( (This)->lpVtbl -> put_ConnectionTimeout(This,timeout) ) 

#define IUIAutomation4_get_TransactionTimeout(This,timeout)	\
    ( (This)->lpVtbl -> get_TransactionTimeout(This,timeout) ) 

#define IUIAutomation4_put_TransactionTimeout(This,timeout)	\
    ( (This)->lpVtbl -> put_TransactionTimeout(This,timeout) ) 


#define IUIAutomation4_AddTextEditTextChangedEventHandler(This,element,scope,textEditChangeType,cacheRequest,handler)	\
    ( (This)->lpVtbl -> AddTextEditTextChangedEventHandler(This,element,scope,textEditChangeType,cacheRequest,handler) ) 

#define IUIAutomation4_RemoveTextEditTextChangedEventHandler(This,element,handler)	\
    ( (This)->lpVtbl -> RemoveTextEditTextChangedEventHandler(This,element,handler) ) 


#define IUIAutomation4_AddChangesEventHandler(This,element,scope,changeTypes,changesCount,pCacheRequest,handler)	\
    ( (This)->lpVtbl -> AddChangesEventHandler(This,element,scope,changeTypes,changesCount,pCacheRequest,handler) ) 

#define IUIAutomation4_RemoveChangesEventHandler(This,element,handler)	\
    ( (This)->lpVtbl -> RemoveChangesEventHandler(This,element,handler) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomation4_INTERFACE_DEFINED__ */


#ifndef __IUIAutomation5_INTERFACE_DEFINED__
#define __IUIAutomation5_INTERFACE_DEFINED__

/* interface IUIAutomation5 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUIAutomation5;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("25F700C8-D816-4057-A9DC-3CBDEE77E256")
    IUIAutomation5 : public IUIAutomation4
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddNotificationEventHandler( 
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationNotificationEventHandler *handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveNotificationEventHandler( 
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationNotificationEventHandler *handler) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUIAutomation5Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUIAutomation5 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUIAutomation5 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUIAutomation5 * This);
        
        HRESULT ( STDMETHODCALLTYPE *CompareElements )( 
            IUIAutomation5 * This,
            /* [in] */ IUIAutomationElement *el1,
            /* [in] */ IUIAutomationElement *el2,
            /* [retval][out] */ BOOL *areSame);
        
        HRESULT ( STDMETHODCALLTYPE *CompareRuntimeIds )( 
            IUIAutomation5 * This,
            /* [in] */ SAFEARRAY * runtimeId1,
            /* [in] */ SAFEARRAY * runtimeId2,
            /* [retval][out] */ BOOL *areSame);
        
        HRESULT ( STDMETHODCALLTYPE *GetRootElement )( 
            IUIAutomation5 * This,
            /* [retval][out] */ IUIAutomationElement **root);
        
        HRESULT ( STDMETHODCALLTYPE *ElementFromHandle )( 
            IUIAutomation5 * This,
            /* [in] */ UIA_HWND hwnd,
            /* [retval][out] */ IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *ElementFromPoint )( 
            IUIAutomation5 * This,
            /* [in] */ POINT pt,
            /* [retval][out] */ IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *GetFocusedElement )( 
            IUIAutomation5 * This,
            /* [retval][out] */ IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *GetRootElementBuildCache )( 
            IUIAutomation5 * This,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **root);
        
        HRESULT ( STDMETHODCALLTYPE *ElementFromHandleBuildCache )( 
            IUIAutomation5 * This,
            /* [in] */ UIA_HWND hwnd,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *ElementFromPointBuildCache )( 
            IUIAutomation5 * This,
            /* [in] */ POINT pt,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *GetFocusedElementBuildCache )( 
            IUIAutomation5 * This,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTreeWalker )( 
            IUIAutomation5 * This,
            /* [in] */ IUIAutomationCondition *pCondition,
            /* [retval][out] */ IUIAutomationTreeWalker **walker);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ControlViewWalker )( 
            IUIAutomation5 * This,
            /* [retval][out] */ IUIAutomationTreeWalker **walker);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContentViewWalker )( 
            IUIAutomation5 * This,
            /* [retval][out] */ IUIAutomationTreeWalker **walker);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawViewWalker )( 
            IUIAutomation5 * This,
            /* [retval][out] */ IUIAutomationTreeWalker **walker);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawViewCondition )( 
            IUIAutomation5 * This,
            /* [retval][out] */ IUIAutomationCondition **condition);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ControlViewCondition )( 
            IUIAutomation5 * This,
            /* [retval][out] */ IUIAutomationCondition **condition);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContentViewCondition )( 
            IUIAutomation5 * This,
            /* [retval][out] */ IUIAutomationCondition **condition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateCacheRequest )( 
            IUIAutomation5 * This,
            /* [retval][out] */ IUIAutomationCacheRequest **cacheRequest);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTrueCondition )( 
            IUIAutomation5 * This,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateFalseCondition )( 
            IUIAutomation5 * This,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreatePropertyCondition )( 
            IUIAutomation5 * This,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ VARIANT value,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreatePropertyConditionEx )( 
            IUIAutomation5 * This,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ VARIANT value,
            /* [in] */ enum PropertyConditionFlags flags,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateAndCondition )( 
            IUIAutomation5 * This,
            /* [in] */ IUIAutomationCondition *condition1,
            /* [in] */ IUIAutomationCondition *condition2,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateAndConditionFromArray )( 
            IUIAutomation5 * This,
            /* [in] */ SAFEARRAY * conditions,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateAndConditionFromNativeArray )( 
            IUIAutomation5 * This,
            /* [size_is][in] */ IUIAutomationCondition **conditions,
            /* [in] */ int conditionCount,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateOrCondition )( 
            IUIAutomation5 * This,
            /* [in] */ IUIAutomationCondition *condition1,
            /* [in] */ IUIAutomationCondition *condition2,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateOrConditionFromArray )( 
            IUIAutomation5 * This,
            /* [in] */ SAFEARRAY * conditions,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateOrConditionFromNativeArray )( 
            IUIAutomation5 * This,
            /* [size_is][in] */ IUIAutomationCondition **conditions,
            /* [in] */ int conditionCount,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateNotCondition )( 
            IUIAutomation5 * This,
            /* [in] */ IUIAutomationCondition *condition,
            /* [retval][out] */ IUIAutomationCondition **newCondition);
        
        HRESULT ( STDMETHODCALLTYPE *AddAutomationEventHandler )( 
            IUIAutomation5 * This,
            /* [in] */ EVENTID eventId,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveAutomationEventHandler )( 
            IUIAutomation5 * This,
            /* [in] */ EVENTID eventId,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *AddPropertyChangedEventHandlerNativeArray )( 
            IUIAutomation5 * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationPropertyChangedEventHandler *handler,
            /* [size_is][in] */ PROPERTYID *propertyArray,
            /* [in] */ int propertyCount);
        
        HRESULT ( STDMETHODCALLTYPE *AddPropertyChangedEventHandler )( 
            IUIAutomation5 * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationPropertyChangedEventHandler *handler,
            /* [in] */ SAFEARRAY * propertyArray);
        
        HRESULT ( STDMETHODCALLTYPE *RemovePropertyChangedEventHandler )( 
            IUIAutomation5 * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationPropertyChangedEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *AddStructureChangedEventHandler )( 
            IUIAutomation5 * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationStructureChangedEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveStructureChangedEventHandler )( 
            IUIAutomation5 * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationStructureChangedEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *AddFocusChangedEventHandler )( 
            IUIAutomation5 * This,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationFocusChangedEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveFocusChangedEventHandler )( 
            IUIAutomation5 * This,
            /* [in] */ IUIAutomationFocusChangedEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveAllEventHandlers )( 
            IUIAutomation5 * This);
        
        HRESULT ( STDMETHODCALLTYPE *IntNativeArrayToSafeArray )( 
            IUIAutomation5 * This,
            /* [size_is][in] */ int *array,
            /* [in] */ int arrayCount,
            /* [retval][out] */ SAFEARRAY * *safeArray);
        
        HRESULT ( STDMETHODCALLTYPE *IntSafeArrayToNativeArray )( 
            IUIAutomation5 * This,
            /* [in] */ SAFEARRAY * intArray,
            /* [size_is][size_is][out] */ int **array,
            /* [retval][out] */ int *arrayCount);
        
        HRESULT ( STDMETHODCALLTYPE *RectToVariant )( 
            IUIAutomation5 * This,
            /* [in] */ RECT rc,
            /* [retval][out] */ VARIANT *var);
        
        HRESULT ( STDMETHODCALLTYPE *VariantToRect )( 
            IUIAutomation5 * This,
            /* [in] */ VARIANT var,
            /* [retval][out] */ RECT *rc);
        
        HRESULT ( STDMETHODCALLTYPE *SafeArrayToRectNativeArray )( 
            IUIAutomation5 * This,
            /* [in] */ SAFEARRAY * rects,
            /* [size_is][size_is][out] */ RECT **rectArray,
            /* [retval][out] */ int *rectArrayCount);
        
        HRESULT ( STDMETHODCALLTYPE *CreateProxyFactoryEntry )( 
            IUIAutomation5 * This,
            /* [in] */ IUIAutomationProxyFactory *factory,
            /* [retval][out] */ IUIAutomationProxyFactoryEntry **factoryEntry);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProxyFactoryMapping )( 
            IUIAutomation5 * This,
            /* [retval][out] */ IUIAutomationProxyFactoryMapping **factoryMapping);
        
        HRESULT ( STDMETHODCALLTYPE *GetPropertyProgrammaticName )( 
            IUIAutomation5 * This,
            /* [in] */ PROPERTYID property,
            /* [retval][out] */ BSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *GetPatternProgrammaticName )( 
            IUIAutomation5 * This,
            /* [in] */ PATTERNID pattern,
            /* [retval][out] */ BSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *PollForPotentialSupportedPatterns )( 
            IUIAutomation5 * This,
            /* [in] */ IUIAutomationElement *pElement,
            /* [out] */ SAFEARRAY * *patternIds,
            /* [out] */ SAFEARRAY * *patternNames);
        
        HRESULT ( STDMETHODCALLTYPE *PollForPotentialSupportedProperties )( 
            IUIAutomation5 * This,
            /* [in] */ IUIAutomationElement *pElement,
            /* [out] */ SAFEARRAY * *propertyIds,
            /* [out] */ SAFEARRAY * *propertyNames);
        
        HRESULT ( STDMETHODCALLTYPE *CheckNotSupported )( 
            IUIAutomation5 * This,
            /* [in] */ VARIANT value,
            /* [retval][out] */ BOOL *isNotSupported);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReservedNotSupportedValue )( 
            IUIAutomation5 * This,
            /* [retval][out] */ IUnknown **notSupportedValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReservedMixedAttributeValue )( 
            IUIAutomation5 * This,
            /* [retval][out] */ IUnknown **mixedAttributeValue);
        
        HRESULT ( STDMETHODCALLTYPE *ElementFromIAccessible )( 
            IUIAutomation5 * This,
            /* [in] */ IAccessible *accessible,
            /* [in] */ int childId,
            /* [retval][out] */ IUIAutomationElement **element);
        
        HRESULT ( STDMETHODCALLTYPE *ElementFromIAccessibleBuildCache )( 
            IUIAutomation5 * This,
            /* [in] */ IAccessible *accessible,
            /* [in] */ int childId,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **element);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutoSetFocus )( 
            IUIAutomation5 * This,
            /* [retval][out] */ BOOL *autoSetFocus);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutoSetFocus )( 
            IUIAutomation5 * This,
            /* [in] */ BOOL autoSetFocus);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionTimeout )( 
            IUIAutomation5 * This,
            /* [retval][out] */ DWORD *timeout);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionTimeout )( 
            IUIAutomation5 * This,
            /* [in] */ DWORD timeout);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TransactionTimeout )( 
            IUIAutomation5 * This,
            /* [retval][out] */ DWORD *timeout);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_TransactionTimeout )( 
            IUIAutomation5 * This,
            /* [in] */ DWORD timeout);
        
        HRESULT ( STDMETHODCALLTYPE *AddTextEditTextChangedEventHandler )( 
            IUIAutomation5 * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ enum TextEditChangeType textEditChangeType,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationTextEditTextChangedEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveTextEditTextChangedEventHandler )( 
            IUIAutomation5 * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationTextEditTextChangedEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *AddChangesEventHandler )( 
            IUIAutomation5 * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [size_is][in] */ int *changeTypes,
            /* [in] */ int changesCount,
            /* [in] */ IUIAutomationCacheRequest *pCacheRequest,
            /* [in] */ IUIAutomationChangesEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveChangesEventHandler )( 
            IUIAutomation5 * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationChangesEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *AddNotificationEventHandler )( 
            IUIAutomation5 * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationNotificationEventHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveNotificationEventHandler )( 
            IUIAutomation5 * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationNotificationEventHandler *handler);
        
        END_INTERFACE
    } IUIAutomation5Vtbl;

    interface IUIAutomation5
    {
        CONST_VTBL struct IUIAutomation5Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUIAutomation5_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUIAutomation5_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUIAutomation5_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUIAutomation5_CompareElements(This,el1,el2,areSame)	\
    ( (This)->lpVtbl -> CompareElements(This,el1,el2,areSame) ) 

#define IUIAutomation5_CompareRuntimeIds(This,runtimeId1,runtimeId2,areSame)	\
    ( (This)->lpVtbl -> CompareRuntimeIds(This,runtimeId1,runtimeId2,areSame) ) 

#define IUIAutomation5_GetRootElement(This,root)	\
    ( (This)->lpVtbl -> GetRootElement(This,root) ) 

#define IUIAutomation5_ElementFromHandle(This,hwnd,element)	\
    ( (This)->lpVtbl -> ElementFromHandle(This,hwnd,element) ) 

#define IUIAutomation5_ElementFromPoint(This,pt,element)	\
    ( (This)->lpVtbl -> ElementFromPoint(This,pt,element) ) 

#define IUIAutomation5_GetFocusedElement(This,element)	\
    ( (This)->lpVtbl -> GetFocusedElement(This,element) ) 

#define IUIAutomation5_GetRootElementBuildCache(This,cacheRequest,root)	\
    ( (This)->lpVtbl -> GetRootElementBuildCache(This,cacheRequest,root) ) 

#define IUIAutomation5_ElementFromHandleBuildCache(This,hwnd,cacheRequest,element)	\
    ( (This)->lpVtbl -> ElementFromHandleBuildCache(This,hwnd,cacheRequest,element) ) 

#define IUIAutomation5_ElementFromPointBuildCache(This,pt,cacheRequest,element)	\
    ( (This)->lpVtbl -> ElementFromPointBuildCache(This,pt,cacheRequest,element) ) 

#define IUIAutomation5_GetFocusedElementBuildCache(This,cacheRequest,element)	\
    ( (This)->lpVtbl -> GetFocusedElementBuildCache(This,cacheRequest,element) ) 

#define IUIAutomation5_CreateTreeWalker(This,pCondition,walker)	\
    ( (This)->lpVtbl -> CreateTreeWalker(This,pCondition,walker) ) 

#define IUIAutomation5_get_ControlViewWalker(This,walker)	\
    ( (This)->lpVtbl -> get_ControlViewWalker(This,walker) ) 

#define IUIAutomation5_get_ContentViewWalker(This,walker)	\
    ( (This)->lpVtbl -> get_ContentViewWalker(This,walker) ) 

#define IUIAutomation5_get_RawViewWalker(This,walker)	\
    ( (This)->lpVtbl -> get_RawViewWalker(This,walker) ) 

#define IUIAutomation5_get_RawViewCondition(This,condition)	\
    ( (This)->lpVtbl -> get_RawViewCondition(This,condition) ) 

#define IUIAutomation5_get_ControlViewCondition(This,condition)	\
    ( (This)->lpVtbl -> get_ControlViewCondition(This,condition) ) 

#define IUIAutomation5_get_ContentViewCondition(This,condition)	\
    ( (This)->lpVtbl -> get_ContentViewCondition(This,condition) ) 

#define IUIAutomation5_CreateCacheRequest(This,cacheRequest)	\
    ( (This)->lpVtbl -> CreateCacheRequest(This,cacheRequest) ) 

#define IUIAutomation5_CreateTrueCondition(This,newCondition)	\
    ( (This)->lpVtbl -> CreateTrueCondition(This,newCondition) ) 

#define IUIAutomation5_CreateFalseCondition(This,newCondition)	\
    ( (This)->lpVtbl -> CreateFalseCondition(This,newCondition) ) 

#define IUIAutomation5_CreatePropertyCondition(This,propertyId,value,newCondition)	\
    ( (This)->lpVtbl -> CreatePropertyCondition(This,propertyId,value,newCondition) ) 

#define IUIAutomation5_CreatePropertyConditionEx(This,propertyId,value,flags,newCondition)	\
    ( (This)->lpVtbl -> CreatePropertyConditionEx(This,propertyId,value,flags,newCondition) ) 

#define IUIAutomation5_CreateAndCondition(This,condition1,condition2,newCondition)	\
    ( (This)->lpVtbl -> CreateAndCondition(This,condition1,condition2,newCondition) ) 

#define IUIAutomation5_CreateAndConditionFromArray(This,conditions,newCondition)	\
    ( (This)->lpVtbl -> CreateAndConditionFromArray(This,conditions,newCondition) ) 

#define IUIAutomation5_CreateAndConditionFromNativeArray(This,conditions,conditionCount,newCondition)	\
    ( (This)->lpVtbl -> CreateAndConditionFromNativeArray(This,conditions,conditionCount,newCondition) ) 

#define IUIAutomation5_CreateOrCondition(This,condition1,condition2,newCondition)	\
    ( (This)->lpVtbl -> CreateOrCondition(This,condition1,condition2,newCondition) ) 

#define IUIAutomation5_CreateOrConditionFromArray(This,conditions,newCondition)	\
    ( (This)->lpVtbl -> CreateOrConditionFromArray(This,conditions,newCondition) ) 

#define IUIAutomation5_CreateOrConditionFromNativeArray(This,conditions,conditionCount,newCondition)	\
    ( (This)->lpVtbl -> CreateOrConditionFromNativeArray(This,conditions,conditionCount,newCondition) ) 

#define IUIAutomation5_CreateNotCondition(This,condition,newCondition)	\
    ( (This)->lpVtbl -> CreateNotCondition(This,condition,newCondition) ) 

#define IUIAutomation5_AddAutomationEventHandler(This,eventId,element,scope,cacheRequest,handler)	\
    ( (This)->lpVtbl -> AddAutomationEventHandler(This,eventId,element,scope,cacheRequest,handler) ) 

#define IUIAutomation5_RemoveAutomationEventHandler(This,eventId,element,handler)	\
    ( (This)->lpVtbl -> RemoveAutomationEventHandler(This,eventId,element,handler) ) 

#define IUIAutomation5_AddPropertyChangedEventHandlerNativeArray(This,element,scope,cacheRequest,handler,propertyArray,propertyCount)	\
    ( (This)->lpVtbl -> AddPropertyChangedEventHandlerNativeArray(This,element,scope,cacheRequest,handler,propertyArray,propertyCount) ) 

#define IUIAutomation5_AddPropertyChangedEventHandler(This,element,scope,cacheRequest,handler,propertyArray)	\
    ( (This)->lpVtbl -> AddPropertyChangedEventHandler(This,element,scope,cacheRequest,handler,propertyArray) ) 

#define IUIAutomation5_RemovePropertyChangedEventHandler(This,element,handler)	\
    ( (This)->lpVtbl -> RemovePropertyChangedEventHandler(This,element,handler) ) 

#define IUIAutomation5_AddStructureChangedEventHandler(This,element,scope,cacheRequest,handler)	\
    ( (This)->lpVtbl -> AddStructureChangedEventHandler(This,element,scope,cacheRequest,handler) ) 

#define IUIAutomation5_RemoveStructureChangedEventHandler(This,element,handler)	\
    ( (This)->lpVtbl -> RemoveStructureChangedEventHandler(This,element,handler) ) 

#define IUIAutomation5_AddFocusChangedEventHandler(This,cacheRequest,handler)	\
    ( (This)->lpVtbl -> AddFocusChangedEventHandler(This,cacheRequest,handler) ) 

#define IUIAutomation5_RemoveFocusChangedEventHandler(This,handler)	\
    ( (This)->lpVtbl -> RemoveFocusChangedEventHandler(This,handler) ) 

#define IUIAutomation5_RemoveAllEventHandlers(This)	\
    ( (This)->lpVtbl -> RemoveAllEventHandlers(This) ) 

#define IUIAutomation5_IntNativeArrayToSafeArray(This,array,arrayCount,safeArray)	\
    ( (This)->lpVtbl -> IntNativeArrayToSafeArray(This,array,arrayCount,safeArray) ) 

#define IUIAutomation5_IntSafeArrayToNativeArray(This,intArray,array,arrayCount)	\
    ( (This)->lpVtbl -> IntSafeArrayToNativeArray(This,intArray,array,arrayCount) ) 

#define IUIAutomation5_RectToVariant(This,rc,var)	\
    ( (This)->lpVtbl -> RectToVariant(This,rc,var) ) 

#define IUIAutomation5_VariantToRect(This,var,rc)	\
    ( (This)->lpVtbl -> VariantToRect(This,var,rc) ) 

#define IUIAutomation5_SafeArrayToRectNativeArray(This,rects,rectArray,rectArrayCount)	\
    ( (This)->lpVtbl -> SafeArrayToRectNativeArray(This,rects,rectArray,rectArrayCount) ) 

#define IUIAutomation5_CreateProxyFactoryEntry(This,factory,factoryEntry)	\
    ( (This)->lpVtbl -> CreateProxyFactoryEntry(This,factory,factoryEntry) ) 

#define IUIAutomation5_get_ProxyFactoryMapping(This,factoryMapping)	\
    ( (This)->lpVtbl -> get_ProxyFactoryMapping(This,factoryMapping) ) 

#define IUIAutomation5_GetPropertyProgrammaticName(This,property,name)	\
    ( (This)->lpVtbl -> GetPropertyProgrammaticName(This,property,name) ) 

#define IUIAutomation5_GetPatternProgrammaticName(This,pattern,name)	\
    ( (This)->lpVtbl -> GetPatternProgrammaticName(This,pattern,name) ) 

#define IUIAutomation5_PollForPotentialSupportedPatterns(This,pElement,patternIds,patternNames)	\
    ( (This)->lpVtbl -> PollForPotentialSupportedPatterns(This,pElement,patternIds,patternNames) ) 

#define IUIAutomation5_PollForPotentialSupportedProperties(This,pElement,propertyIds,propertyNames)	\
    ( (This)->lpVtbl -> PollForPotentialSupportedProperties(This,pElement,propertyIds,propertyNames) ) 

#define IUIAutomation5_CheckNotSupported(This,value,isNotSupported)	\
    ( (This)->lpVtbl -> CheckNotSupported(This,value,isNotSupported) ) 

#define IUIAutomation5_get_ReservedNotSupportedValue(This,notSupportedValue)	\
    ( (This)->lpVtbl -> get_ReservedNotSupportedValue(This,notSupportedValue) ) 

#define IUIAutomation5_get_ReservedMixedAttributeValue(This,mixedAttributeValue)	\
    ( (This)->lpVtbl -> get_ReservedMixedAttributeValue(This,mixedAttributeValue) ) 

#define IUIAutomation5_ElementFromIAccessible(This,accessible,childId,element)	\
    ( (This)->lpVtbl -> ElementFromIAccessible(This,accessible,childId,element) ) 

#define IUIAutomation5_ElementFromIAccessibleBuildCache(This,accessible,childId,cacheRequest,element)	\
    ( (This)->lpVtbl -> ElementFromIAccessibleBuildCache(This,accessible,childId,cacheRequest,element) ) 


#define IUIAutomation5_get_AutoSetFocus(This,autoSetFocus)	\
    ( (This)->lpVtbl -> get_AutoSetFocus(This,autoSetFocus) ) 

#define IUIAutomation5_put_AutoSetFocus(This,autoSetFocus)	\
    ( (This)->lpVtbl -> put_AutoSetFocus(This,autoSetFocus) ) 

#define IUIAutomation5_get_ConnectionTimeout(This,timeout)	\
    ( (This)->lpVtbl -> get_ConnectionTimeout(This,timeout) ) 

#define IUIAutomation5_put_ConnectionTimeout(This,timeout)	\
    ( (This)->lpVtbl -> put_ConnectionTimeout(This,timeout) ) 

#define IUIAutomation5_get_TransactionTimeout(This,timeout)	\
    ( (This)->lpVtbl -> get_TransactionTimeout(This,timeout) ) 

#define IUIAutomation5_put_TransactionTimeout(This,timeout)	\
    ( (This)->lpVtbl -> put_TransactionTimeout(This,timeout) ) 


#define IUIAutomation5_AddTextEditTextChangedEventHandler(This,element,scope,textEditChangeType,cacheRequest,handler)	\
    ( (This)->lpVtbl -> AddTextEditTextChangedEventHandler(This,element,scope,textEditChangeType,cacheRequest,handler) ) 

#define IUIAutomation5_RemoveTextEditTextChangedEventHandler(This,element,handler)	\
    ( (This)->lpVtbl -> RemoveTextEditTextChangedEventHandler(This,element,handler) ) 


#define IUIAutomation5_AddChangesEventHandler(This,element,scope,changeTypes,changesCount,pCacheRequest,handler)	\
    ( (This)->lpVtbl -> AddChangesEventHandler(This,element,scope,changeTypes,changesCount,pCacheRequest,handler) ) 

#define IUIAutomation5_RemoveChangesEventHandler(This,element,handler)	\
    ( (This)->lpVtbl -> RemoveChangesEventHandler(This,element,handler) ) 


#define IUIAutomation5_AddNotificationEventHandler(This,element,scope,cacheRequest,handler)	\
    ( (This)->lpVtbl -> AddNotificationEventHandler(This,element,scope,cacheRequest,handler) ) 

#define IUIAutomation5_RemoveNotificationEventHandler(This,element,handler)	\
    ( (This)->lpVtbl -> RemoveNotificationEventHandler(This,element,handler) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUIAutomation5_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_CUIAutomation;

#ifdef __cplusplus

class DECLSPEC_UUID("ff48dba4-60ef-4201-aa87-54103eef594e")
CUIAutomation;
#endif

EXTERN_C const CLSID CLSID_CUIAutomation8;

#ifdef __cplusplus

class DECLSPEC_UUID("e22ad333-b25f-460c-83d0-0581107395c9")
CUIAutomation8;
#endif
#endif /* __UIAutomationClient_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_UIAutomationClient_0000_0001 */
/* [local] */ 

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_UIAutomationClient_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_UIAutomationClient_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


