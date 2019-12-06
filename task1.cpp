#include <stdio.h>
#include <vector>

#include "SDL.h"

#include "Shape.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"

void testRendering(SDL_Renderer* renderer, const std::vector<Shape*>& shapes)
{
    SDL_SetRenderDrawColor(renderer, 0, 50, 0, 255);
    SDL_RenderClear(renderer);

    for (auto shape : shapes)
        shape->render(renderer);
    
    SDL_RenderPresent(renderer);
}

int main(void)
{
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window* window = SDL_CreateWindow("Hello there", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600,400, SDL_WINDOW_SHOWN);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);


    Rectangle rect  = Rectangle(Point2D(50.0f,50.0f),   0x00FF00FF, 400,300);
    Triangle tri    = Triangle (Point2D(10.0f,30.0f),   0xFF0000FF, 300,300);
    Circle circ     = Circle   (Point2D(200.0f,200.0f), 0x00FFFFFF, 150);


    
    std::vector<Shape*> shapes;
    shapes.push_back(&rect); 
    shapes.push_back(&tri); 
    shapes.push_back(&circ); 


    testRendering(renderer, shapes);

    SDL_Delay(2000);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
