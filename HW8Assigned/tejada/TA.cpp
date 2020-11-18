#include <iostream>
#include "Teacher.h"
#include "Student.h"
#include "TA.h"

TA::TA(long ssn, long phone, long _SSN, long _phone, double _contactHours, int _coursesTaught, double credits,
       int coursesTaken) : Person(ssn, phone), Student(_SSN, _phone, credits, coursesTaken),
                           Teacher(_SSN, _phone, _contactHours, _coursesTaught) {
   std::cout << "TA" << std::endl;
} 
                      
