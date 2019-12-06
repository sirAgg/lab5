cmake_minimum_required( VERSION 3.10 )
include_directories("deps" "deps/winin/include/")

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

add_executable(task2 WIN32
    task2.cpp
    Point2D.cpp
    Shape.cpp
    Rectangle.cpp
    Triangle.cpp
    Circle.cpp
)
SET(CMAKE_MFC_FLAG 2) 
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS YES)
configure_file("deps/SDL2.dll" "${CMAKE_BINARY_DIR}/SDL2.dll" COPYONLY)
#target_link_libraries(task2 ${CMAKE_SOURCE_DIR}/deps/SDL2.lib ${CMAKE_SOURCE_DIR}/deps/SDL2main.lib)
target_link_libraries(task2 ${CMAKE_SOURCE_DIR}/deps/SDL2.lib ${CMAKE_SOURCE_DIR}/deps/SDL2main.lib )
#target_link_libraries(task2 SDL2.lib)