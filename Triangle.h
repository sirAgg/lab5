#ifndef TRIANGLE
#define TRIANGLE value

#include "Shape.h"

class Triangle : public Shape
{
public:
    Triangle(Point2D pos, int color, int base, int height);
    void render();
private:

    int base, height;

};


#endif /* TRIANGLE */
