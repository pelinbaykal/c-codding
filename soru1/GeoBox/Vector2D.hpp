//
//  Vector2D.hpp
//  GeoBox
//
//  Created by Ziya Ercan on 23.04.2020.
//  Copyright © 2020 ISU. All rights reserved.
//
#ifndef Vector2D_hpp
#define Vector2D_hpp

#include <iostream>
#include "Point2D.hpp"

namespace GeoBox{

class Vector2D{
    
    Point2D m_point1;
    Point2D m_point2;
    
public:
    Vector2D() = default;
    Vector2D(Point2D &point1, Point2D &point2)
    {
        m_point1 = point1;
        m_point2 = point2;
    }

    void print();
    double length();
    void add(Vector2D &vector2);
    void subtract(Vector2D &vector);
    void scale(double deger);
    void normalize();
    void transform(double aci);
    double angle();

    double transform(Vector2D &vector);
    //void multiply(Vector2D &vector);



};
}
#endif /* Vector2D_hpp */
