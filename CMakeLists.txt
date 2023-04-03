cmake_minimum_required(VERSION 3.16)

project(Graph-DLL VERSION 1.0.0 DESCRIPTION "Graph-DLL library")

if(NOT DEFINED CMAKE_CXX_STANDARD OR CMAKE_CXX_STANDARD LESS 20)
    set(CMAKE_CXX_STANDARD 20)
endif()

set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE Source-Files include/*.h src/*.h src/*.cpp)

add_library(Graph-DLL SHARED ${Source-Files})

set_target_properties(Graph-DLL PROPERTIES VERSION ${PROJECT_VERSION})

target_include_directories(Graph-DLL PRIVATE include)
target_include_directories(Graph-DLL PRIVATE src)

include(GNUInstallDirs)

install(TARGETS Graph-DLL
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
