#include <iostream>
#include <queue>
using namespace std;

// Global queue for bank tokens
queue<int> tokenQueue;
int tokenCounter = 101; // Tokens 101 se start honge

void showMenu() {
    int choice;

    cout << "\n===== BANK TOKEN SYSTEM =====\n";
    cout << "1. Issue Token\n";
    cout << "2. Display All Tokens\n";
    cout << "3. Serve Customer\n";
    cout << "4. Exit\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    // Exit condition
    if (choice == 4) {
        cout << "\nThank you! Program Exited.\n";
        return;
    }
