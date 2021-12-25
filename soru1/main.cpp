///
//  main.cpp
//  GeoBox
//
//  Created by Ziya Ercan on 22.04.2020.
//  Copyright © 2020 ISU. All rights reserved.
//
#include <iostream>

#include "GeoBox/Point2D.hpp"
#include "GeoBox/Triangle.hpp"
#include "GeoBox/Vector2D.hpp"

int main(int argc, const char *argv[]) {
	GeoBox::Point2D point1{0.0, 0.0};
	GeoBox::Point2D point2{4.0, 4.0};
    GeoBox::Point2D point11{0.0, 0.0};
    GeoBox::Point2D point22{3.0, 4.0};

	GeoBox::Vector2D vector1{point1, point2};
    GeoBox::Vector2D vector2{point11, point22};

    //vector1.print();
    //vector1.transform(45);
    //vector1.print();

    //vector1.normalize();
    //vector1.scale(5);
	//std::cout<<vector1.length()<<std::endl;
    //vector1.add(vector2);
    //vector1.subtract(vector2);


    Triangle tri1{0.0, 0.0, 1.0, 1.0, 3.0, 2.0};

    std::cout << isTriangle(tri1) << '\n';



    getType(tri1);
    area(tri1);
    perimeter(tri1);
    getLength(tri1);
    getAngles(tri1);


	return 0;
}
