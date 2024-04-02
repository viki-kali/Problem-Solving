#include <iostream>

// Template function to find the maximum of two values
template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int intResult = findMax(5, 10);
    std::cout <<intResult << std::endl;
    char res = findMax('A', 'B');
    std::cout <<res << std::endl;
    return 0;
}

