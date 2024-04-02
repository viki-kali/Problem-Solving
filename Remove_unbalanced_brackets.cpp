#include <iostream>
#include <stack>
#include <string>

std::string removeUnbalancedParentheses(const std::string& expr) {
    std::stack<int> st;
    std::string result;

    for (char c : expr) {
        if (c == '(') {
            st.push(result.size());
            result.push_back(c);
        } else if (c == ')') {
            if (!st.empty()) {
                st.pop();
                result.push_back(c);
            }
        } else {
            result.push_back(c);
        }
    }

    // Remove extra opening parentheses
    while (!st.empty()) {
        result.erase(result.begin() + st.top());
        st.pop();
    }

    return result;
}

int main() {
    std::string input1 = "((abc)((de))";
    std::string input2 = "(a(b)))(cd)";
    std::string input3 = "(a(b)))(c(d)";
    std::string input4 = "(ab))(c(d))))";
    std::string input5 = "(((ab)";

    std::cout << "Input 1: " << removeUnbalancedParentheses(input1) << std::endl;
    std::cout << "Input 2: " << removeUnbalancedParentheses(input2) << std::endl;
    std::cout << "Input 3: " << removeUnbalancedParentheses(input3) << std::endl;
    std::cout << "Input 4: " << removeUnbalancedParentheses(input4) << std::endl;
    std::cout << "Input 5: " << removeUnbalancedParentheses(input5) << std::endl;

    return 0;
}

