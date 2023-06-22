#include "FuelGauge.h"
#include "Odometer.h"
#include <iomanip>
#include <iostream>
using namespace std;

void timer();
void refillTank(FuelGauge &);
void simulator(Odometer &, const FuelGauge &);

int main()
{
    FuelGauge gauge;
    Odometer meter(0);

    cout << "Auto Instrument Simulator\n\n";

    refillTank(gauge);
    simulator(meter, gauge);
    
    return 0;
}

void refillTank(FuelGauge &gauge)
{
    cout << "Fuel Empty |";

    for (int i = gauge.getFuelCapacity(); i < 22 ; i++ )
    {
        gauge++;
        timer();
        cout << (i+1) << "*|";
    }

    cout << " F\n\n";
}

void simulator(Odometer &meter, const FuelGauge &gauge)
{
    while(gauge.getFuelCapacity() >= 1)
    {
        meter++;

        if(gauge.getFuelCapacity() >= 3)
        {
            cout << "miles driven: " << setw(25) << left << meter.getCurrentMileage();
			cout << "gas gauge: " << right << gauge.getFuelCapacity() << "\n";
        }
        else if (gauge.getFuelCapacity() > 0 && gauge.getFuelCapacity() <= 3)
		{
			cout << "miles driven: " << setw(25) << left << meter.getCurrentMileage();
			cout << "gas gauge: "    << right << gauge.getFuelCapacity() << "\n";
		}
		else if (gauge.getFuelCapacity() == 0)
		{
            cout << "\nOut of Fuel!\n";
		}

      timer();
    }
}

void timer()
{
  static int seconds = 5;
	static int timeLeft = 0;
	static int counter = 193559599;

	while (timeLeft > 0)
	{
		timeLeft--;
	}

	timeLeft = counter - seconds;
}