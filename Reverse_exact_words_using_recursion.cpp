/*
Input : asdfg qwen zxcm
Output : zxcm qwen asdfg
*/
#include <iostream>
#include <string>
#include <sstream>

// Function to reverse a word recursively
void reverseWord(const std::string& str) {
    // Base case: if the string is empty, return
    if (str.empty()) {
        return;
    }

    // Recursive case: find the position of the first space
    size_t space_pos = str.find(' ');
    std::cout<<space_pos<<std::endl;
    if (space_pos == std::string::npos) {
        // If no space found, this is the last word
        std::cout << str;
    }
    else {
        // If space found, reverse the substring before the space and
        // then print the space character
        reverseWord(str.substr(space_pos + 1));
        std::cout << " " << str.substr(0, space_pos);
    }
}

int main() {
    std::string input="asdfg qwen zxcm";

    // Reverse the entire sentence recursively
    std::cout << "Reversed sentence: ";
    std::cout << std::endl;
    reverseWord(input);
    std::cout << std::endl;

    return 0;
}

