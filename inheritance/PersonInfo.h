#ifndef PERSONINFO_H
#define PERSONINFO_H
#include <iostream>
using namespace std;

class PersonInfo
{
private:
    string last;
    string first;
    string address;
    string city;
    string state;
    string zip;
    string phone;
    
    
    
public:
    PersonInfo()
        {
            last = " ", first = " ", address = " ", city = " ", state = " ",
            zip = " ", phone = " ";
        }

    void setLast(string last)
        { this->last = last;}
    
    void setFirst(string first)
        { this->first = first;}

    void setAddress(string address)
        {this->address = address;}
    
    void setCity(string city)
        {this->city = city;}
    
    void setState(string state)
        {this->state = state;}
     
    void setZip(string zip)
        {this->zip = zip;}
      
    void setPhone(string phone)
        {this->phone = phone;}

    
    string getLast()
        { return last;}

    string getFirst()
        { return first;}

    string getAddress()
        {return address;}

    string getCity()
        {return city;}

    string getState()
        {return state;}

    string getZip()
        {return zip;}
        
    string getPhone()
        {return phone;}    
};

#endif /* PERSONINFO_H */

