//
// Created by Jose Luis Tejada on 8/24/20.
//

#ifndef HW1_AUTOMOBILE2_H
#define HW1_AUTOMOBILE2_H

#include <string>

class Automobile {
private:
    int vehicle_id;
    float miles;
    //Last maintinance date
    int month;
    int day;
    int year;
public:
    Automobile(int _vehicle_id, float _miles, int mm, int dd, int yy);
    int getVehicle_Id();
    float getMiles();
    std::string getMaintinance();
    std::string toString();
    void setMaintinance(int mm, int dd, int yy);
};


#endif //HW1_AUTOMOBILE2_H
