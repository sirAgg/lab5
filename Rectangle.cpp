#include "Rectangle.h"
#include <stdio.h>

Rectangle::Rectangle(Point2D pos, int color, int width, int height)
    : Shape(pos,color), width(width), height(height)
{}

void Rectangle::render(SDL_Renderer* renderer)
{
//   printf("RECTANGLE:\n\tpos: %s\n\tcolor: %08X\n\twidht: %d\n\theight: %d\n",
//        position.to_string().c_str(), color, width, height );

    SDL_SetRenderDrawColor(renderer, *(((unsigned char*)&color)+3), *(((unsigned char*)&color)+2), *(((unsigned char*)&color)+1), *(((unsigned char*)&color)+0));

    int hw = width/2;
    int hh = height/2;
    SDL_RenderDrawLine(renderer, position.x-hw, position.y-hh, position.x+hw, position.y-hh );
    SDL_RenderDrawLine(renderer, position.x+hw, position.y-hh, position.x+hw, position.y+hh );
    SDL_RenderDrawLine(renderer, position.x+hw, position.y+hh, position.x-hw, position.y+hh );
    SDL_RenderDrawLine(renderer, position.x-hw, position.y+hh, position.x-hw, position.y-hh );
}
