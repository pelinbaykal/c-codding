//
//  Triangle.cpp
//  GeoBox
//
//  Created by Ziya Ercan on 23.04.2020.
//  Copyright © 2020 ISU. All rights reserved.
//

#include "Triangle.hpp"
#include <math.h>



void movePointX(Point2D &point, double offsetx)
{
    point.x += offsetx;
}
void movePointX(Point2D *point, double offsetx)
{
    point->x += offsetx;
}

double p2pDistance(const Point2D &point1, const Point2D &point2)
{
    return sqrt(pow((point1.x-point2.x), 2.0) + pow((point1.y-point2.y), 2.0));
}

double p2pDistance(const Point2D *point1, const Point2D *point2)
{
    return sqrt(pow((point1->x-point2->x), 2.0) + pow((point1->y-point2->y), 2.0));
}

double calcSlope(const Point2D &point1, const Point2D &point2)
{
    return ((point1.y - point2.y)/(point1.x - point2.x));
}

double calcSlopeAngle(const Point2D &point1, const Point2D &point2)
{
    return atan((point1.y - point2.y)/(point1.x - point2.x))*Constants::r2d;
}

bool isTriangle(const Triangle &tri)
{
    double slope{calcSlope(tri.points[0], tri.points[1])};
    
    double sayi=((tri.points[2].y - tri.points[0].y - slope*(tri.points[2].x - tri.points[0].x)));
    return sayi;
}
void getType(const Triangle &tri ){
    double sayi=isTriangle(tri);
    if (sayi==1){
          if(((tri.points[0].x-tri.points[0].y)==(tri.points[1].x-tri.points[1].y==((tri.points[2].x)-(tri.points[2].y)))))
          {
                std::cout<<"es kenar"<<'\n';
          }
          else if(((tri.points[0].x)-(tri.points[0].y))!=((tri.points[1].x)-(tri.points[1].y))!=((tri.points[2].x)-(tri.points[2].y)))
          {
                std::cout<<"cesit kenar"<<'\n';

          }
          else{
              std::cout<<"ikiz kenar"<<'\n';
          }

        }
}
double getInfo(const Triangle &tri){
    std::cout<<"ÜÇGENİN İÇ AÇILARI:"<<'\n';
    double slope{calcSlope(tri.points[0], tri.points[1])};
  } 
double area(const Triangle &tri){
    std::cout<<"ÜÇGENİN ALANI:"<<'\n';
    return (((tri.points[2].y)*((tri.points[2].x)-(tri.points[0].x)/2)));
  }

double perimeter(const Triangle &tri)
  {
    std::cout<<"ÜÇGENİN ÇEVRESİ:"<<'\n';
    return ((tri.points[0].x)-(tri.points[0].y))+((tri.points[1].x)-(tri.points[1].y))+((tri.points[2].x)-(tri.points[2].y));
  }

double getLength(const Triangle &tri)
  {
    std::cout<<"ÜÇGENİN KENAR UZUNLUKLARI:"<<'\n';
    return (((tri.points[0].x)-(tri.points[0].y)));


  }  
double getAngles(const Triangle &tri) {//eğim(angle) ile bul
    std::cout << "ÜÇGENİN İÇ AÇILARI:" << '\n';
    return (((tri.points[0].x) - (tri.points[0].y))) + ((tri.points[1].x) - (tri.points[1].y)) +
           ((tri.points[2].x) - (tri.points[2].y)) * ((-(tri.points[0].x) - (tri.points[0].y))) +
           ((tri.points[1].x) - (tri.points[1].y)) + (((tri.points[2].x) - (tri.points[2].y))) *
(-2 * ((tri.points[1].x) - (tri.points[1].y)) +((tri.points[2].x) - (tri.points[2].y))) /
(2 * ((tri.points[1].x) - (tri.points[1].y)) +((tri.points[2].x) - (tri.points[2].y)));

}