#include <iostream>
#include <stack>
#include <string>

bool isBalanced(const std::string &expression) {
    std::stack<char> s;

    for (char ch : expression) {
        if (ch == '(') {
            s.push(ch);
        } else if (ch == ')') {
            // If the stack is empty or top is not '('
            if (s.empty() || s.top() != '(') {
                return false;
            }
            s.pop();
        }
    }

    // At the end, the stack should be empty if balanced
    return s.empty();
}

int main() {
    std::string expression;
    std::cout << "Enter an expression with parentheses: ";
    std::cin >> expression;

    if (isBalanced(expression)) {
        std::cout << "The parentheses are balanced." << std::endl;
    } else {
        std::cout << "The parentheses are not balanced." << std::endl;
    }

    return 0;
}
