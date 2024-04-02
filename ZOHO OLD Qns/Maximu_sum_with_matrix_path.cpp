/*
For any given matrix find the path from the start to the end which gives the maximum sum. Traverse only right or down.
Example: starting index is 15 (left top) and ending index is 10 (bottom right)
15 25 30
45 25 60
70 75 10
O/P:15->45->70->75->10 sum is 215
*/
#include <iostream>
#include <vector>

using namespace std;

int maxSumPath(vector<vector<int>>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();

    // Initialize a 2D array to store the maximum sum path values
    vector<vector<int>> maxSum(rows, vector<int>(cols, 0));

    // Initialize the first element of maxSum
    maxSum[0][0] = grid[0][0];

    // Fill the first row
    for (int i = 1; i < cols; ++i) {
        maxSum[0][i] = maxSum[0][i - 1] + grid[0][i];
    }

    // Fill the first column
    for (int i = 1; i < rows; ++i) {
        maxSum[i][0] = maxSum[i - 1][0] + grid[i][0];
    }

    // Fill the rest of the maxSum matrix
    for (int i = 1; i < rows; ++i) {
        for (int j = 1; j < cols; ++j) {
            maxSum[i][j] = max(maxSum[i - 1][j], maxSum[i][j - 1]) + grid[i][j];
        }
    }

    // Return the maximum sum path value
    return maxSum[rows - 1][cols - 1];
}

int main() {
    vector<vector<int>> grid = {
        {15, 100, 30},
        {45, 25, 60},
        {70, 75, 10}
    };

    int maxSum = maxSumPath(grid);
    cout << "Maximum sum path: " << maxSum << endl;

    return 0;
}

