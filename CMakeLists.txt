# Use this for installing AutobahnCpp into <prefix>/include.
cmake_minimum_required(VERSION 2.8)



if(COMMAND cmake_policy)
	cmake_policy(SET CMP0003 NEW)
endif(COMMAND cmake_policy)

# ------------------------------------------------------

project(kikis-cpp)

# ------------------------------------------------------


# include_directories(./)

set(BOOST_ROOT C:/Users/marti/Documents/Crossbar.git/boost_1_65_1)
set(BOOST_INCLUDEDIR C:/Users/marti/Documents/Crossbar.git/boost_1_65_1)
set(BOOST_LIBRARYDIR C:/Users/marti/Documents/Crossbar.git/boost_1_65_1/stage/lib)

set(Boost_INCLUDE_DIRS C:/Users/marti/Documents/Crossbar.git/boost_1_65_1)
set(Boost_LIBRARY_DIRS C:/Users/marti/Documents/Crossbar.git/boost_1_65_1/stage/lib)
set(AUTO_EX_DIR C:/Users/marti/Documents/Crossbar.git/autobahn-cpp/examples)
set(AUTO_INC_DIR C:/Users/marti/Documents/Crossbar.git/autobahn-cpp/autobahn)
#set(AUTO_INC_DIR C:/Users/marti/Documents/Crossbar.git/autobahn-cpp)
#set(AUTO_INC_DIR C:/Users/marti/Documents/Crossbar.git/autobahn-cpp)

add_definitions(-DBOOST_ALL_NO_LIB)
set (Boost_NO_BOOST_CMAKE ON)

set(Boost_USE_STATIC_LIBS        ON)
set(Boost_USE_MULTITHREADED      ON)
set(Boost_USE_STATIC_RUNTIME    OFF)


# find_package(Boost 1.65.1 REQUIRED COMPONENTS system thread)

include_directories(${Boost_INCLUDE_DIRS}) 
#add_executable(SendCommand send_command.cpp ivdlp_packet.cpp) 
#target_link_libraries(SendCommand ${Boost_LIBRARIES})

# ----------------------------------------------------------

# MB

#set(Boost_INCLUDE_DIRS C:/local/boost_1_65_1)
set(BOOST_INCLUDEDIR C:/Users/marti/Documents/Crossbar.git/boost_1_65_1)
set(Msgpack_INCLUDE_DIR C:/Users/marti/Documents/Crossbar.git/msgpack-c/msgpack-c/include)
set(Msgpack_INCLUDE_DIRS C:/Users/marti/Documents/Crossbar.git/msgpack-c/msgpack-c/include)
set(OPENSSL_ROOT_DIR C:/local/openssl)
set(Websocketpp_INCLUDE_DIRS C:/Users/marti/Documents/Crossbar.git/websocketpp/websocketpp)

set(BOOST_LIBRARYDIR C:/Users/marti/Documents/Crossbar.git/boost_1_65_1/stage/lib)
#set(Boost_LIBRARIES C:/Users/marti/Documents/Crossbar.git/boost_1_65_1/stage/lib)

add_definitions(-D_WIN32_WINNT=0x0501)
add_definitions(/MTd)

# MB end


include_directories(${Boost_INCLUDE_DIRS})
include_directories(${Websocketpp_INCLUDE_DIRS})
link_directories(${Boost_LIBRARY_DIRS})

option(AUTOBAHN_BUILD_EXAMPLES "Build examples" ON)

if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    set(CMAKE_CXX_FLAGS "-stdlib=libc++ -Wno-unused-local-typedefs -Wno-unknown-warning-option ${CMAKE_CXX_FLAGS}")
    if ("${CMAKE_GENERATOR}" STREQUAL "Ninja")
        set(CMAKE_CXX_FLAGS "-fcolor-diagnostics ${CMAKE_CXX_FLAGS}")
    endif()
endif()

if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
    if(NOT CMAKE_CXX_COMPILER_VERSION VERSION_LESS "4.9.0") # i.e. if >= 4.9.0
        if (CMAKE_GENERATOR STREQUAL "Ninja")
            set(CMAKE_CXX_FLAGS "-fdiagnostics-color=always ${CMAKE_CXX_FLAGS}")
        else()
            set(CMAKE_CXX_FLAGS "-fdiagnostics-color=auto ${CMAKE_CXX_FLAGS}")
        endif()
    endif()
endif()

if(NOT MSVC)
    set(CMAKE_CXX_FLAGS "-std=c++11 -Wall -Werror -Wno-unused-variable ${CMAKE_CXX_FLAGS}")
endif()

set(CMAKE_MODULE_PATH
    ${CMAKE_MODULE_PATH}
    "${AUTO_EX_DIR}/cmake/Modules/")

#find_package(Boost REQUIRED COMPONENTS program_options system thread random)
find_package(Boost REQUIRED)

#find_package(Websocketpp REQUIRED)
find_package(Msgpack REQUIRED)
find_package(Threads REQUIRED)
find_package(OpenSSL REQUIRED)

set(PUBLIC_HEADERS
    ${AUTO_INC_DIR}/autobahn.hpp
    ${AUTO_INC_DIR}/boost_config.hpp
    ${AUTO_INC_DIR}/exceptions.hpp
    ${AUTO_INC_DIR}/wamp_arguments.hpp
    ${AUTO_INC_DIR}/wamp_auth_utils.hpp
    ${AUTO_INC_DIR}/wamp_authenticate.hpp
    ${AUTO_INC_DIR}/wamp_authenticate.ipp
    ${AUTO_INC_DIR}/wamp_call.hpp
    ${AUTO_INC_DIR}/wamp_call.ipp
    ${AUTO_INC_DIR}/wamp_call_options.hpp
    ${AUTO_INC_DIR}/wamp_call_options.ipp
    ${AUTO_INC_DIR}/wamp_call_result.hpp
    ${AUTO_INC_DIR}/wamp_call_result.ipp
    ${AUTO_INC_DIR}/wamp_challenge.hpp
    ${AUTO_INC_DIR}/wamp_challenge.ipp
    ${AUTO_INC_DIR}/wamp_event.hpp
    ${AUTO_INC_DIR}/wamp_event.ipp
    ${AUTO_INC_DIR}/wamp_event_handler.hpp
    ${AUTO_INC_DIR}/wamp_invocation.hpp
    ${AUTO_INC_DIR}/wamp_invocation.ipp
    ${AUTO_INC_DIR}/wamp_message.hpp
    ${AUTO_INC_DIR}/wamp_message.ipp
    ${AUTO_INC_DIR}/wamp_message_type.hpp
    ${AUTO_INC_DIR}/wamp_message_type.ipp
    ${AUTO_INC_DIR}/wamp_procedure.hpp
    ${AUTO_INC_DIR}/wamp_publication.hpp
    ${AUTO_INC_DIR}/wamp_publication.ipp
    ${AUTO_INC_DIR}/wamp_rawsocket_transport.hpp
    ${AUTO_INC_DIR}/wamp_rawsocket_transport.ipp
    ${AUTO_INC_DIR}/wamp_register_request.hpp
    ${AUTO_INC_DIR}/wamp_register_request.ipp
    ${AUTO_INC_DIR}/wamp_registration.hpp
    ${AUTO_INC_DIR}/wamp_registration.ipp
    ${AUTO_INC_DIR}/wamp_transport.hpp
    ${AUTO_INC_DIR}/wamp_transport_handler.hpp
    ${AUTO_INC_DIR}/wamp_session.hpp
    ${AUTO_INC_DIR}/wamp_session.ipp
    ${AUTO_INC_DIR}/wamp_subscribe_options.hpp
    ${AUTO_INC_DIR}/wamp_subscribe_options.ipp
    ${AUTO_INC_DIR}/wamp_subscribe_request.hpp
    ${AUTO_INC_DIR}/wamp_subscribe_request.ipp
    ${AUTO_INC_DIR}/wamp_subscription.hpp
    ${AUTO_INC_DIR}/wamp_subscription.ipp
    ${AUTO_INC_DIR}/wamp_tcp_transport.hpp
    ${AUTO_INC_DIR}/wamp_tcp_transport.ipp
    ${AUTO_INC_DIR}/wamp_transport_handler.hpp
    ${AUTO_INC_DIR}/wamp_transport.hpp
    ${AUTO_INC_DIR}/wamp_uds_transport.hpp
    ${AUTO_INC_DIR}/wamp_unregister_request.hpp
    ${AUTO_INC_DIR}/wamp_unregister_request.ipp
    ${AUTO_INC_DIR}/wamp_unsubscribe_request.hpp
    ${AUTO_INC_DIR}/wamp_unsubscribe_request.ipp
    ${AUTO_INC_DIR}/wamp_websocket_transport.hpp
    ${AUTO_INC_DIR}/wamp_websocket_transport.ipp
    ${AUTO_INC_DIR}/wamp_websocketpp_websocket_transport.hpp
    ${AUTO_INC_DIR}/wamp_websocketpp_websocket_transport.ipp
)
	
set(Boost_LIBRARIES
   ${BOOST_LIBRARYDIR}/libboost_system-vc-mt-sgd-1_65_1.lib
   ${BOOST_LIBRARYDIR}/libboost_thread-vc-mt-sgd-1_65_1.lib
   ${BOOST_LIBRARYDIR}/libboost_program_options-vc-mt-sgd-1_65_1.lib
)

add_library(autobahn_cpp INTERFACE)

target_include_directories(autobahn_cpp INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${AUTO_INC_DIR}
    ${Boost_INCLUDE_DIRS}
    ${OPENSSL_INCLUDE_DIR}
    ${Websocketpp_INCLUDE_DIRS}
    ${Msgpack_INCLUDE_DIRS})

target_link_libraries(autobahn_cpp INTERFACE
    ${Boost_LIBRARIES}
    ${OPENSSL_LIBRARIES}
    ${CMAKE_THREAD_LIBS_INIT})

foreach(h ${PUBLIC_HEADERS})
    string(REPLACE "${AUTO_EX_DIR}/" "include/" include "${h}")
    get_filename_component(HEADER_INCLUDE_DIRECTORY ${include} DIRECTORY)
    install(FILES ${h}
        DESTINATION ${HEADER_INCLUDE_DIRECTORY}
        COMPONENT "headers")
endforeach()

if(AUTOBAHN_BUILD_EXAMPLES)
    add_subdirectory(SRC)
endif(AUTOBAHN_BUILD_EXAMPLES)
