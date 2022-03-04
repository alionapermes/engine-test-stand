cmake_minimum_required(VERSION 3.10)
project(engine-test-stand)

if (DEBUG)
    add_compile_options(-g3 -ggdb)
endif()

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(EXEC ets)
set(SRC teststand.cpp
    engine.cpp
    environment.cpp
)

add_executable(${EXEC} ${SRC})

