#include <iostream>

// Function to display the mod menu and get user input
int modMenu() {
    int choice;
    std::cout << "Assetto Corsa Mod Menu:\n"\
              << "1. Custom Car\n"\
              << "2. Custom Track\n"\
              << "3. Custom Weather\n"\
              << "4. Exit Mod Menu\n"\
              << "Enter your choice: ";
    std::cin >> choice;
    return choice;
}

// Function to activate a specific mod
void activateMod(int modCode) {
    switch (modCode) {
        case 1:
            std::cout << "Activating Custom Car mod...\n";
            break;
        case 2:
            std::cout << "Activating Custom Track mod...\n";
            break;
        case 3:
            std::cout << "Activating Custom Weather mod...\n";
            break;
        case 4:
            std::cout << "Exiting mod menu...\n";
            break;
        default:
            std::cout << "Invalid choice, try again.\n";
            modMenu();
            break;
    }
}

int main() {
    while (true) {
        const auto choice = modMenu();
        if (choice == 4) {
            break;
        }
        activateMod(choice);
    }
    return 0;
}