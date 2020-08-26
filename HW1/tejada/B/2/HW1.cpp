//
// Created by Jose Luis Tejada on 8/24/20.
//
#include <iostream>
#include "Automobile2.h"

//Unchanged Main from directory 1.

int main(int argc, char* argv[]){
    //New vehicle with id 123, miles 5550, and last maintinance 12/10/18
    Automobile *auto1 = new Automobile(123,5550,12,10,18  );
    //New vehicle with id 456, miles 1000, and last maintinance 5/10/20
    Automobile *auto2 = new Automobile(456,1000,5,10,20  );
    std::cout << auto1->toString() << std::endl;
    std::cout << auto2->toString() << std::endl;

    return 0;
}
