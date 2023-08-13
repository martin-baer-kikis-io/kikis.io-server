///////////////////////////////////////////////////////////////////////////////
//
//  utils.cpp
//
//
///////////////////////////////////////////////////////////////////////////////


#include <boost/algorithm/string.hpp>
#include "utils.h"


//#define INPUT_ARRAY_MAX 16


/*--------------------------------------------------------------------------------*/

//remember to delete[] wstr, the pointer return value
//

std::wstring multibyte2widechar(std::string mb_str)
{

    int wchars_num =
      MultiByteToWideChar(  CP_UTF8,
                            0,
                            mb_str.c_str(),
                            -1,
                            NULL,
                            0 );
                            
    wchar_t * wstr = new wchar_t[wchars_num];
    
    
    
    
    
    
    MultiByteToWideChar(    CP_UTF8,
                            0,
                            mb_str.c_str(),
                            -1,
                            wstr,
                            wchars_num );

   
    //std::cerr << "wstring: " << wstr << std::endl;

    return wstr;
}



/*--------------------------------------------------------------------------------*/
    

//remember to delete mb_str, the string return value
//

std::string widechar2multibyte(std::wstring wstr)
{
    std::cout << "Entered widechar2multibyte" << std::endl;
    std::wcout << L"Entered widechar2multibyte with: " << wstr << L"\n";
    
    int size_needed = 
      WideCharToMultiByte(  CP_UTF8, 
                            0, 
                            &wstr[0],                                             
                            (int)wstr.size(),
                            NULL,
                            0,
                            NULL,
                            NULL);
                            
    std::string mb_str( size_needed, 0 );
    
    WideCharToMultiByte(    CP_UTF8,
                            0,
                            &wstr[0],
                            (int)wstr.size(),
                            &mb_str[0],
                            size_needed,
                            NULL,
                            NULL);
                            
    std::cerr << "mb_str: " << mb_str << std::endl;    
    return mb_str;
}


/*--------------------------------------------------------------------------------*/


std::wstring * wamp_invoke2wchar_array ( autobahn::wamp_invocation invocation ) 
{
    
    std::string sub = "wamp_invoke2wchar_array";
    std::cerr << "entered " << sub << std::endl;
    
    std::wstring * ret_wstringarray = new std::wstring[INPUT_ARRAY_MAX];

    for ( int i =0; i < INPUT_ARRAY_MAX; i++ ) {

//        if (  invocation->argument<std::string>(i) == "NULL")
//        {
//            ret_wstringarray[i] = multibyte2widechar ( NULL );
//        } else {
            ret_wstringarray[i] = multibyte2widechar ( invocation->argument<std::string>(i) );
//        } 
        std::cerr << "assigning to index[" << i << "]" << std::endl;
        std::wcout << L"   ";
        std::wcout << ret_wstringarray[i] << L"\n";
    }

    std::cerr << "exiting " << sub << std::endl;
    return ret_wstringarray;
}


/*--------------------------------------------------------------------------------*/

    // wstring2PROPERTYID
    // convert a wide string to an interger based on the Property ID input string.
    

PROPERTYID     wstring2PROPERTYID ( std::wstring PropName ) 
{
    

    if ( PropName == L"UIA_AcceleratorKeyProperty" ) 
        return 30006;
    if ( PropName == L"UIA_AccessKeyProperty" )
        return 30007;
    if ( PropName == L"UIA_AnnotationObjectsProperty" ) 
        return 30156;
    if ( PropName == L"UIA_AnnotationTypesProperty" ) 
        return 30155;
    if ( PropName == L"UIA_AriaPropertiesProperty" ) 
        return 30102;
    if ( PropName == L"UIA_AriaRoleProperty" ) 
        return 30101;
    if ( PropName == L"UIA_AutomationProperty" ) 
        return 30011;
    if ( PropName == L"UIA_BoundingRectangleProperty" ) 
        return 30001;
    if ( PropName == L"UIA_CenterPointProperty" ) 
        return 30165;
    if ( PropName == L"UIA_ClassNameProperty" ) 
        return 30012;
    if ( PropName == L"UIA_ClickablePointProperty" ) 
        return 30014;
    if ( PropName == L"UIA_ControllerForProperty" ) 
        return 30104;
    if ( PropName == L"UIA_ControlTypeProperty" ) 
        return 30003;
    if ( PropName == L"UIA_CultureProperty" ) 
        return 30015;
    if ( PropName == L"UIA_DescribedByProperty" ) 
        return 30105;
    if ( PropName == L"UIA_FillColorProperty" ) 
        return 30160;
    if ( PropName == L"UIA_FillTypeProperty" ) 
        return 30162;
    if ( PropName == L"UIA_FlowsFromProperty" ) 
        return 30148;
    if ( PropName == L"UIA_FlowsToProperty" ) 
        return 30106;
    if ( PropName == L"UIA_FrameworkProperty" )
        return 30024;
    if ( PropName == L"UIA_FullDescriptionProperty" ) 
        return 30159;
    if ( PropName == L"UIA_HasKeyboardFocusProperty" ) 
        return 30008;
    if ( PropName == L"UIA_HeadingLevelProperty" ) 
        return 30173;
    if ( PropName == L"UIA_HelpTextProperty" ) 
        return 30013;
    if ( PropName == L"UIA_IsContentElementProperty" ) 
        return 30017;
    if ( PropName == L"UIA_IsControlElementProperty" ) 
        return 30016;
    if ( PropName == L"UIA_IsDataValidForFormProperty" ) 
        return 30103;
    if ( PropName == L"UIA_IsEnabledProperty" ) 
        return 30010;
    if ( PropName == L"UIA_IsKeyboardFocusableProperty" ) 
        return 30009;
    if ( PropName == L"UIA_IsOffscreenProperty" ) 
        return 30022;
    if ( PropName == L"UIA_IsPasswordProperty" ) 
        return 30019;
    if ( PropName == L"UIA_IsPeripheralProperty" ) 
        return 30150;
    if ( PropName == L"UIA_IsRequiredForFormProperty" ) 
        return 30025;
    if ( PropName == L"UIA_ItemStatusProperty" ) 
        return 30026;
    if ( PropName == L"UIA_ItemTypeProperty" ) 
        return 300021;
    if ( PropName == L"UIA_LabeledByProperty" ) 
        return 30018;
    if ( PropName == L"UIA_LandmarkTypeProperty" ) 
        return 30157;
    if ( PropName == L"UIA_LevelProperty" ) 
        return 30154;
    if ( PropName == L"UIA_LiveSettingProperty" ) 
        return 30135;
    if ( PropName == L"UIA_LocalizedControlTypeProperty" ) 
        return 30004;
    if ( PropName == L"UIA_LocalizedLandmarkTypeProperty" ) 
        return 30158;
    if ( PropName == L"UIA_NameProperty" ) 
        return 30005;
    if ( PropName == L"UIA_NativeWindowHandleProperty" ) 
        return 30020;
    if ( PropName == L"UIA_OptimizeForVisualContentProperty" ) 
        return 30111;
    if ( PropName == L"UIA_OrientationProperty" ) 
        return 300023;
    if ( PropName == L"UIA_OutlineColorProperty" ) 
        return 30161;
    if ( PropName == L"UIA_OutlineThicknessProperty" ) 
        return 30164;
    if ( PropName == L"UIA_PositionInSetProperty" ) 
        return 30152;
    if ( PropName == L"UIA_ProcessProperty" ) 
        return 30002;
    if ( PropName == L"UIA_ProviderDescriptionProperty" ) 
        return 30107;
    if ( PropName == L"UIA_RotationProperty" ) 
        return 30166;
    if ( PropName == L"UIA_RuntimeProperty" ) 
        return 30000;
    if ( PropName == L"UIA_SizeProperty" ) 
        return 30167;
    if ( PropName == L"UIA_SizeOfSetProperty" ) 
        return 30153;
    if ( PropName == L"UIA_VisualEffectsProperty" ) 
        return 30163;

    return NULL;
}


/*--------------------------------------------------------------------------------*/


// returns string of the variant vt type
//
std::string get_variant_type_name ( VARIANT varProp  ) {

   int vt = varProp.vt; 

    if ( vt == VT_EMPTY  )              return "VT_EMPTY";
    if ( vt == VT_NULL )                return "VT_NULL";
    if ( vt == VT_I2 )                  return "VT_I2";
    if ( vt == VT_I4 )                  return "VT_I4";
    if ( vt == VT_R4 )                  return "VT_R4";
    if ( vt == VT_R8 )                  return "VT_R8";
    if ( vt == VT_CY )                  return "VT_CY";
    if ( vt == VT_DATE )                return "VT_DATE";
    if ( vt == VT_BSTR )                return "VT_BSTR";
    if ( vt == VT_DISPATCH )            return "VT_DISPATCH";
    if ( vt == VT_ERROR )               return "VT_ERROR";
    if ( vt == VT_BOOL )                return "VT_BOOL";
    if ( vt == VT_BYREF )               return "VT_BYREF";
    if ( vt == VT_UNKNOWN )             return "VT_UNKNOWN";
    if ( vt == VT_DECIMAL )             return "VT_DECIMAL";
    if ( vt == VT_I1 )                  return "VT_I1";
    if ( vt == VT_UI1 )                 return "VT_UI1";
    if ( vt == VT_UI2 )                 return "VT_UI2";
    if ( vt == VT_UI4 )                 return "VT_UI4";
    if ( vt == VT_I8 )                  return "VT_I8";
    if ( vt == VT_UI8 )                 return "VT_UI8";
    if ( vt == VT_I4 )                  return "VT_I4";
    if ( vt == VT_UI4 )                 return "VT_UI4";
    if ( vt == VT_VOID )                return "VT_VOID";
    if ( vt == VT_HRESULT )             return "VT_HRESULT";
    if ( vt == VT_PTR )                 return "VT_PTR";
    if ( vt == VT_SAFEARRAY )           return "VT_SAFEARRAY";
    if ( vt == VT_CARRAY )              return "VT_CARRAY";
    if ( vt == VT_USERDEFINED )         return "VT_USERDEFINED";
    if ( vt == VT_LPSTR )               return "VT_LPSTR";
    if ( vt == VT_LPWSTR )              return "VT_LPWSTR";
    if ( vt == VT_RECORD )              return "VT_RECORD";
    if ( vt == VT_FILETIME )            return "VT_FILETIME";
    if ( vt == VT_BLOB )                return "VT_BLOB";
    if ( vt == VT_STREAM )              return "VT_STREAM";
    if ( vt == VT_STORAGE )             return "VT_STORAGE";
    if ( vt == VT_STREAMED_OBJECT )     return "VT_STREAMED_OBJECT";
    if ( vt == VT_STORED_OBJECT )       return "VT_STORED_OBJECT";
    if ( vt == VT_BLOB_OBJECT )         return "VT_BLOB_OBJECT";
    if ( vt == VT_CF )                  return "VT_CF";
    if ( vt == VT_CLSID )               return "VT_CLSID";
    if ( vt == VT_VECTOR )              return "VT_VECTOR";
    if ( vt == VT_ARRAY )               return "VT_ARRAY";
    if ( vt == VT_BYREF )               return "VT_BYREF";

    return "No Match";
}


/*--------------------------------------------------------------------------------*/


IUIAutomationElement * hopToNode ( IUIAutomation             * g_pAutomation, 
                                   autobahn::wamp_invocation   invocation,
                                   std::wstring              * input_array )
{
    std::string sub = "hopToNode";
    std::cerr << "Entering " << sub << std::endl;

    std::cout  << "DEBUG: initializing data" << std::endl;
    VARIANT                   varProp;
    IUIAutomationElement    * pNode          = NULL;
    IUIAutomationElement    * pPrev          = NULL;
    IUIAutomationElement    * pRoot          = NULL;
    IUIAutomationElement    * pFound         = NULL;
    IUIAutomationTreeWalker * pControlWalker = NULL;
    PROPERTYID                propertyId     = NULL;
    HRESULT                   hr             = NULL;
    std::string               ret_str        = "";
    std::cout  << "DEBUG: done initializing data" << std::endl;


// Get the root node

    hr = g_pAutomation->GetRootElement(&pRoot);
    if (FAILED(hr)) {
        std::cerr << "GetRootElement Failed.  Exiting" << std::endl;
        exit(0);    
    }

    
// Create a tree iterator

    hr = g_pAutomation->get_ControlViewWalker(&pControlWalker);
    if (FAILED(hr)) {
        std::cerr << "get_ControlViewWalker failed. Exiting..." << std::endl;
        exit(0);
    }
    std::cout  << "DEBUG: successfully Created tree walker" << std::endl;


    // assign pointers..
    //
    std::wcout << L"\n";
    std::cout  << "DEBUG: assigning node pointers" << std::endl;
    std::wcout << L"\n";
    pPrev = pRoot;

// process the input_array to return a leaf node
    
    std::cout  << "DEBUG: Entering input_array processing for loop." << std::endl;

    for ( unsigned i = 0; i < INPUT_ARRAY_MAX; ) {

        std::wcout << L"\n";
        std::wcout << "<<<----";
        std::cout  << "DEBUG:Top of the input_array processing for loop." << std::endl;

            
        // grab hop details from input_array 
	//
        std::wstring prop     = input_array[i++];
        std::wstring valu     = input_array[i++];

	if ( ( prop ==  multibyte2widechar ( "get" )) || ( prop ==  multibyte2widechar ( "set" )))
	{
            std::wcout << L"Testing tmp for get or set. Found tmp == [" << prop << "] " << std::endl;
            std::cout << "Returning pPrev node pointer..." << std::endl;
            return pPrev;
        }
        std::cout << "<<<----";
        std::wcout << L"Testing tmp for get or set. Found tmp: [" << prop << "] " << std::endl;

        // assign pPrev first child to pNode
        std::wcout << L"\n";
        std::wcout << "<<<----";
        std::cout  << "DEBUG: getting First Child" << std::endl;

        hr = pControlWalker->GetFirstChildElement(pPrev, &pNode);
        if (FAILED(hr)) {

            ret_str = "GetFirstChildElement retrned a FAILED Error Code.";

            std::wcout << "<<<----";
            std::cerr << ret_str + "  Exiting..." << std::endl;
            invocation->result(std::make_tuple( ret_str ));
            exit(0);
        }
	else if ( pNode == NULL )
        {
            std::string ptmp = widechar2multibyte( prop );
            std::string vtmp = widechar2multibyte( valu );

            ret_str = "FATAL: Failed to find IUIAutomationElement with (" + ptmp + " == " + vtmp + ").";

            std::wcout << "<<<----";
            std::cerr << ret_str + "  Exiting..." << std::endl;
            invocation->result(std::make_tuple( ret_str ));
            exit(0);
        }
        std::wcout << "<<<----";
        std::cout  << "DEBUG: Testing First Child" << std::endl;

	PROPERTYID propertyId = wstring2PROPERTYID( prop );

        hr = pNode->GetCurrentPropertyValue ( propertyId, &varProp );
        if( FAILED(hr) )
        {
            std::cerr << "DEBUG: GetCurrentPropertyValue failed.  Exiting..." << std::endl;
            exit(0);
        }
        std::wcout << "<<<----";
        std::wcout << "looking for: [" << valu << "]  found: [" << varProp.bstrVal << L"]\n";
        if ( valu != varProp.bstrVal ) {
            std::wcout << "<<<----";
            std::cout  << "DEBUG: found a match!!" << std::endl;
        }

	std::wcout << L"\n";
        std::wcout << "<<<----";
        std::cout  << "DEBUG: assigning node pointers" << std::endl;
	 
        pPrev = pNode;

	// test the Property Values
	// 
        while ( valu != varProp.bstrVal ) {

	    std::wcout << L"\n";
            std::wcout << "<<<--------";
            std::cout  << "DEBUG: Searching Sibling..." << std::endl;

            // for ret_str
            std::string ptmp = widechar2multibyte( prop );
            std::string vtmp = widechar2multibyte( valu );


            hr = pControlWalker->GetNextSiblingElement(pPrev, &pNode);
            if( FAILED(hr) )
            {
                ret_str = "GetNextSiblingElement retrned FAILED Error Code.";

                std::cout << "<<<--------";
                std::cerr << ret_str + ".  Exiting..." << std::endl;
                invocation->result(std::make_tuple( ret_str ));
                exit(0);
            } 
	    else if ( pNode == NULL )
            {
                ret_str = "FATAL: Failed to find IUIAutomationElement with (" + ptmp + " == " + vtmp + ").";
	

                std::cout << "<<<--------";
                std::cerr << ret_str + ".  Exiting..." << std::endl;
                invocation->result(std::make_tuple( ret_str ));
                exit(0);
            }

            hr = pNode->GetCurrentPropertyValue ( propertyId, &varProp );
            if( FAILED(hr) )
            {
                std::cerr << "DEBUG: GetCurrentPropertyValue failed.  Exiting..." << std::endl;
                exit(0);
            }
            std::wcout << "<<<--------";
            std::wcout << "Looking for: [" << valu << "]. Found: [" << varProp.bstrVal << L"]\n";

            std::string vt_type_str = get_variant_type_name( varProp );
            std::cout << "Found TYPE VALUE: vt: [" << vt_type_str << "]" << std::endl;

            if ( valu == varProp.bstrVal ) {
                std::wcout << "<<<------------";
                std::cout  << "DEBUG: found a match!!" << std::endl;
            }

            if ( pPrev != pNode )
            {
                std::wcout << "<<<------------";
                std::cout  << "DEBUG: assigning node pointers" << std::endl;
                pPrev = pNode;
            }

        }
        std::wcout << "<<<----";
        std::cerr << "Out of GetNextSiblingElement loop" << std::endl;
    }

    std::wcout << "<<<-";
    std::cerr << "Out of input_array processing loop.  Returning pNode" << std::endl;
    return pNode;
}


#if 0
        //std::string text = "Let,me,split,this,into,words";
        std::vector<std::string> ret_array;
        std::string mb_str;

        mb_str = widechar2multibyte( relation );

            ret_array = multibyte_comma_split ( mb_str );
            

        std::vector<std::wstring> hop_warray;
            for  ( unsigned j = 0; j < 3; j++ ) {
            if ( ret_array[j] != 'NULL' )
                    hop_warray[j] = multibyte2widechar ( ret_array[j] );
            }
            
            std::wcout << "wstr after split: " << hop_warray[0] << L"\n";

        //std::string text = "Let,me,split,this,into,words";
        std::string text = input_array[i];
        std::vector<std::string> results;
        boost::split(results, text, [](char c){return c == ',';});

            std::cout << "after split: " << results[1] << std::endl;
        if ( relation == 'child' ) {
            // get first child
        }     
        elsif ( relation == 'sibling' ) {
            // get sibling
        }     
        elsif ( relation == 'target' ) {
            // get the sought value
        }else {
            // error out
        }
    //std::cerr << "initializing Data" << std::endl;
    
    IUIAutomation             *     pAutomation        = NULL;

    IUIAutomationElement    *     pFound             = NULL;
    IUIAutomationCondition    *     pCondition         = NULL;
    //HRESULT                       hr               = NULL;        
    LPWSTR                         searchString     = NULL;


    IUIAutomationElement    *    pNext            = NULL;
    int                            indent            = 0;
    

    BSTR                        desc            = NULL;
    
    //std::cerr << "Done initializing Data" << std::endl;



/*--------------------------------------------------------------------------------*/

    // Create a VARIANT from wstring input -  the target element field
    
    wstr = input_array[4];

    VARIANT varProp;
    varProp.vt = VT_BSTR;
    varProp.bstrVal = SysAllocString(wstr.c_str());
    
    if (varProp.bstrVal == NULL)
    {
        msg = "varProp.bstrVal is NULL.  Exiting...";
        std::cerr << "DEBUG: " << msg << std::endl;
        goto cleanup;

    }
    std::cerr << "varProp.bstrVal is Not NULL." << std::endl;
    
    
/*--------------------------------------------------------------------------------*/

    std::cerr << "Done initializing Data" << std::endl;
    
    std::cerr << "Start working on navigation..." << std::endl;
    
/*--------------------------------------------------------------------------------*/
    // Create the iterator(ControlViewWalker)
    //
    
    std::cerr << "DEBUG: calling get_ControlViewWalker" << std::endl;
    g_pAutomation->get_ControlViewWalker(&pControlWalker);
    if (pControlWalker == NULL) {
        msg = "get_ControlViewWalker failed. Exiting...";
        std::cerr << "DEBUG: " << msg << std::endl;
        //goto cleanup;
    }
    msg = "pControlWalker is NOT NULL.";
    std::cerr << "DEBUG: " << msg << std::endl;
/*--------------------------------------------------------------------------------*/
// Get the prop0erties from the current element

// Test the current element against the input string.



/*--------------------------------------------------------------------------------*/
    // Get the FirstChild from pRoot Root Element, creates pNode...
    //
    
    std::cerr << "DEBUG: calling GetFirstChildElement" << std::endl;
    pControlWalker->GetFirstChildElement(pRoot, &pNode);
    if (pNode == NULL) {
        msg = "GetFirstChildElement failed. Exiting...";
        std::cerr << "DEBUG: " << msg << std::endl;
        goto cleanup;
    }
    msg = "pNode is NOT NULL.";
    std::cerr << "DEBUG: " << msg << std::endl;
/*--------------------------------------------------------------------------------*/
    
    // Get the name of the element
    //
    //     eg UIA_NamePropertyId
    //
    
    //VARIANT varProp;
    //varProp.vt = VT_BSTR;
    //varProp.bstrVal = SysAllocString(wstr.c_str());
    
    VARIANT target_value;
    std::wstring wstr = input_array[4];
    
    
    //PROPERTYID propertyId = input_array[1];
    PROPERTYID propertyId = wstring2PROPERTYID( wstr );
    std::cerr << "PROPERTYID: " << propertyId << std::endl;
    
    msg = "calling GetCurrentPropertyValue with pNode...";
    std::cerr << "DEBUG: " << msg << std::endl;
    
    hr = pNode->GetCurrentPropertyValue( propertyId, &target_value );
    if (FAILED(hr)) {
        msg = "GetCurrentPropertyValue failed. Exiting...";
        std::cerr << "DEBUG: " << msg << std::endl;
        //goto cleanup;    
    }
    //desc = target_value.bstrVal;
    msg = "GetCurrentPropertyValue succeeded.";
            }
    std::cerr << "DEBUG: " << msg << std::endl;
        std::cerr << "out of the GetNextSiblingElement while loop" << std::endl;
        pPrev = pNode;
    std::wcout << L"   ";
    //std::wcout << desc << L"\n";
    
    //exit(0);
    
    // get_CurrentLocalizedControlType assign to desc
    return pNode;
    
    msg = "testing  get_CurrentLocalizedControlType";
    std::cerr << "DEBUG: " << msg << std::endl;

    wstr = input_array[3];

    if ( wstr == L"CurrentLocalizedControlType" ) {
        
        msg = "calling get_CurrentLocalizedControlType with pNode...";
        std::cerr << "DEBUG: " << msg << std::endl;

        pNode->get_CurrentLocalizedControlType(&desc);
        if ( desc == NULL ) {
            msg = "get_CurrentLocalizedControlType failed. Exiting...";
            std::cerr << "DEBUG: " << msg << std::endl;
            goto cleanup;    
        }
        msg = "desc is NOT NULL.";
        std::cerr << "DEBUG: " << msg << std::endl;
        
        msg = "printing desc...";
    
        std::cerr << "DEBUG: " << msg << std::endl;
        std::wcout << L"   ";
        std::wcout << desc << L"\n";

        msg = "releasing pNode...";
        std::cerr << "DEBUG: " << msg << std::endl;
    }

/*--------------------------------------------------------------------------------*/
    
    // prep return value
    //


    hr = pFound->GetCurrentPropertyValue ( TreeScope_Children, &varProp );

    if (varProp.bstrVal == NULL)
    {
        msg = "varProp.bstrVal is NULL.  Exiting...";
        std::cerr << "DEBUG: " << msg << std::endl;
        goto cleanup;

    }
    std::cerr << "DEBUG: calling widechar2multibyte" << std::endl;    
    ret_str = widechar2multibyte(varProp.bstrVal);
    


/*--------------------------------------------------------------------------------*/
    
    // prep return value
    //

    std::cerr << "DEBUG: calling widechar2multibyte" << std::endl;    
    ret_str = widechar2multibyte(desc);

    msg = "Back from calling widechar2multibyte.";
    std::cerr << "DEBUG: " << msg << std::endl;

    return NULL;

}        
/*--------------------------------------------------------------------------------*/
#endif
