#include <iostream>
using namespace std; 

int main() {
    int number;

    // Prompt the user to enter an integer between 5 and 10 
    do {
        cout << "Please enter an integer value between 5 and 10: ";
        cin >> number;

        // Check if the integer entered is between 5 and 10
        if (int number >= 5 && number <= 10) {
            cout << "Your input value (" << number << ") has been accepted." << endl;
            break; //exit the iteration if condition is not satisfied
        } else {
            cout << "Invalid input. Please enter a value between 5 and 10." << endl;
            cout << "You entered " << number << ". Please enter a number between 5 and 10." << endl;
        }
    }
     while (true); // proceed the iteration until a valid integer is entered

    return 0;
}
