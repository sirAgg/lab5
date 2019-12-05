#include <stdio.h>
#include <vector>

#include "Shape.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"

void testRendering(const std::vector<Shape*>& shapes)
{
    for (auto shape : shapes)
        shape->render();
}

int main(void)
{
    Rectangle rect  = Rectangle(Point2D(0.0f,0.0f), 0xFF0000FF, 4,3);
    Triangle tri    = Triangle (Point2D(1.0f,3.0f), 0x00FF00FF, 6,2);
    Circle circ     = Circle   (Point2D(0.3f,4.0f), 0x0000FFFF, 8);
    
    std::vector<Shape*> shapes;
    shapes.push_back(&rect); 
    shapes.push_back(&tri); 
    shapes.push_back(&circ); 


    testRendering(shapes);

    return 0;
}
