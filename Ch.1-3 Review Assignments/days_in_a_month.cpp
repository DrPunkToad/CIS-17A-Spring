#include <iostream>
using namespace std;

int main()
{
//holds month and year that user inputs
int month, year, days;
bool leap_year;

//ask for user input
cout << "Enter a month (1-12): ";
cin >> month;
cout << "Enter a year: ";
cin >> year;

//loop to validate user input
if (month < 1 || month > 12)
{
    cout << "ERROR: month integer is not between 1 and 12.";
}
//validate leap year
if (month == 2)
{
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        days = 29;
    }
    else
    {
        days = 28;  
    }
           
}

//loop to determine how many days
else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month ==12 )
{
    days = 31;
}
else 
{
    days = 30;
}

//display output
cout << days << " days"; 

return 0;
 
}