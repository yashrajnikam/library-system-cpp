#include <iostream>
using namespace std;

// Recursive function for the menu
void showMenu() {
    int choice;

    cout << "\n===== MENU =====\n";
    cout << "1. Pizza\n";
    cout << "2. Pasta\n";
    cout << "3. Burger\n";
    cout << "4. Exit\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    // Base case / Exit condition
    if (choice == 4) {
        cout << "\nThank you! Goodbye!\n";
        return; // Terminate recursion
    }

    // Process user choice
    switch (choice) {
        case 1:
            cout << "You selected: Pizza\n";
            break;
        case 2:
            cout << "You selected: Pasta\n";
            break;
        case 3:
            cout << "You selected: Burger\n";
            break;
        default:
            cout << "Invalid option! Please select between 1 and 4.\n";
            break;
    }

    // Recursive call to repeat the menu
    showMenu();
}

int main() {
    // Start the recursive menu loop
    showMenu();
    return 0;
}
