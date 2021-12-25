#include "soru.hpp"
#include <math.h>
#include <cmath>


void KOMP::Kompleks::print()
{
        if(sanal > 0)
            cout << reel << " + " << sanal << "i" << endl;
        else if(sanal < 0)
            cout << reel << " - " << -sanal << "i" << endl;
        else
            cout << reel << endl;
}

void KOMP::Kompleks::add(Kompleks &sayii)
{
        
        reel=sayii.getX()+reel;
        sanal=sanal+sayii.getY();
}


void KOMP::Kompleks::subtract(Kompleks &sayii)
{ 
        reel=reel-sayii.getX();
        sanal=sanal-sayii.getY();
        

}

void KOMP::Kompleks::multiply(Kompleks &sayii)
{
        
         
        double re_carpma = reel*sayii.getX()-(sanal*sayii.getY()*(-1));
        return setX(re_carpma);
        double sa_carpma =(reel*sayii.getY())+(sanal*sayii.getX());
        return setY(sa_carpma);

        

        //z1⋅z2=(2−i)⋅(3+2i)=6+4i−3i−2i2

        //result.reel = c1.reel*c2.reel - c1.imaginary*c2.imaginary;
        //result.imaginary = c1.reel*c2.imaginary + c1.imaginary*c2.reel;

}

void KOMP::Kompleks::magnitude(Kompleks &sayii)
{
        double a= sqrt(pow(sayii.getX()-reel+sayii.getY()-sanal,2.0));
        //return a;
}


void  KOMP::Kompleks::phase()
{
        double faz= atan(reel/sanal)*180 / 3.14;
        //return faz;
        //return faz;
        //angle: Faz açısı.

        // karmaşık sayının argümentini veya faz açısının değerini [π,-π] arasında verir. verilen değerin açısını bulabilmek için 180/π ile çarpmak gerekir. result = atan (param) * 180 / PI

}
