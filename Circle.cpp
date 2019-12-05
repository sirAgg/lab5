#include "Circle.h"

#include <stdio.h>

Circle::Circle(Point2D pos, int color, int radius)
    : Shape(pos, color), radius(radius)
{}

void Circle::render()
{
    printf("CIRCLE:\n\tpos: %s\n\tcolor: %08X\n\tradius: %d\n",
         position.to_string().c_str(), color, radius);
}
