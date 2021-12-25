#ifndef Triangle_hpp
#define Triangle_hpp

#include <iostream>
#include <array>
#include <cmath>

#include "constants.h"

struct Point2D {
    double x;
    double y;
};

struct Triangle {
  
    Point2D point1;
    Point2D point2;
    Point2D point3;
    std::array<Point2D, 3> points;
};

bool isTriangle(const Triangle &tri);

void getType(const Triangle &tri );
double getInfo(const Triangle &tri);
double area(const Triangle &tri);
double perimeter(const Triangle &tri);
double getLength(const Triangle &tri);
double getAngles(const Triangle &tri);




#endif /* func_hpp */