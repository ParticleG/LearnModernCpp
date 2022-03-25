cmake_minimum_required(VERSION 3.17)

project(LearnModernCpp)

set(CMAKE_CXX_STANDARD 20)

if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    message(STATUS "Using Clang")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
    message(STATUS "Using GCC")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Intel")
    message(STATUS "Using Intel C++")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
    message(STATUS "Using Visual Studio C++")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /std:c++latest /MP")
    add_definitions(-D_CRT_SECURE_NO_WARNINGS)
endif ()

add_executable(${PROJECT_NAME} main.cc)

aux_source_directory(cpp11 CPP11_SRC)
aux_source_directory(cpp14 CPP14_SRC)
aux_source_directory(cpp17 CPP17_SRC)
aux_source_directory(cpp20 CPP20_SRC)

target_include_directories(
        ${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/cpp11
        ${CMAKE_CURRENT_SOURCE_DIR}/cpp14
        ${CMAKE_CURRENT_SOURCE_DIR}/cpp17
        ${CMAKE_CURRENT_SOURCE_DIR}/cpp20
)
target_sources(${PROJECT_NAME} PRIVATE ${CPP11_SRC} ${CPP14_SRC} ${CPP17_SRC} ${CPP20_SRC})