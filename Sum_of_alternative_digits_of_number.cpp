#include <iostream>
#include <string>

int sumAlternateDigits(int number) {
    std::string digits = std::to_string(number);
    int alternateSum = 0;
    
    for (int i = 0; i < digits.length(); i++) {
        if (i % 2 == 0) {
            alternateSum += (digits[i] - '0');
        }
    }
    
    return alternateSum;
}

int main() {
    int inputNumber = 45367;
    int result = sumAlternateDigits(inputNumber);
    std::cout << result << std::endl;  // This will print 14 (4 + 3 + 7)
    
    return 0;
}

