/*
1, 1, 1, 1, 1
1, 1, 1, 2
1, 1, 2, 1
1, 1, 3
1, 2, 1, 1
1, 2, 2
1, 3, 1
1, 4
2, 1, 1, 1
2, 1, 2
2, 2, 1
2, 3
3, 1, 1
3, 2
4, 1
5

 */
#include <iostream>
#include <vector>

void findCombinations(int target, std::vector<int>& currentCombination, std::vector<std::vector<int>>& combinations) {
    // Base case: if the target is 0, add the current combination to the list of combinations
    if (target == 0) {
        combinations.push_back(currentCombination);
        return;
    }
    
    // Recursive case: explore all possible combinations
    for (int num = 1; num <= target; ++num) {
        if (num <= target) {
            currentCombination.push_back(num);
            findCombinations(target - num, currentCombination, combinations);
            currentCombination.pop_back();
        }
    }
}

void printCombinations(int target) {
    std::vector<std::vector<int>> combinations;
    std::vector<int> currentCombination;
    
    findCombinations(target, currentCombination, combinations);
    
    // Print the combinations
    for (const auto& combination : combinations) {
        for (size_t i = 0; i < combination.size(); ++i) {
            std::cout << combination[i];
            if (i != combination.size() - 1) {
                std::cout << ", ";
            }
        }
        std::cout << std::endl;
    }
}

int main() {
    int target = 5;
    printCombinations(target);
    
    return 0;
}

