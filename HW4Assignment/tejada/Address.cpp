#include <string>
#include "Address.h"

Address::Address(const std::string &_street, const std::string &_city, const std::string &_state, const int _zip) : street(_street), city(_city), state(_state) , zip(_zip)  {
}

int Address::getZipCode( ) {
   return zip;
}

std::string Address::getAddress( ){
    std::string _street = street;
    std::string _city = city;
    std::string _state = state;
    std::string _zip = std::to_string(zip);
    std::string address = _street + '\n' + _city  + '\n' + _state + '\n' + _zip  + '\n';
    return address;
}
