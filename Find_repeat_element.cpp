#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int findRepeatingNumber(const std::vector<int>& arr) {
    int n = arr.size();
    unordered_map<int,int> map1;
    for(int i=0;i<n;i++)
    {
        map1[arr[i]]++;
        if(map1[arr[i]]>1)
            return arr[i];

    }
    // No repeating number found
    return -1;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 9, 4,5,4};
    int repeatingNumber = findRepeatingNumber(arr);

    if (repeatingNumber != -1) {
        std::cout << "The repeating number is: " << repeatingNumber << std::endl;
    } else {
        std::cout << "No repeating number found." << std::endl;
    }

    return 0;
}

