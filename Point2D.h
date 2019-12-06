#ifndef POINT_2D
#define POINT_2D value

#include <string>

class Point2D
{
public:
    Point2D();
    Point2D(float nx, float ny);
    Point2D(const Point2D& other);

    float distance_to(Point2D& other);
    std::string to_string();

    Point2D operator+ (const Point2D& other);
    Point2D operator- (const Point2D& other);
    void operator= (const Point2D& other);
    bool operator== (const Point2D& other);

    float x,y;
private:
};

#endif /* ifndef POINT_2D */
