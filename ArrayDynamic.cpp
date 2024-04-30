#include <iostream>
using namespace std;

int main() {
    int rows, columns;

    // Getting the  dimensions from user input
    cout << "Enter the number of rows (maximum of 3): ";
    cin >> rows;
    if (rows > 3) {
        cout << "Invalid input. Maximum rows allowed is 3." << endl;
        return 1;
    }

    cout << "Enter the number of columns (maximum of 3): ";
    cin >> columns;
    if (columns > 3) {
        cout << "Invalid input. Maximum columns allowed is 3." << endl;
        return 1;
    }

    // Dynamically allocating memory for the 2D array
    double ** arr = new double * [rows];
    for (int i = 0; i < rows; ++i) {
        arr[i] = new double[columns];
    }

    // Prompting user to assign values to the array
    cout << "Enter values for the array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << "Enter value for element at row " << i + 1 << ", column " << j + 1 << ": ";
            cin >> arr[i][j];
        }
    }

    // Outputing the array
    cout << "Array contents:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Freeing up allocated memory
    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
