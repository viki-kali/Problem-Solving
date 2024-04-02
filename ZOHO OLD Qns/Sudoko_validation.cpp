#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool isValidSudoku(vector<vector<char>>& board) {
    unordered_set<char> rowSet[9], colSet[9], subgridSet[3][3];

    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            char cell = board[i][j];

            // Skip empty cells
            if (cell == '.') continue;

            // Check for duplicate in the same row
            if (rowSet[i].count(cell)) return false;
            rowSet[i].insert(cell);

            // Check for duplicate in the same column
            if (colSet[j].count(cell)) return false;
            colSet[j].insert(cell);

            // Check for duplicate in the same subgrid
            int subgridRow = i / 3;
            int subgridCol = j / 3;
            if (subgridSet[subgridRow][subgridCol].count(cell)) return false;
            subgridSet[subgridRow][subgridCol].insert(cell);
        }
    }

    return true; // If all checks pass, the Sudoku is valid
}

int main() {
    vector<vector<char>> sudoku = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'5', '.', '.', '.', '8', '.', '.', '7', '9'}
    };

    if (isValidSudoku(sudoku)) {
        cout << "Valid Sudoku" << endl;
    } else {
        cout << "Invalid Sudoku" << endl;
    }

    return 0;
}

