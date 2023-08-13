//
//  exec.h
//
//

using namespace std;

// Text based design uses a switch.  Here we assign an int to each
// IUIAutomation method name string.  Add new names, to the end of
// the list of #defines.

#define AddAutomationEventHandler					0
#define AddFocusChangedEventHandler					1
#define AddPropertyChangedEventHandler				2
#define AddPropertyChangedEventHandlerNativeArray	3
#define AddStructureChangedEventHandler				4
#define CheckNotSupported							5
#define CompareElements								6
#define CompareRuntimeIds							7
#define CreateAndCondition							8
#define CreateAndConditionFromArray					9
#define CreateAndConditionFromNativeArray			10	
#define CreateCacheRequest							11
#define CreateFalseCondition						12
#define CreateNotCondition							13
#define CreateOrCondition							14
#define CreateOrConditionFromArray					15
#define CreateOrConditionFromNativeArray			16
#define CreatePropertyCondition						17
#define CreatePropertyConditionEx					18
#define CreateProxyFactoryEntry						19
#define CreateTreeWalker							20
#define CreateTrueCondition							21
#define ElementFromHandle							22
#define ElementFromHandleBuildCache					23
#define ElementFromIAccessible						24
#define ElementFromIAccessibleBuildCache			25
#define ElementFromPoint							26
#define ElementFromPointBuildCache					27
#define GetFocusedElement							28	
#define GetFocusedElementBuildCache					29
#define GetPatternProgrammaticName					30
#define GetPropertyProgrammaticName					31
#define GetRootElement								32
#define GetRootElementBuildCache					33
#define IntNativeArrayToSafeArray					34
#define IntSafeArrayToNativeArray					35
#define PollForPotentialSupportedPatterns			36
#define PollForPotentialSupportedProperties			37
#define RectToVariant								38
#define RemoveAllEventHandlers						39
#define RemoveAutomationEventHandler				40
#define RemoveFocusChangedEventHandler				41
#define RemovePropertyChangedEventHandler			42
#define RemoveStructureChangedEventHandler			43
#define SafeArrayToRectNativeArray					44
#define VariantToRect								45
#define GetTopLevelWindowByName						46

// last element in function names vector
#define FNAMES_LAST									46


//
// prototypes for the switch statement
//
extern void  _AddAutomationEventHandler( string message, autobahn::wamp_invocation invocation );
extern void  _AddFocusChangedEventHandler( string message, autobahn::wamp_invocation invocation );
extern void  _AddPropertyChangedEventHandler ( string message, autobahn::wamp_invocation invocation );
extern void  _AddPropertyChangedEventHandlerNativeArray ( string message, autobahn::wamp_invocation invocation );
extern void  _AddStructureChangedEventHandler ( string message, autobahn::wamp_invocation invocation );
extern void  _CheckNotSupported ( string message, autobahn::wamp_invocation invocation );
extern void  _CompareElements ( string message, autobahn::wamp_invocation invocation );
extern void  _CompareRuntimeIds ( string message, autobahn::wamp_invocation invocation );
extern void  _CreateAndCondition ( string message, autobahn::wamp_invocation invocation );
extern void  _CreateAndConditionFromArray ( string message, autobahn::wamp_invocation invocation );
extern void  _CreateAndConditionFromNativeArray ( string message, autobahn::wamp_invocation invocation );
extern void  _CreateCacheRequest ( string message, autobahn::wamp_invocation invocation );
extern void  _CreateFalseCondition ( string message, autobahn::wamp_invocation invocation );
extern void  _CreateNotCondition ( string message, autobahn::wamp_invocation invocation );
extern void  _CreateOrCondition ( string message, autobahn::wamp_invocation invocation );
extern void  _CreateOrConditionFromArray ( string message, autobahn::wamp_invocation invocation );
extern void  _CreateOrConditionFromNativeArray ( string message, autobahn::wamp_invocation invocation );
extern void  _CreatePropertyCondition ( string message, autobahn::wamp_invocation invocation );
extern void  _CreatePropertyConditionEx ( string message, autobahn::wamp_invocation invocation );
extern void  _CreateProxyFactoryEntry ( string message, autobahn::wamp_invocation invocation );
extern void  _CreateTreeWalker ( string message, autobahn::wamp_invocation invocation );
extern void  _CreateTrueCondition ( string message, autobahn::wamp_invocation invocation );
extern void  _ElementFromHandle ( string message, autobahn::wamp_invocation invocation );
extern void  _ElementFromHandleBuildCache ( string message, autobahn::wamp_invocation invocation );
extern void  _ElementFromIAccessible ( string message, autobahn::wamp_invocation invocation );
extern void  _ElementFromIAccessibleBuildCache ( string message, autobahn::wamp_invocation invocation );
extern void  _ElementFromPoint ( string message, autobahn::wamp_invocation invocation );
extern void  _ElementFromPointBuildCache ( string message, autobahn::wamp_invocation invocation );
extern void  _GetFocusedElement ( string message, autobahn::wamp_invocation invocation );
extern void  _GetFocusedElementBuildCache ( string message, autobahn::wamp_invocation invocation );
extern void  _GetPatternProgrammaticName ( string message, autobahn::wamp_invocation invocation );
extern void  _GetPropertyProgrammaticName ( string message, autobahn::wamp_invocation invocation );
extern void  _GetRootElement ( string message, autobahn::wamp_invocation invocation );
extern void  _GetRootElementBuildCache ( string message, autobahn::wamp_invocation invocation );
extern void  _IntNativeArrayToSafeArray ( string message, autobahn::wamp_invocation invocation );
extern void  _IntSafeArrayToNativeArray ( string message, autobahn::wamp_invocation invocation );
extern void  _PollForPotentialSupportedPatterns ( string message, autobahn::wamp_invocation invocation );
extern void  _PollForPotentialSupportedProperties ( string message, autobahn::wamp_invocation invocation );
extern void  _RectToVariant ( string message, autobahn::wamp_invocation invocation );
extern void  _RemoveAllEventHandlers ( string message, autobahn::wamp_invocation invocation );
extern void  _RemoveAutomationEventHandler ( string message, autobahn::wamp_invocation invocation );
extern void  _RemoveFocusChangedEventHandler ( string message, autobahn::wamp_invocation invocation );
extern void  _RemovePropertyChangedEventHandler ( string message, autobahn::wamp_invocation invocation );
extern void  _RemoveStructureChangedEventHandler ( string message, autobahn::wamp_invocation invocation );
extern void  _SafeArrayToRectNativeArray ( string message, autobahn::wamp_invocation invocation );
extern void  _VariantToRect ( string message, autobahn::wamp_invocation invocation );
extern HRESULT _GetTopLevelWindowByName ( string message, autobahn::wamp_invocation invocation );

