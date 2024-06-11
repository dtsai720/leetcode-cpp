cmake_minimum_required(VERSION 3.14)
project(my_cpp_project)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

enable_testing()

find_package(GTest REQUIRED)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src ${CMAKE_CURRENT_SOURCE_DIR}/include)

set(DIR_TO_SEARCH ${CMAKE_SOURCE_DIR}/src)

file(GLOB_RECURSE ALL_FILES "${DIR_TO_SEARCH}/*")
set(INDEX 0)

include(GoogleTest)
foreach(FILE ${ALL_FILES})
    math(EXPR INDEX "${INDEX} + 1")
    get_filename_component(FILE_NAME ${FILE} NAME)
    message(STATUS "Index: ${INDEX}, File: ${FILE_NAME}")
    add_executable("runTest${INDEX}" "tests/test_${FILE_NAME}" "src/${FILE_NAME}")
    target_link_libraries("runTest${INDEX}" GTest::GTest GTest::Main pthread)
    gtest_discover_tests("runTest${INDEX}")
endforeach()
