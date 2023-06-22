#ifndef FUEL_GAUGE_H_
#define FUEL_GAUGE_H_

class FuelGauge
{
    private:
        const int MAX_CAPACITY = 22; //holds max fuel capacity
        static int fuelCapacity;  //holds the fuel capacity
    
    public:
        FuelGauge() //default constructor
        { }

        int getFuelCapacity() const
        { 
            return fuelCapacity; 
        }

        //overloaded operator functions
        int operator ++(int);
        int operator --(int);

};
#endif