//
// Created by Jose Luis Tejada on 8/24/20.
//

#include "Automobile2.h"

Automobile::Automobile(int _vehicle_id, float _miles, int mm, int dd, int yy) {
    vehicle_id = _vehicle_id;
    miles = _miles;
    month = mm;
    day = dd;
    year = yy;
}

int Automobile::getVehicle_Id(){
    return vehicle_id;
}

float Automobile::getMiles(){
    return miles;
}

std::string Automobile::getMaintinance(){
    return ""+std::to_string(month)+"/"+std::to_string(day)+"/"+std::to_string(year);
}

void Automobile::setMaintinance(int mm, int dd, int yy){
    month = mm;
    day = dd;
    year = yy;
    return;
}

std::string Automobile::toString(){
    std::string automobile = std::to_string(vehicle_id) + " ";
    automobile += std::to_string(miles) + " ";
    automobile += Automobile::getMaintinance() + "\n";
    return automobile;
}
