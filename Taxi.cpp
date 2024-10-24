#include "Taxi.h"
#include <iostream>
#include "Utilities.h"

float Taxi::costFinal;

void Taxi::typeTaxi() {
    std::cout << "Please select a taxi option:\n";
    std::cout << "1. Standard taxi -> 1.2$ per km\n";
    std::cout << "2. Luxury taxi -> 1.99$ per km\n";

    std::cout << "Enter which kind of taxi you need: ";
    std::cin >> taxiType;

    std::cout << "Please enter the number of kilometers: ";
    std::cin >> kilometers;

    if (taxiType == 1) {
        cost = kilometers * 1.2;
        std::cout << "Cost: " << cost << "$\n";
        std::cout << "Press 1 to keep this option, or 2 to select another taxi: ";
        std::cin >> taxiTypeFinal;

        if (taxiTypeFinal == 1) {
            costFinal = cost;
            std::cout << "Taxi ride confirmed.\n";
            menu();
        } else {
            clearConsole();
            typeTaxi();
        }
    } else if (taxiType == 2) {
        cost = kilometers * 1.99;
        std::cout << "Cost: " << cost << "$\n";
        std::cout << "Press 1 to select another taxi or 2 to keep this option: ";
        std::cin >> taxiTypeFinal;

        if (taxiTypeFinal == 2) {
            costFinal = cost;
            std::cout << "Taxi ride confirmed.\n";
            menu();
        } else {
            clearConsole();
            typeTaxi();
        }
    } else {
        std::cout << "Invalid option! Returning to menu...\n";
        sleepFunction(2);
        menu();
    }
}
