#include <iostream>

void swap(char& a, char& b) {
    char temp = a;
    a = b;
    b = temp;
}

void generatePermutations(char str[], int start, int end) {
    if (start == end) {
        std::cout << str << std::endl;
    } else {
        for (int i = start; i <= end; i++) {
            // Swap the current element with the element at index 'start'
            swap(str[start], str[i]);

            // Recursively generate permutations for the remaining characters
            generatePermutations(str, start + 1, end);

            // Undo the swap to backtrack and try the next possibility
            swap(str[start], str[i]);
        }
    }
}

int main() {
    char a[] = "abcde";
    int length = sizeof(a) - 1;  // Exclude the null terminator '\0'

    generatePermutations(a, 0, length - 1);

    return 0;
}

