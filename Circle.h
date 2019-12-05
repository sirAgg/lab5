#ifndef CIRCLE_H
#define CIRCLE_H value

#include "Shape.h"

class Circle : public Shape
{
public:
    Circle(Point2D pos, int color, int radius);
    void render();
private:
    int radius;
};

#endif /* CIRCLE_H */

