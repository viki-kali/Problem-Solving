/*
Original Matrix:
1 2 3 11
4 5 6 22
7 8 9 33
99 88 77 66
Rotated Matrix:
99 7 4 1
88 8 5 2
77 9 6 3
66 33 22 11
 */
#include <iostream>
#include <vector>

void rotateMatrix(std::vector<std::vector<int>>& matrix) {
    int n = matrix.size();

    // Create a new matrix for rotated elements
    std::vector<std::vector<int>> rotatedMatrix(n, std::vector<int>(n, 0));

    // Perform the rotation
    for (int row = 0; row < n; ++row) {
        for (int col = 0; col < n; ++col) {
            rotatedMatrix[col][(n - 1) - row] = matrix[row][col];
        }
    }

    // Copy the rotated matrix back to the original matrix
    matrix = rotatedMatrix;
}

// Utility function to print the matrix
void printMatrix(const std::vector<std::vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int elem : row) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3,11},
        {4, 5, 6,22},
        {7, 8, 9,33},
        {99, 88, 77,66}
    };

    std::cout << "Original Matrix:\n";
    printMatrix(matrix);

    rotateMatrix(matrix);

    std::cout << "Rotated Matrix:\n";
    printMatrix(matrix);

    return 0;
}
