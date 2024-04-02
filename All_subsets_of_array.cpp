#include <iostream>
#include <vector>

using namespace std;

// Function to generate all subsets of an array
void generateSubsets(vector<int>& nums, vector<int>& subset, int index, vector<vector<int>>& result) {
    // Add the current subset to the result
    result.push_back(subset);
    
    // Generate subsets starting from the current index
    for (int i = index; i < nums.size(); ++i) {
        // Include the current element in the subset
        subset.push_back(nums[i]);
        
        // Recursively generate subsets starting from the next index
        generateSubsets(nums, subset, i + 1, result);
        
        // Exclude the current element from the subset (backtrack)
        subset.pop_back();
    }
}

// Function to find all subsets of an array
vector<vector<int>> findAllSubsets(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> subset;
    
    generateSubsets(nums, subset, 0, result);
    
    return result;
}

// Function to print a vector of vectors
void printSubsets(const vector<vector<int>>& subsets) {
    for (const auto& subset : subsets) {
        cout << "[";
        for (int i = 0; i < subset.size(); ++i) {
            cout << subset[i];
            if (i < subset.size() - 1)
                cout << ", ";
        }
        cout << "]" << endl;
    }
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> subsets = findAllSubsets(nums);
    
    cout << "All subsets of the array: " << endl;
    printSubsets(subsets);
    
    return 0;
}

