#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned>(time(nullptr)));

    // Generate a random number between 0 and 11
    int daysUntilExpiration = rand() % 12;  // Generates values from 0 to 11

    // Check the conditions using a switch statement
    switch (daysUntilExpiration) {
        case 0:
            cout << "Your subscription has expired.\n";
            break;
        case 1:
            cout << "Your subscription expires within a day! Renew now and save 20%!\n";
            break;
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Your subscription expires in " << daysUntilExpiration << " days. Renew now and save 10%!\n";
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            cout << "Your subscription will expire soon. Renew now!\n";
            break;
        default:
            cout << "You have an active subscription.\n";
            break;
    }

    return 0;
}