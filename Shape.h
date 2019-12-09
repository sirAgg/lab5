#ifndef SHAPE_H
#define SHAPE_H value

#include "SDL.h"
#include "Point2D.h"

struct Color
{
    unsigned char a,b,g,r;

    Color() {}
    Color(unsigned int c)
    {
        r = *((unsigned char*)&c+3);
        g = *((unsigned char*)&c+2);
        b = *((unsigned char*)&c+1);
        a = *((unsigned char*)&c+0);
    }
    Color(unsigned char r, unsigned char g, unsigned char b, unsigned char a)
        :r(r),g(g),b(b),a(a) {}

    unsigned int toInt()
    {
        return *((unsigned int*)this);
    }
};

class Shape
{
public:
    Shape(Point2D pos, Color color);
    virtual ~Shape() {}

    virtual void render(SDL_Renderer* renderer) = 0;
protected:
    
    Point2D position;
    Color color;
};

#endif /* SHAPE_H */
