/*
All possible combinations:

a
ab
abc
ac
b
bc
c

*/
#include <iostream>
#include <string>

// Function to print all possible combinations of a string
void printCombinations(const std::string& str, std::string prefix, int start) {
    int len = str.length();

    // Print the current combination
    std::cout << prefix << std::endl;

    // Generate combinations recursively
    for (int i = start; i < len; ++i) {
        prefix.push_back(str[i]);
        printCombinations(str, prefix, i + 1);
        prefix.pop_back();
    }
}

int main() {
    std::string input="abc";
    // Print all possible combinations of the input string
    std::cout << "All possible combinations:" << std::endl;
    printCombinations(input, "", 0);
    return 0;
}

