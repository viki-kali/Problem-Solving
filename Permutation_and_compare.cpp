#include <iostream>
#include <string>

using namespace std;

// Function to swap characters at positions i and j in the string
void swapChars(string& str, int i, int j) {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
}

// Function to generate permutations recursively and count occurrences
void generatePermutations(string& str, int start, const string& mainString, const string& subString, int& count) {
    if (start == str.length() - 1) {
        if (mainString.find(str) != string::npos) {
            count++;
        }
        return;
    }

    for (int i = start; i < str.length(); i++) {
        swapChars(str, start, i);
        generatePermutations(str, start + 1, mainString, subString, count);
        swapChars(str, start, i); // Backtrack
    }
}

int main() {
    string mainString = "abckdaghcbajhba";
    string subString = "abc";
    int totalCount = 0;

    // Generate all permutations of the substring and count occurrences
    generatePermutations(subString, 0, mainString, subString, totalCount);

    cout << "Total occurrences of different forms of substring \"" << subString << "\": " << totalCount << endl;

    return 0;
}

