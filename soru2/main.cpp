#include <iostream>
#include "soru.hpp"

int main(int argc, const char * argv[]) {
  
    KOMP::Kompleks sayi1{3.0, 4.0};
    KOMP::Kompleks sayi2{2.0, 1.0};
    sayi1.add(sayi2);
    sayi1.subtract(sayi2);
    sayi1.multiply(sayi2);
    sayi1.magnitude(sayi2);
    sayi1.phase();
    sayi1.print();


    
    return 0;
}
