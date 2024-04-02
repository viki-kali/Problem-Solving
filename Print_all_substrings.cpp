/*
All substrings:
a
ab
abc
abcd
abcde
b
bc
bcd
bcde
c
cd
cde
d
de
e

*/
#include <iostream>
#include <string>
using namespace std;
void printSubstrings1(const std::string& str) {
    int len = str.length();

    // Generate all substrings using nested loops
    for (int i = 0; i < len; ++i) {
        for (int j = i; j < len; ++j) {
            std::cout << str.substr(i, j - i + 1) << std::endl;
        }
    }
}

void printSubstrings2(const std::string& str) {
    int len = str.length();

    // Generate all substrings without using substr function
    for (int i = 0; i < len; ++i) {
        for (int j = i; j < len; ++j) {
            for (int k = i; k <= j; ++k) {
                std::cout << str[k];
            }
            std::cout << std::endl;
        }
    }
}

int main() {
    std::string input="abcde";
    // Print all substrings of the input string
    std::cout << "All substrings:" << std::endl;
    printSubstrings1(input);
    cout<<"2nd Function call"<<endl;
    printSubstrings2(input);

    return 0;
}

