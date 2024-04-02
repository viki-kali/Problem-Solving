/*
Form a number system with only 3 and 4. Find the nth number of the number system.
Eg.) The numbers are: 3, 4, 33, 34, 43, 44, 333, 334, 343, 344, 433, 434, 443, 444, 3333, 3334, 3343, 3344, 3433, 3434, 3443, 3444 ….
*/
#include <iostream>
#include <string>

std::string findNthNumber(int n) {
    std::string result = "";

    while (n > 0) {
        if (n % 2 == 0) {
            result = '4' + result;
            n = (n / 2) - 1;
        } else {
            result = '3' + result;
            n = n / 2;
        }
    }

    return result;
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    std::cout << "The " << n << "th number of the number system is: " << findNthNumber(n) << std::endl;

    return 0;
}

