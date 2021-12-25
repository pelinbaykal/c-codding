//
//  Point2D.cpp
//  GeoBox
//
//  Created by Ziya Ercan on 22.04.2020.
//  Copyright © 2020 ISU. All rights reserved.
//

#include "Point2D.hpp"


void GeoBox::Point2D::getLocation()
{
    std::cout<<"X = "<<m_x<<" "
             <<"Y = "<<m_y<<'\n';
}

double GeoBox::Point2D::distance(double x, double y)
{
    return std::sqrt(std::pow(m_x - x,2.0) + std::pow(m_y-y,2.0));
}

double GeoBox::Point2D::distance(const Point2D &point)
{
    return std::sqrt(std::pow(m_x - point.getX(),2.0) + std::pow(m_y-point.getY(),2.0));

}

void GeoBox::Point2D::add(Point2D &point)
{
    m_x+=point.getX();
    m_y+=point.getY();
}

void GeoBox::Point2D::offset(double offset_x, double offset_y)
{
    m_x+=offset_x;
    m_y+=offset_y;
}

GeoBox::Quadrant GeoBox::Point2D::getQuadrant()
{
    if (m_x > 0.0 && m_y > 0.0)
        return Quadrant::FIRST;
    else if (m_x > 0.0 && m_y < 0.0)
        return Quadrant::FOURTH;
    else if (m_x < 0.0 && m_y > 0.0)
        return Quadrant::SECOND;
    else if (m_x < 0.0 && m_y < 0.0)
        return Quadrant::THIRD;
    else if (m_x == 0.0 && m_y == 0.0)
    return Quadrant::ORIGIN;
    else
        return Quadrant::ONAXIS;
}

void GeoBox::Point2D::printQuadrant(){
    
    switch (getQuadrant()) {
        case (Quadrant::FIRST):
            std::cout<<"The point is in 1st quadrant"<<'\n';
            break;
            
        default:
            break;
    }
    
}


