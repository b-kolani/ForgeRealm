cmake_minimum_required(VERSION 3.20)

project(
    ForgeRealm
    VERSION 0.1.0
    DESCRIPTION "A 2D sandbox game built with SFML"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(SFML_BUILD_NETWORK OFF)

add_subdirectory(external/SFML)

add_executable(
    ForgeRealm
    src/main.cpp
    src/core/Application.cpp
    src/core/Window.cpp
    src/core/Game.cpp
    src/core/Input.cpp
    src/core/Time.cpp
)

target_link_libraries(
    ForgeRealm
    PRIVATE
        SFML::Graphics
)

target_include_directories(
    ForgeRealm
    PRIVATE
        include
)