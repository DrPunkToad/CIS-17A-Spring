#include "FuelGauge.h"
//define fuelCapacity
int FuelGauge::fuelCapacity = 0;

//overloaded ++ operator
int FuelGauge::operator++(int)
{
    if (fuelCapacity < MAX_CAPACITY)
    {
        fuelCapacity++;
    }
    else
    {
        fuelCapacity = MAX_CAPACITY;
    }

    return fuelCapacity;
}

//overloaded -- operator
int FuelGauge::operator--(int)
{
   if (fuelCapacity > 0)
   {
        fuelCapacity--;
   } 
   else 
   {
        fuelCapacity = 0;
   }

   return fuelCapacity;
}
