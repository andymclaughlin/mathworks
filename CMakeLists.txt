cmake_minimum_required(VERSION 2.6)
 
# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

file(GLOB SOURCES
    *.h
    *.cpp)


# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTests ${SOURCES})
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)
