/*
a     g
 b   f
  c e
   d
  c e
 b   f
a     g

*/
#include <iostream>

int main() {
    std::string input = "abcdefg";

    for (int i = 0; i < input.length(); ++i) {
        for (int j = 0; j < input.length(); ++j) {
            if (j == i || j == input.length() - i - 1) {
                std::cout << input[j];
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}

