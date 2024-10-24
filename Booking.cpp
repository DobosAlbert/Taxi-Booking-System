#include "Booking.h"
#include <iostream>
#include "Utilities.h"  

float Booking::hotelCost;

void Booking::hotels() {
    std::cout << "1. Hotel Select\n";
    std::cout << "2. Hotel International\n";
    std::cout << "3. Hotel Hilton\n";

    std::cout << "Select a hotel or press any key to return: ";
    std::cin >> choiceHotel;

    clearConsole();

    switch (choiceHotel) {
        case 1:
            std::cout << "Welcome to Hotel Select:\n";
            std::cout << "1. Standard: $95.99\n2. Premium: $150.00\n3. Luxury: $200.00\n";
            std::cout << "Please choose an option: ";
            std::cin >> packChoice;
            hotelCost = (packChoice == 1) ? 95.99 : (packChoice == 2) ? 150.0 : 200.0;
            break;
        case 2:
            std::cout << "Welcome to Hotel International:\n";
            std::cout << "1. Standard: $78.56\n2. Premium: $95.00\n3. Luxury: $179.99\n";
            std::cout << "Please choose an option: ";
            std::cin >> packChoice;
            hotelCost = (packChoice == 1) ? 78.56 : (packChoice == 2) ? 95.0 : 179.99;
            break;
        case 3:
            std::cout << "Welcome to Hotel Hilton:\n";
            std::cout << "1. Standard: $119.99\n2. Premium: $189.99\n3. Luxury: $225.99\n";
            std::cout << "Please choose an option: ";
            std::cin >> packChoice;
            hotelCost = (packChoice == 1) ? 119.99 : (packChoice == 2) ? 189.99 : 225.99;
            break;
        default:
            std::cout << "Invalid selection, returning to menu...\n";
            sleepFunction(2);
            menu();
    }
    std::cout << "You successfully booked the package!\n";
    menu();
}
