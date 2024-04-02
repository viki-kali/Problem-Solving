/*
Enter N value: 5
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25

Output in Spiral Format: 1 2 3 4 5 10 15 20 25 24 23 22 21 16 11 6 7 8 9 14 19 18 17 12 13

*/
#include <iostream>
#include <vector>

using namespace std;

void spiralTraversal(const vector<vector<int>>& matrix, vector<int>& result) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;

    while (top <= bottom && left <= right) {
        // Traverse top row
        for (int i = left; i <= right; i++)
            result.push_back(matrix[top][i]);
        top++;

        // Traverse rightmost column
        for (int i = top; i <= bottom; i++)
            result.push_back(matrix[i][right]);
        right--;

        // Check if there's more to traverse
        if (top <= bottom) {
            // Traverse bottom row
            for (int i = right; i >= left; i--)
                result.push_back(matrix[bottom][i]);
            bottom--;
        }

        // Check if there's more to traverse
        if (left <= right) {
            // Traverse leftmost column
            for (int i = bottom; i >= top; i--)
                result.push_back(matrix[i][left]);
            left++;
        }
    }
}

int main() {
    int N;
    cout << "Enter N value: ";
    cin >> N;

    // Create and populate the 2D matrix
    vector<vector<int>> matrix(N, vector<int>(N));
    int value = 1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrix[i][j] = value;
            value++;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // Perform spiral traversal and store the result in a 1D array
    vector<int> result;
    spiralTraversal(matrix, result);

    // Print the result
    cout << "Output in Spiral Format: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

