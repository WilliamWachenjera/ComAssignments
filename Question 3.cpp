#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declaration and initialization of the array of strings
    string elements[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    int numberOfElements = sizeof(elements) / sizeof(elements[0]);

    // Iteration
    for (int i = 0; i < numberOfElements; ++i) {
        // Check which element starts with the letter "B"
        if (elements[i][0] == 'B') {
            //prints the element that start with letter "B"
            cout << elements[i] << endl;
        }
    }

    return 0;
}