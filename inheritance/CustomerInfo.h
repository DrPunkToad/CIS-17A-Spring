#ifndef CUTOMERINFO_H
#define CUTOMERINFO_H

#include "PersonInfo.h"

using namespace std;

class CustomerInfo : public PersonInfo
{
private:
    int customerNumber;
    bool mailingList;
    
public:
    CustomerInfo()
    {
        customerNumber = 0;
        mailingList = false;
    }
    
    void setCustomerNum(int customerNumber)
    {
        this->customerNumber = customerNumber;
    }
    
    void setMailingList(bool mailingList)
    {
        this->mailingList = mailingList;
    }
    
    int getCustomerNum()
    {return customerNumber;}
    
    bool getMailingList()
    {return mailingList;}
};
#endif /* CUTOMERINFO_H */

