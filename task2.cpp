#include <stdio.h>

#include "SDL.h"

#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"

int main(int argc, char** argv)
{
    printf("Hello World!\n");    

    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window* window = SDL_CreateWindow("Hello there", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600,400, SDL_WINDOW_SHOWN);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
    SDL_Event* event;
    Rectangle rect  = Rectangle(Point2D(50.0f,50.0f), 0x00FF00FF, 400,300);
    Triangle tri    = Triangle (Point2D(10.0f,30.0f), 0xFF0000FF, 300,300);
    Circle circ     = Circle   (Point2D(200.0f,200.0f), 0x00FFFFFF, 150);
    SDL_SetRenderDrawColor(renderer, 0, 50, 0, 255);
    SDL_RenderClear(renderer);

    //SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);
    //SDL_RenderDrawLine(renderer, 100,100,500,300);
    rect.render(renderer);
    tri.render(renderer);
    circ.render(renderer);
    SDL_RenderPresent(renderer);

    SDL_Delay(3000);

    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}

