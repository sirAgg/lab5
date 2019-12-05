#include "Rectangle.h"

#include <stdio.h>

Rectangle::Rectangle(Point2D pos, int color, int width, int height)
    : Shape(pos,color), width(width), height(height)
{}

void Rectangle::render()
{
    printf("RECTANGLE:\n\tpos: %s\n\tcolor: %08X\n\twidht: %d\n\theight: %d\n",
         position.to_string().c_str(), color, width, height );
}
