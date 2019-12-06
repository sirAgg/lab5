#include "Triangle.h"

#include <stdio.h>


Triangle::Triangle(Point2D pos, int color, int base, int height)
    : Shape(pos,color), base(base), height(height)
{}

void Triangle::render(SDL_Renderer* renderer)
{
    printf("TRIANGLE:\n\tpos: %s\n\tcolor: %08X\n\tbase: %d\n\theight: %d\n",
         position.to_string().c_str(), color, base, height );
    
    SDL_SetRenderDrawColor(renderer, *(((unsigned char*)&color)+3), *(((unsigned char*)&color)+2), *(((unsigned char*)&color)+1), *(((unsigned char*)&color)+0));

    SDL_RenderDrawLine(renderer, position.x, position.y, position.x+base, position.y);
    SDL_RenderDrawLine(renderer, position.x, position.y, position.x+base/2, position.y+height);
    SDL_RenderDrawLine(renderer, position.x+base, position.y, position.x+base/2, position.y+height);
}

