#include <iostream>
#include <stack>
#include <string>

bool isValidOperator(char op) {
    return op == '+' || op == '-' || op == '*' || op == '/';
}

bool isValidOperand(char operand) {
    return (operand >= 'a' && operand <= 'z') || (operand >= 'A' && operand <= 'Z');
}

bool isValidExpression(const std::string& expression) {
    std::stack<char> stack;

    for (char ch : expression) {
        if (ch == '(') {
            stack.push(ch);
        } else if (ch == ')') {
            if (stack.empty() || stack.top() != '(') {
                return false; // Invalid expression: unbalanced parentheses
            }
            stack.pop();
        } else if (isValidOperator(ch)) {
            if (stack.empty() || !isValidOperand(stack.top())) {
                return false; // Invalid expression: operator without operand
            }
            stack.pop(); // Pop the operand
            stack.push(ch); // Push the operator
        } else if (isValidOperand(ch)) {
            stack.push(ch);
        } else {
            return false; // Invalid expression: invalid character
        }
    }

    // Check if the expression ends with an operand
    return !stack.empty() && isValidOperand(stack.top());
}

int main() {
    std::string expression;

    std::cout << "Enter the mathematical expression: ";
    std::getline(std::cin, expression);

    if (isValidExpression(expression)) {
        std::cout << "Valid" << std::endl;
    } else {
        std::cout << "Invalid" << std::endl;
    }

    return 0;
}

