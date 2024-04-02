/*
 * 1.Given two numbers a and b both < 200 we have to find the square numbers which lie between a and b(inclusive)

eg) i/p a = 20;b = 100;
      o/p 25,36,49,64,81,100

 * */
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> squareNumbersBetween(int a, int b) {
    vector<int> result;
    
    int start = ceil(sqrt(a));
    int end = floor(sqrt(b));
    
    for (int i = start; i <= end; ++i) {
        result.push_back(i * i);
    }
    
    return result;
}

int main() {
    int a = 50;
    int b = 150;

    vector<int> squares = squareNumbersBetween(a, b);

    cout << "Square numbers between " << a << " and " << b << " (inclusive):" << endl;
    for (int num : squares) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

