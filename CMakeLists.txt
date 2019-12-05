cmake_minimum_required( VERSION 3.10 )

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

include_directories("deps" "deps/include")
link_directories(BEFORE "deps")


target_link_libraries(task2 libSDL2-2.0.so)
