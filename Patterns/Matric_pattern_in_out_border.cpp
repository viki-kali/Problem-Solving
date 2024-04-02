/*
0 0 0 0 0 0 0
0 1 1 1 1 1 0
0 1 2 2 2 1 0
0 1 2 3 2 1 0
0 1 2 2 2 1 0
0 1 1 1 1 1 0
0 0 0 0 0 0 0

3 3 3 3 3 3 3
3 2 2 2 2 2 3
3 2 1 1 1 2 3
3 2 1 0 1 2 3
3 2 1 1 1 2 3
3 2 2 2 2 2 3
3 3 3 3 3 3 3

*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N = 4;

    for (int i = 0; i < 2 * N - 1; ++i) {
        for (int j = 0; j < 2 * N - 1; ++j) {
            cout << N - 1 - max(abs(N - 1 - i), abs(N - 1 - j)) << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 2 * N - 1; ++i) {
        for (int j = 0; j < 2 * N - 1; ++j) {
            cout << N - 1 - min(min(i, j), min(2 * N - 2 - i, 2 * N - 2 - j)) << " ";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}
