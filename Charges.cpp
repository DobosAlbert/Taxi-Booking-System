#include "Charges.h"
#include "Utilities.h"
#include <fstream>
#include <iostream>
#include <iomanip>

void Charges::setBill() {
    std::ofstream fout("receipt.txt");
    fout << "-------------Receipt-------------\n";
    fout << "Customer Name: " << Customers::name << "\n\n";
    fout << "Hotel cost:\t" << std::fixed << std::setprecision(2) << Booking::hotelCost << "$\n";
    fout << "Taxi cost:\t" << std::fixed << std::setprecision(2) << Taxi::costFinal << "$\n";
    fout << "Total cost:\t" << std::fixed << std::setprecision(2) << (Booking::hotelCost + Taxi::costFinal) << "$\n";
    fout << "----------------------------------\n";
    fout.close();
}

void Charges::getBill() {
    std::ifstream fin("receipt.txt");
    if (!fin) {
        std::cout << "Cannot open file!\n";
        return;
    }
    char line[100];
    while (fin.getline(line, 100)) {
        std::cout << line << "\n";
    }
    fin.close();
    std::cout<< "Your receipt has been successfully issued in the receipt.txt \n";
    std::cout<< "Choose any number to return to the main menu: ";
    std::cin >> optionCharges;
    if(optionCharges){
    sleepFunction(5);
    menu();
    }
}
