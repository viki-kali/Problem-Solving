#include <iostream>
#include <vector>

void generateSubsets(const std::string& str, int index, std::string currentSubset, std::vector<std::string>& allSubsets) {
    if (index == str.length()) {
        allSubsets.push_back(currentSubset);
        return;
    }

    // Include the current character in the subset
    generateSubsets(str, index + 1, currentSubset + str[index], allSubsets);

    // Exclude the current character from the subset
    generateSubsets(str, index + 1, currentSubset, allSubsets);
}

int main() {
    std::string input = "abc";
    std::vector<std::string> allSubsets;

    generateSubsets(input, 0, "", allSubsets);

    // Display all subsets
    for (const std::string& subset : allSubsets) {
        std::cout << "{" << subset << "}" << std::endl;
    }

    return 0;
}

