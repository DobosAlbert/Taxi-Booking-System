#ifndef CUSTOMERS_H
#define CUSTOMERS_H

#include <string>

class Customers {
public:
    std::string gender, address;
    static std::string name;
    int age, mobileNumber, ID, optionKey;
    char all[100];

    void setDetails();
    void getDetails();
};

#endif
