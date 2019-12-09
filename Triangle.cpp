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

    int hb = base/2;
    int hh = height/2;
    SDL_RenderDrawLine(renderer, position.x-hb, position.y+hh, position.x+hb, position.y+hh );
    SDL_RenderDrawLine(renderer, position.x-hb, position.y+hh, position.x   , position.y-hh );
    SDL_RenderDrawLine(renderer, position.x+hb, position.y+hh, position.x   , position.y-hh );
}

