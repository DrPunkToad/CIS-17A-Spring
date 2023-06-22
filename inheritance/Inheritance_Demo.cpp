#include <iostream>
#include <string>
#include "CustomerInfo.h"
#include "PersonInfo.h"

using namespace std;

int main()
{
    string lastName, firstName, address, city, state, zip, phone;
    int number;
    char selection;
    bool list;

    CustomerInfo person1;
 
    //input info
    cout << "First Name: ";
    cin >> firstName;
    person1.setFirst(firstName);

    cout << "Last Name: ";
    cin >> lastName;
    cin.ignore();
    person1.setLast(lastName);

    cout << "Address: ";
    getline(cin, address);
    person1.setAddress(address);

    cout << "City: ";
    getline(cin, city);
    person1.setCity(city);

    cout << "State: ";
    cin >> state;
    person1.setState(state);

    cout << "Zip: ";
    cin >> zip;
    person1.setZip(zip);

    cout << "Phone: ";
    cin >> phone;
    person1.setPhone(phone);

    cout << "Customer Number: ";
    cin >> number;
    person1.setCustomerNum(number);
    
    cout << "Would they like to subscribe to the mailing list? Y or N" << endl;
    cin >> selection;
    if (selection == 'Y'||"y")
    {
        person1.setMailingList(true);
    }
    else 
    {
        person1.setMailingList(false);
    }
    
    //output info
    cout << "\nName: " << person1.getFirst() << " " << person1.getLast() << endl;
    
    cout << "Address: " << person1.getAddress() << ", " << person1.getCity() 
    << ", " << person1.getState() << " " << person1.getZip() << endl;
    
    cout << "Phone number: " << person1.getPhone() << endl;
    
    cout << "Customer Number: " << person1.getCustomerNum() << endl;
    
    if(selection == 'Y'||"y")
    {
        cout << "They are on the mailing list";
    }
    else
    {
        cout << "They are not on the mailing list";
    }
}