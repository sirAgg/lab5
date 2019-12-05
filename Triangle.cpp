#include "Triangle.h"

#include <stdio.h>


Triangle::Triangle(Point2D pos, int color, int base, int height)
    : Shape(pos,color), base(base), height(height)
{}

void Triangle::render()
{
    printf("TRIANGLE:\n\tpos: %s\n\tcolor: %08X\n\tbase: %d\n\theight: %d\n",
         position.to_string().c_str(), color, base, height );
}

