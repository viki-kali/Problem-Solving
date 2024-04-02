/*
    string a = "123";
    string b = "13";
    int n = 4;        // Base value

    (1*4^2) + (2* 4^1) + (3* 4^0)  => 16+8+3 => 27

    (1* 4^1) * (2* 4^0) => 4+2 => 6

    Total = 33

    4| 33
     4| 8 - 1
       | 2 - 0      201 as Answer
*/
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int baseN_to_base10(string num, int base) {
    int result = 0;
    int power = 0;
    for (int i = num.length() - 1; i >= 0; --i) {
        result += (num[i] - '0') * pow(base, power);
        power++;
    }
    return result;
}

string base10_to_baseN(int num, int base) {
    string result = "";
    while (num > 0) {
        int remainder = num % base;
        result = to_string(remainder) + result;
        num /= base;
    }
    return result;
}

string addBaseN(string num1, string num2, int base) {
    int num1_base10 = baseN_to_base10(num1, base);
    int num2_base10 = baseN_to_base10(num2, base);
    int sum_base10 = num1_base10 + num2_base10;
    return base10_to_baseN(sum_base10, base);
}

int main() {
    string a = "123"; // Number a in base 4
    string b = "13";  // Number b in base 4
    int n = 4;        // Base

    string result = addBaseN(a, b, n);

    cout << "a + b = " << result << " in base " << n << endl;

    return 0;
}

