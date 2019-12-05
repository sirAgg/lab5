cmake_minimum_required( VERSION 3.0 )

set(CMAKE_BINARY_DIR "deps/SDL2-2.0.10/build/")

include_directories( CMAKE_INCLUDE_DIRECTORIES_BEFORE 
    deps/SDL2-2.0.10/include
    deps/SDL2-2.0.10/builds/include
)
add_subdirectory( "deps/SDL2-2.0.10/" "deps/SDL2-2.0.10/builds/")
include_directories(${SDL2_INCLUE_DIRS})

set(CMAKE_CXX_FLAGS "-v")

project(task1)
add_executable(task1
    task1.cpp
    Point2D.cpp
    Shape.cpp
    Rectangle.cpp
    Triangle.cpp
    Circle.cpp
)

project(task2)
add_executable(task2
    task2.cpp
    Point2D.cpp
    Shape.cpp
    Rectangle.cpp
    Triangle.cpp
    Circle.cpp
)

target_link_libraries(task2 ${SDL2_LIBRARY})
