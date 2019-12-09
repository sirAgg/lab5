#ifndef CIRCLE_H
#define CIRCLE_H value

#include "SDL.h"

#include "Shape.h"

class Circle : public Shape
{
public:
    Circle(Point2D pos, Color color, int radius);
    void render(SDL_Renderer* renderer);
private:
    int radius;
};

#endif /* CIRCLE_H */

