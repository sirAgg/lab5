#ifndef TRIANGLE
#define TRIANGLE value

#include "SDL.h"

#include "Shape.h"

class Triangle : public Shape
{
public:
    Triangle(Point2D pos, int color, int base, int height);
    void render(SDL_Renderer* renderer);
private:

    int base, height;

};


#endif /* TRIANGLE */
