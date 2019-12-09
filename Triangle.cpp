#include "Triangle.h"

#include <stdio.h>


Triangle::Triangle(Point2D pos, int color, int base, int height)
    : Shape(pos,color), base(base), height(height)
{}

void Triangle::render(SDL_Renderer* renderer)
{
//   printf("TRIANGLE:\n\tpos: %s\n\tcolor: %08X\n\tbase: %d\n\theight: %d\n",
//        position.to_string().c_str(), color, base, height );
    
    SDL_SetRenderDrawColor(renderer, *(((unsigned char*)&color)+3), *(((unsigned char*)&color)+2), *(((unsigned char*)&color)+1), *(((unsigned char*)&color)+0));

    int hb = base/2;
    int hh = height/2;
    SDL_RenderDrawLine(renderer, position.x-hb, position.y+hh, position.x+hb, position.y+hh );
    SDL_RenderDrawLine(renderer, position.x-hb, position.y+hh, position.x   , position.y-hh );
    SDL_RenderDrawLine(renderer, position.x+hb, position.y+hh, position.x   , position.y-hh );
}

