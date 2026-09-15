#include <iostream>
using namespace std;

int main() {
    int rollNumbers[5];

    // Input roll numbers of 5 students
    cout << "Enter roll numbers of 5 students:\n";
    for(int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> rollNumbers[i];
    }

    // Display all entered roll numbers
    cout << "\nThe roll numbers entered by the user are:\n";
    for(int i = 0; i < 5; i++) {
        cout << rollNumbers[i] << " ";
    }
    cout << endl;

    return 0;
}
