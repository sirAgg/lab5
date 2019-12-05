cmake_minimum_required( VERSION 3.7 )

include_directories( CMAKE_INCLUDE_DIRECTORIES_BEFORE 
    deps/SDL/include
    deps/SDL/builds/include
)
#add_definitions(-DUSING_GENERATED_CONFIG_H="")
add_subdirectory( "deps/SDL/" "deps/SDL/builds/")
include_directories(${SDL2_INCLUE_DIRS})
include_directories(${SDL2_BINARY_DIR})

#set(CMAKE_CXX_FLAGS "-v")

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

target_link_libraries(task2 SDL2)
