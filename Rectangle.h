#ifndef RECTANGLE_H
#define RECTANGLE_H value

#include "Shape.h"

class Rectangle : public Shape
{
public:
    Rectangle(Point2D pos, int color, int width, int height);

    void render();
private:
    
    int width, height;

};

#endif /* RECTANGLE_H */
