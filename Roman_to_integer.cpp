#include <iostream>
#include <unordered_map>

using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> romanValues = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int result = 0;

    for (int i = 0; i < s.length(); i++) {
        if (i < s.length() - 1 && romanValues[s[i]] < romanValues[s[i + 1]]) {
            // If the current Roman numeral is smaller than the next one, subtract its value
            result -= romanValues[s[i]];
        } else {
            // Otherwise, add its value
            result += romanValues[s[i]];
        }
    }

    return result;
}

int main() {
    string romanNumeral;

    cout << "Enter a Roman numeral: ";
    cin >> romanNumeral;

    int result = romanToInt(romanNumeral);

    cout << "The integer equivalent is: " << result << endl;

    return 0;
}

