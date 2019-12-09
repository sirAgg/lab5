#ifndef RECTANGLE_H
#define RECTANGLE_H value

#include "SDL.h"
#include "Shape.h"

class Rectangle : public Shape
{
public:
    Rectangle(Point2D pos, Color color, int width, int height);

    void render(SDL_Renderer* renderer);
private:
    
    int width, height;

};

#endif /* RECTANGLE_H */
