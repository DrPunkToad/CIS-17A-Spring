#ifndef ODOMETER_H_
#define ODOMETER_H_

#include "FuelGauge.h"

class Odometer
{
    private:
        const int MAX_MILEAGE = 999999; //max odometer mileage
        static int mileage;  //hold the current mileage of the car
        static int milesDriven;  //counter 
    
        FuelGauge gaugeCapacity;
    public:
        Odometer(int);  //constructor

        int getMilesDriven() const
        {
            return milesDriven;
        }

        int getCurrentMileage() const
        {
            return mileage;
        }

        //overloaded operator function
        int operator ++(int);


};
#endif