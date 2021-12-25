//
//  Point2D.hpp
//  GeoBox
//
//  Created by Ziya Ercan on 22.04.2020.
//  Copyright © 2020 ISU. All rights reserved.
//

#ifndef Point2D_hpp
#define Point2D_hpp

#include <iostream>
#include <cmath>

namespace GeoBox{

enum class Quadrant
{
    FIRST,
    SECOND,
    THIRD,
    FOURTH,
    ORIGIN,
    ONAXIS,

};

class Point2D
{
    double m_x;
    double m_y;
    
    Quadrant getQuadrant(); //private member fcn

public:
    
    Point2D() = default; // default c'tor
    
    Point2D(double x, double y)
    {
        m_x = x;
        m_y = y;
    }
    
    void setX(double x){m_x = x;}
    void setY(double y){m_y = y;}
    
    double getX()const {return m_x;}
    double getY()const {return m_y;}
    
    void getLocation();
    double distance(double x=0.0, double y=0.0);
    double distance(const Point2D &point);
    void add(Point2D &point);
    void offset(double offset_x=0.0, double offset_y=0.0);
    void printQuadrant();
    
};

}
#endif /* Point2D_hpp */
