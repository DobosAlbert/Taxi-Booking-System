#include <iostream>
#include <thread>
#include <chrono>
#include "Utilities.h"
#include "Customers.h"
#include "Taxi.h"
#include "Booking.h"
#include "Charges.h"

void clearConsole() {
    for (int i = 0; i < 50; ++i) {
        std::cout << "\n";
    }
}

void sleepFunction(int sec) {
    std::this_thread::sleep_for(std::chrono::seconds(sec));
}

void menu() {
    int mainChoice;
    Customers customer;
    Taxi taxi;
    Booking booking;
    Charges charge;

    std::cout << "Main Menu:\n";
    std::cout << "1. Add New Customer\n";
    std::cout << "2. Taxi Services\n";
    std::cout << "3. Hotel Booking\n";
    std::cout << "4. Generate Bill\n";
    std::cout << "5. Show Previous Customer\n";
    std::cout << "6. Exit\n";
    std::cout <<"Please make a choice: ";
    std::cin >> mainChoice;

    switch (mainChoice) {
        case 1:
            customer.setDetails();
            break;
        case 2:
            taxi.typeTaxi();
            break;
        case 3:
            booking.hotels();
            break;
        case 4:
            charge.setBill();
            charge.getBill();
            break;
        case 5:
            customer.getDetails();
            break;
        case 6:
            exit(0);
        default:
            std::cout << "Invalid option!";
            menu();
    }
}
