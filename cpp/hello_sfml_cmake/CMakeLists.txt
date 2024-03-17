cmake_minimum_required(VERSION 3.16)
project(Hello_SFML_CMake LANGUAGES CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
option(BUILD_SHARED_LIBS "Build shared libraries" OFF)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML
    GIT_TAG 2.6.1)
FetchContent_MakeAvailable(SFML)

FetchContent_Declare(Unity
    GIT_REPOSITORY https://github.com/ThrowTheSwitch/Unity
    GIT_TAG v2.6.0)
FetchContent_MakeAvailable(Unity)

add_executable(Hello_SFML_CMake src/main.cpp)
target_link_libraries(Hello_SFML_CMake PRIVATE sfml-graphics)
target_compile_features(Hello_SFML_CMake PRIVATE cxx_std_17)

add_executable(Test_Hello_SFML_CMake test/main.cpp)
target_link_libraries(Test_Hello_SFML_CMake PRIVATE unity)
target_compile_features(Test_Hello_SFML_CMake PRIVATE cxx_std_17)

install(TARGETS Hello_SFML_CMake)
install(TARGETS Test_Hello_SFML_CMake)
