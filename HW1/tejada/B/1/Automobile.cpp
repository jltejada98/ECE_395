//
// Created by Jose Luis Tejada on 8/24/20.
//

#include "Automobile.h"

Automobile::Automobile(int _vehicle_id, float _miles, int mm, int dd, int yy) {
    vehicle_id = _vehicle_id;
    miles = _miles;
    last_maintinance = ""+std::to_string(mm)+"/"+std::to_string(dd)+"/"+std::to_string(yy);
}

int Automobile::getVehicle_Id(){
    return vehicle_id;
}

float Automobile::getMiles(){
    return miles;
}

std::string Automobile::getMaintinance(){
    return last_maintinance;
}

std::string Automobile::toString(){
    std::string automobile = std::to_string(vehicle_id) + " ";
    automobile += std::to_string(miles) + " ";
    automobile += last_maintinance + "\n";

    return automobile;
}






