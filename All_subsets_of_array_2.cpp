#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> findSubsets(vector<int>& nums) {
    vector<vector<int>> subsets;
    int n = nums.size();
    for (int i = 0; i < (1 << n); ++i) {
        vector<int> subset;
        for (int j = 0; j < n; ++j) {
            int temp = (1 << j);
            cout<<i<<"&"<< temp<<": "<<(i & temp)<<endl;
            if (i & temp) {
                subset.push_back(nums[j]);
            }
        }
        cout<<"---------"<<endl;
        subsets.push_back(subset);
    }
    return subsets;
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> subsets = findSubsets(arr);

    // Printing subsets
    for (const auto& subset : subsets) {
        cout << "[";
        for (int i = 0; i < subset.size(); ++i) {
            cout << subset[i];
            if (i < subset.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }
    cout<<(1<<3);
    return 0;
}

