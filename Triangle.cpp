#include "Triangle.h"

#include <stdio.h>


Triangle::Triangle(Point2D pos, Color color, int base, int height)
    : Shape(pos,color), base(base), height(height)
{}

void Triangle::render(SDL_Renderer* renderer)
{
    printf("TRIANGLE:\n\tpos: %s\n\tcolor: %08X\n\tbase: %d\n\theight: %d\n",
         position.to_string().c_str(), color.toInt(), base, height );
    
    SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);

    SDL_RenderDrawLine(renderer, position.x, position.y, position.x+base, position.y);
    SDL_RenderDrawLine(renderer, position.x, position.y, position.x+base/2, position.y+height);
    SDL_RenderDrawLine(renderer, position.x+base, position.y, position.x+base/2, position.y+height);
}

