#include <iostream>
#include <string>

using namespace std;

string expandAroundCenter(const string& str, int left, int right) {
    int n = str.length();

    while (left >= 0 && right < n && str[left] == str[right]) {
        left--;
        right++;
    }

    return str.substr(left + 1, right - left - 1);
}

string longestPalindromeSubstring(const string& str) {
    int n = str.length();
    if (n == 0) {
        return "";
    }

    string longestPalindrome = "";

    for (int i = 0; i < n; i++) {
        // Odd length palindrome
        string palindrome1 = expandAroundCenter(str, i, i);
        if (palindrome1.length() > longestPalindrome.length()) {
            longestPalindrome = palindrome1;
        }

        // Even length palindrome
        string palindrome2 = expandAroundCenter(str, i, i + 1);
        if (palindrome2.length() > longestPalindrome.length()) {
            longestPalindrome = palindrome2;
        }
        cout<<longestPalindrome<<endl;
    }

    return longestPalindrome;
}

int main() {
    string input;

    cout << "Enter a string: ";
    cin >> input;

    string result = longestPalindromeSubstring(input);

    cout << "The longest palindromic substring is: " << result << endl;

    return 0;
}
