cmake_minimum_required( VERSION 3.7 )

#set(CMAKE_CXX_FLAGS "-v")
include_directories(deps/include deps)


# use, i.e. don't skip the full RPATH for the build tree
SET(CMAKE_SKIP_BUILD_RPATH  FALSE)

# when building, don't use the install RPATH already
# (but later on when installing)
SET(CMAKE_BUILD_WITH_INSTALL_RPATH FALSE) 

# the RPATH to be used when installing
SET(CMAKE_INSTALL_RPATH "")

# don't add the automatically determined parts of the RPATH
# which point to directories outside the build tree to the install RPATH
SET(CMAKE_INSTALL_RPATH_USE_LINK_PATH FALSE)

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

set_target_properties(task2 PROPERTIES LINK_FLAGS "-Wl,-rpath,./")

target_link_libraries(task2 SDL2)
