cmake_minimum_required(VERSION 3.20)

project(SFML_Platformer_Level_Editor LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Put the .exe in a predictable place
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# --- SFML (FetchContent) ---
include(FetchContent)

# You can change the tag to a specific stable release if desired.
FetchContent_Declare(
        SFML
        GIT_REPOSITORY https://github.com/SFML/SFML.git
        GIT_TAG 3.1.0
)

# Build SFML as part of your build (static or shared; shared is fine on Windows)
set(SFML_BUILD_AUDIO TRUE  CACHE BOOL "" FORCE)
set(SFML_BUILD_NETWORK TRUE CACHE BOOL "" FORCE)
set(SFML_BUILD_GRAPHICS TRUE CACHE BOOL "" FORCE)
set(SFML_BUILD_WINDOW TRUE CACHE BOOL "" FORCE)
set(SFML_BUILD_SYSTEM TRUE CACHE BOOL "" FORCE)

# Optional: examples/docs off to speed up
set(SFML_BUILD_EXAMPLES FALSE CACHE BOOL "" FORCE)
set(SFML_BUILD_DOC FALSE CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(SFML)

# --- Your executable ---
add_executable(LevelEditor
        Game_Objects/ButtonObject.cpp
        Entity/enemy1.cpp
        Entity/EntityObject.cpp
        game.cpp
        Entity/ground.cpp
        Game_Objects/Physics.cpp
        Entity/Player.cpp
        Setup.cpp
)

target_include_directories(LevelEditor PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(LevelEditor PRIVATE
        sfml-graphics
        sfml-window
        sfml-system
        sfml-audio
        sfml-network
)

# Helpful for MSVC: nicer warnings (optional)
if (MSVC)
    target_compile_options(LevelEditor PRIVATE /W4)
endif()

# Convenience: set startup working directory in CLion-friendly way
set_property(TARGET LevelEditor PROPERTY VS_DEBUGGER_WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}")