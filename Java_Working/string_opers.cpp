#include <iostream>
#include <string>
#include <cctype> // For toupper and tolower functions

using namespace std;

int main() {
    string inputString, secondString, substring;
    int choice;

    while (true) {
        cout << "\nString Operations:" << endl;
        cout << "1. Find Length" << endl;
        cout << "2. Convert to Uppercase" << endl;
        cout << "3. Convert to Lowercase" << endl;
        cout << "4. Concatenate Strings" << endl;
        cout << "5. Check for Substring" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter a string: ";
                cin.ignore(); // Ignore the newline character left in the input buffer
                getline(cin, inputString);
                cout << "Length of the string: " << inputString.length() << endl;
                break;
            case 2:
                cout << "Enter a string: ";
                cin.ignore(); // Ignore the newline character left in the input buffer
                getline(cin, inputString);
                for (char &c : inputString) {
                    c = toupper(c);
                }
                cout << "Uppercase string: " << inputString << endl;
                break;
            case 3:
                cout << "Enter a string: ";
                cin.ignore(); // Ignore the newline character left in the input buffer
                getline(cin, inputString);
                for (char &c : inputString) {
                    c = tolower(c);
                }
                cout << "Lowercase string: " << inputString << endl;
                break;
            case 4:
                cout << "Enter first string: ";
                cin.ignore(); // Ignore the newline character left in the input buffer
                getline(cin, inputString);
                cout << "Enter second string: ";
                getline(cin, secondString);
                inputString += secondString;
                cout << "Concatenated string: " << inputString << endl;
                break;
            case 5:
                cout << "Enter a string: ";
                cin.ignore(); // Ignore the newline character left in the input buffer
                getline(cin, inputString);
                cout << "Enter substring to check: ";
                getline(cin, substring);
                if (inputString.find(substring))// != string::npos)
                {
                    cout << "Substring found." << endl;
                } else {
                    cout << "Substring not found." << endl;
                }
                break;
            case 6:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 6." << endl;
        }
    }

    return 0;
}
