#include "../inc/RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

bool RPN::isOperator(const std::string& token)
{
    return token == "+" || token == "-" || token == "*" || token == "/";
}

bool RPN::isDigit(const std::string& token) const
{
    return token.length() == 1 && isdigit(token[0]);
}

int RPN::applyOperator(const std::string& op, int a, int b) const
{
    if (op == "+") return a + b;
    if (op == "-") return a - b;
    if (op == "*") return a * b;
    if (op == "/") {
        if (b == 0)
            throw std::runtime_error("Division by zero");
        return a / b;
    }
    throw std::runtime_error("Unknown operator");
}

int RPN::evaluate(const std::string& expression)
{
    std::istringstream iss(expression);
    std::string token;

    // exctract 1 by 1 the space-separated values from iss
    // to token
    while (iss >> token)
    {
        if (isDigit(token))
        {
            stack.push(token[0] - '0');
        }
        else if (isOperator(token))
        {
            if (stack.size() < 2)
                throw std::runtime_error("insufficient values");
            /** 
            * @brief : top: return a reference to the top element of the stack
            */
            int b = stack.top();
            /** 
            * @brief : pop: remove the top element of the stack
            */
            stack.pop();
            int a = stack.top();
            stack.pop();
            int result = applyOperator(token, a, b);
            stack.push(result);
        }
        else
        {
            throw std::runtime_error("Invalid Token");
        }
    }

    if (stack.size() != 1)
        throw std::runtime_error("Invalid Expression!");

    return stack.top();
}