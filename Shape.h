#ifndef SHAPE_H
#define SHAPE_H value

#include "Point2D.h"

class Shape
{
public:
    Shape(Point2D pos, int color);
    virtual ~Shape() {}

    virtual void render() = 0;
protected:
    
    Point2D position;
    int color;

};

#endif /* SHAPE_H */
