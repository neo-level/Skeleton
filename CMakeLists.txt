cmake_minimum_required(VERSION 3.16)
project(Skeleton)

set(CMAKE_CXX_STANDARD 17)

add_library(inc lib/game.cpp app/main.cpp)

target_include_directories(inc PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/inc>
        $<INSTALL_INTERFACE:include>
        )

add_executable(Skeleton app/main.cpp)
target_link_libraries(Skeleton PUBLIC inc)