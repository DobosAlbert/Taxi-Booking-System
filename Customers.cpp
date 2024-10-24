#include "Customers.h"
#include <fstream>
#include <iostream>
#include "Utilities.h"

std::string Customers::name;

void Customers::setDetails() {
    std::ofstream fout("old-customers.txt", std::ios::app);
    {
        std::cout << "Enter Customer ID: ";
        std::cin >> ID;
        std::cout << "Enter Name: ";
        std::cin >> name;
        std::cout << "Enter Age: ";
        std::cin >> age;
        std::cout << "Enter MobileNumber: ";
        std::cin >> mobileNumber;
        std::cout << "Enter Address: ";
        std::cin >> address;
        std::cout << "Enter Gender: ";
        std::cin >> gender;
    }

    fout << "\nCustomer Id: " << ID << "\nName: " << name << "\nAge: " << age
         << "\nMobile Number: " << mobileNumber << "\nAddress: " << address << "\nGender: " << gender << "\n";
    fout.close();
    std::cout << "Saved \nNote: Your details record for future purposes.\n";
    sleepFunction(2);
    clearConsole();
    menu();
}

void Customers::getDetails() {
    std::ifstream fin("old-customers.txt");
    if (!fin) {
        clearConsole();
        std::cout << "Cannot open file\n";
    }
    while (fin.getline(all, 100)) {
        std::cout << all << std::endl;
    }
    fin.close();
    std::cout<< "Choose any number to return to the main menu: ";
    std::cin >> optionKey;
    if(optionKey)
    {
    menu();
    sleepFunction(5);
    }
}
