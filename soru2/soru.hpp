#ifndef soru_hpp
#define soru_hpp

#include <iostream>
#include <array>
#include "math.h"
using namespace std;


namespace KOMP {
    class Kompleks {
        double reel;
        double sanal;

    public:

        Kompleks() = default; // default c'tor

        Kompleks(double r, double s) {
            reel = r;
            sanal = s;
        }

        void setX(double r) { reel = r; }

        void setY(double s) { sanal = s; }

        double getX() const { return reel; }

        double getY() const { return sanal; }

        void print();

        void add(Kompleks &sayii);

        void subtract(Kompleks &sayii);

        void multiply(Kompleks &sayii);

        void magnitude(Kompleks &sayii);

        void phase();
    };
}
#endif
