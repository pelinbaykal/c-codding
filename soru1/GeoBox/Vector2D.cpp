//
//  Vector2D.cpp
//  GeoBox
//
//  Created by Ziya Ercan on 23.04.2020.
//  Copyright © 2020 ISU. All rights reserved.
//

#include "Vector2D.hpp"
#include <cmath>
#include <vector>
#include <math.h>       /* sin */
#define PI 3.14159265



void GeoBox::Vector2D::print()
{
    std::cout<<"ilk nokta:"<<m_point1.getX()<<","<<m_point1.getY()<<")\n";
    std::cout<<"ikinci nokta:"<<m_point2.getX()<<","<<m_point2.getY()<<")\n";
}
double GeoBox::Vector2D::length(){
    return sqrt(pow(m_point2.getX()-m_point1.getX(),2)+pow(m_point2.getY()-m_point1.getY(),2));
}

double GeoBox::Vector2D::angle(){
    //|VW→|2=|V|2+|W|2−2|V|.|W|.cosθ =  −2|V|.|W|.cosθ
    //cosθ=x1*y1+x2*y2/kök(x1*2+x2*2)*kök(y1*2+y2*2)
    int a= (atan2((m_point2.getY()-m_point1.getY()),(m_point2.getX()-m_point1.getX())))* (180.0/PI);
    return a;


}
void GeoBox::Vector2D::add(Vector2D &vector){

    m_point2.setX(m_point2.getX()+(vector.m_point2.getX()));
    m_point2.setY(m_point2.getY()+(vector.m_point2.getY()));

}

void GeoBox::Vector2D::subtract(Vector2D &vector){

    m_point2.setX(vector.m_point2.getX()-m_point1.getX());
    m_point2.setY(vector.m_point2.getX()-m_point1.getY());

}

void GeoBox::Vector2D::scale(double deger){

    m_point2.setX((m_point2.getX())*deger);
    m_point2.setY((m_point2.getY())*deger);

}

void GeoBox::Vector2D::normalize(){
    //tüm değerlerin toplamı vektörün boyutunu 1 yapar.
    double normalizeX2=((m_point2.getX())-m_point1.getX())/length();
    double normalizeY2=((m_point2.getY())-m_point1.getY())/length();
    m_point1.setX(0);
    m_point2.setY(0);
    m_point2.setX(normalizeX2);
    m_point2.setY(normalizeY2);
}

void GeoBox::Vector2D::transform(double aci){
    //x'=x*cos(aci)-y*sin(aci)
    //y'=x*sin(aci)+y*cos(aci)
    double newa = angle() - aci;
    std::cout<<newa<<std::endl;
    m_point2.setX(m_point1.getX()+length()*cos(newa*(PI/180)));
    m_point2.setY(m_point1.getY()+length()*sin(newa*(PI/180)));

}

void GeoBox::Vector2D::multiply(const Vector2D &vector){
    double aci= abs(angle()-vector.angle());
    double carpma=length()*vector.length()*sin(aci*(PI/180));
     if(vector.m_point2.getY()<m_point2.getY()){
        carpma*=-1; 
    }
    std::cout<<"The product of vectors: "<<carpma<<std::endl;
    
}



