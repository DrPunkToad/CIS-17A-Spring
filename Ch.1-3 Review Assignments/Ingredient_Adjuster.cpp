#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
//constants for each ingredient, values are cups per 1 cookie
const float SUGAR = 0.03125, BUTTER = 0.02083333, FLOUR = 0.05729167;
// variable that holds user input
int user_cookies;
//variables that hold needed ingredients
double needed_sugar, needed_butter, needed_flour;

//ask and get user input
cout << "How many cookies would you like to make? ";
cin >> user_cookies;

//calculate needed sugar
needed_sugar = SUGAR * user_cookies;

//calculate needed butter
needed_butter = BUTTER * user_cookies;

//calculate needed flour
needed_flour = FLOUR * user_cookies;

//display ingredients
cout << "For " << user_cookies << " cookies you will need:\n";
cout << setprecision(2) << needed_sugar << " cups of sugar.\n";
cout << setprecision(2) << needed_butter << " cups of butter.\n";
cout << setprecision(2) << needed_flour << " cups of flour.\n";

return 0;
}