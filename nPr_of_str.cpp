#include <iostream>

void generatePermutations(std::string& str, int start, int end) {
    if (start == end) {
        std::cout << str << std::endl;
    } else {
        for (int i = start; i <= end; ++i) {
            // Swap characters at positions start and i
            std::swap(str[start], str[i]);

            // Print for debugging
            std::cout << "Swapped: " << str << " at positions " << start << " and " << i << std::endl;

            // Recursively generate permutations for the remaining characters
            generatePermutations(str, start + 1, end);

            // Backtrack - undo the swap to explore other possibilities
            std::swap(str[start], str[i]);

            // Print for debugging
            std::cout << "Backtracked: " << str << std::endl;
        }
    }
}

int main() {
    std::string str = "abc";
    int n = str.length();

    generatePermutations(str, 0, n - 1);

    return 0;
}
