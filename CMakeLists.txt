cmake_minimum_required(VERSION 3.22)
project(testproj CXX)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)
FetchContent_MakeAvailable(googletest)

add_executable(${PROJECT_NAME} main.cpp candle.cpp candle.h)

target_link_libraries(${PROJECT_NAME} gtest_main)

enable_testing()
add_test(NAME ${PROJECT_NAME} COMMAND ${PROJECT_NAME})