/*
Enter a string: abcdeabc
Character occurrences in the string:
'e': 1 times
'd': 1 times
'c': 2 times
'b': 2 times
'a': 2 times
2 2 2 1 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
*/
#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    string input;
    int i;
    // Read the input string
    cout << "Enter a string: ";
    getline(cin, input);

    // Create an unordered_map to store character occurrences
    unordered_map<char, int> charCount;

    // Count occurrences of each character
    for (char ch : input) {
        // Increment the count for the current character
        charCount[ch]++;
    }

    // Display the character occurrences
    cout << "Character occurrences in the string:" << endl;
    for (const auto& entry : charCount) {
        cout << "'" << entry.first << "': " << entry.second << " times" << endl;
    }

    int A[26]={0};//initialize with 0
    for(i=0;i<26;i++)
        A[input[i]-'a']++;

    for(i=0;i<26;i++)
        cout<<A[i]<<" ";
    return 0;
}

