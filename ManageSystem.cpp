#include "ManageSystem.h"

ManageSystem::ManageSystem() {
    std::cout << "\nEnter Your Name to continue as an admin: ";
    std::cin >> userName;
    clearConsole();
    menu();
}
