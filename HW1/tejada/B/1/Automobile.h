//
// Created by Jose Luis Tejada on 8/24/20.
//

#ifndef HW1_AUTOMOBILE_H
#define HW1_AUTOMOBILE_H

#include <string>

class Automobile {
private:
    int vehicle_id;
    float miles;
    std::string last_maintinance;
public:
    Automobile(int _vehicle_id, float _miles, int mm, int dd, int yy);
    int getVehicle_Id();
    float getMiles();
    std::string getMaintinance();
    std::string toString();
};


#endif //HW1_AUTOMOBILE_H
