#ifndef CHARGES_H
#define CHARGES_H

#include "Customers.h"
#include "Taxi.h"
#include "Booking.h"

class Charges : public Customers, Booking, Taxi {
public:
    int optionCharges;
    void setBill();
    void getBill();
};

#endif
