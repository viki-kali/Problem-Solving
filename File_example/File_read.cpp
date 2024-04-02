#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

// Function to split a string based on a delimiter
vector<string> split(const string& str, char delimiter) {
    vector<string> tokens;
    stringstream ss(str);
    string token;
    while (getline(ss, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

int main() {
    // Open the TSV file
    ifstream file("data.tsv");
    if (!file.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    vector<vector<string>> data; // 2D list to store the data

    // Read the file line by line
    string line;
    while (getline(file, line)) {
        // Split the line into tokens based on tab delimiter
        vector<string> tokens = split(line, '\t');
        // Store the tokens in the 2D list
        data.push_back(tokens);
    }

    // Close the file
    file.close();

    // Printing the data for verification
    for (const auto& row : data) {
        for (const auto& cell : row) {
            cout << cell << "\t";
        }
        cout << endl;
    }

    return 0;
}
