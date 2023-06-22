#include "Odometer.h"

//variable definitions
int Odometer::mileage = 0;
int Odometer::milesDriven = -1;

//constructor
Odometer::Odometer(int miles)
{
    if (mileage >= 0 && mileage <= MAX_MILEAGE)
    {
        mileage = miles;
    }
    else
    {
        miles = 0;
    }
}

//overloaded function
int Odometer::operator++(int)
{
    if (mileage < MAX_MILEAGE)
    {
        mileage++;

        if (++milesDriven == 32)
        {
            milesDriven = 0;
            gaugeCapacity--;
        }
    }
    else if (mileage >= MAX_MILEAGE)
    {
        mileage = 0;
    }

    return mileage;
}