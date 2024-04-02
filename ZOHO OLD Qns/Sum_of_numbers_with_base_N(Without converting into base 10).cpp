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
#include <string>

using namespace std;

string addBaseN(string num1, string num2, int base) {
    int carry = 0;
    string result = "";

    int len1 = num1.length();
    int len2 = num2.length();
    int maxLength = max(len1, len2);

    // Pad the shorter number with leading zeros
    num1 = string(maxLength - len1, '0') + num1;
    num2 = string(maxLength - len2, '0') + num2;

    // Perform addition digit by digit
    for (int i = maxLength - 1; i >= 0; --i) {
        int digit1 = num1[i] - '0';
        int digit2 = num2[i] - '0';
        int sum = digit1 + digit2 + carry;

        // If the sum is greater than or equal to the base, handle the carry
        if (sum >= base) {
            sum -= base;
            carry = 1;
        } else {
            carry = 0;
        }

        // Convert the sum to character and prepend it to the result
        result = to_string(sum) + result;
    }

    // If there's still a carry after the loop, prepend it to the result
    if (carry > 0) {
        result = to_string(carry) + result;
    }

    return result;
}

int main() {
    string a = "123"; // Number a in base 4
    string b = "12";  // Number b in base 4
    int n = 4;        // Base

    string result = addBaseN(a, b, n);

    cout << "a + b = " << result << " in base " << n << endl;

    return 0;
}

