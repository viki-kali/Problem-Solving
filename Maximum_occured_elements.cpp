#include <iostream>
#include <unordered_map>
#include <vector>

int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    std::vector<int> arr(n);

    // Input the elements of the array
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    // Create an unordered map to store the frequency of each element
    std::unordered_map<int, int> frequency;

    // Iterate through the array and update the frequency map
    for (int i = 0; i < n; ++i) {
        frequency[arr[i]]++;
    }

    // Find the maximum frequency
    int maxFrequency = 0;
    for (const auto& pair : frequency) {
        if (pair.second > maxFrequency) {
            maxFrequency = pair.second;
        }
    }

    // Print the elements with the maximum frequency
    std::cout << "Maximum occurring element(s): ";
    for (const auto& pair : frequency) {
        if (pair.second == maxFrequency) {
            std::cout << pair.first << " ";
        }
    }

    std::cout << "occur(s) " << maxFrequency << " time(s)." << std::endl;

    return 0;
}

