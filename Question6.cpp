#include <iostream>
#include <fstream>
#include <string>
#include <cctype> // For toupper()

using namespace std;

// Function to capitalize the second letter of each word
string capitalizeSecondLetter(const string& input) {
    string result;
    bool capitalizeNext = true;

    for (char c : input) {
        if (isalpha(c)) {
            if (capitalizeNext) {
                result += toupper(c);
                capitalizeNext = false;
            } else {
                result += c;
            }
        } else {
            result += c;
            capitalizeNext = true;
        }
    }

    return result;
}

int main() {
    
    // Read the contents of the file
    ifstream inputFile("king.txt");
    if (!inputFile.is_open()) {
        cerr << "Error opening the file!" << endl;
        return 1;
    }

    string fileData;
    string line;
    while (getline(inputFile, line)) {
        fileData += line;
    }
    inputFile.close();

    // Calculate and output the number of vowels
    int noOfVowels = 0;
    for (char c : fileData) {
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
            noOfVowels++;
        }
    }
    cout << "Number of vowels in the statement: " << noOfVowels << endl;

    // Calculate and output the number of words
    int noOfWords = 0;
    for (size_t i = 0; i < fileData.size(); i++) {
        if (isalpha(fileData[i])) {
            while (i < fileData.size() && isalpha(fileData[i])) {
                i++;
            }
            noOfWords++;
        }
    }
    cout << "Number of words in the statement: " << noOfWords << endl;

    // Reverse the statement
    string reversedStatement(fileData.rbegin(), fileData.rend());
    cout << "Reversed statement: " << reversedStatement << endl;

    // Capitalize the second letter of each word
    string capitalizedStatement = capitalizeSecondLetter(fileData);
    cout << "Capitalized statement: " << capitalizedStatement << endl;

    return 0;
}