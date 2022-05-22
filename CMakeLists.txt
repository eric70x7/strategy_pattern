cmake_minimum_required(VERSION 3.0.0)
project(strategy VERSION 0.1.0)

# include(CTest)
enable_testing()

# Static code analysis
set(CMAKE_CXX_CPPLINT cpplint; --quiet)

add_library(strategy 
            strategy.cpp 
            concreteStrategyA.cpp
            concreteStrategyB.cpp)

add_library(context
            context.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

find_package(GTest REQUIRED)

add_executable(test_strategy 
               test_strategy.cpp)

# Tester includes
target_include_directories(
    test_strategy
    PUBLIC ${GTEST_INCLUDE_DIRS}
)

# Tester libraries
target_link_libraries(
    test_strategy
    context
    strategy
    ${GTEST_LIBRARIES}
)

add_test(NAME test_strategy
         COMMAND test_strategy)