#include <iostream>

// Function to display the cheat menu and take user input
void cheatMenu()
{
    int choice = 0;
    const std::string choices[4] = {
        "Infinite Fuel",
        "Instant Speed",
        "Invincibility",
        "Exit Cheat Menu"
    };

    // Display the cheat menu
    for (int i = 0; i < 4; i++)
    {
        std::cout << i + 1 << ". " << choices[i] << "\n";
    }
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    // Handle user input with error checking
    if (choice < 1 || choice > 4)
    {
        std::cout << "Invalid choice, try again.\n";
        cheatMenu();
    }
    else
    {
        // Activate the selected cheat
        if (choice != 4)
        {
            activateCheat(choice);
        }
        else
        {
            std::cout << "Exiting cheat menu...\n";
        }
    }
}

// Function to activate a specific cheat
void activateCheat(int cheatCode)
{
    switch (cheatCode) {
        case 1:
            // Implement infinite fuel cheat
            std::cout << "Activating infinite fuel cheat...\n";
            break;
        case 2:
            // Implement instant speed cheat
            std::cout << "Activating instant speed cheat...\n";
            break;
        case 3:
            // Implement invincibility cheat
            std::cout << "Activating invincibility cheat...\n";
            break;
        default:
            // Invalid cheat code should not be possible
            break;
    }
}