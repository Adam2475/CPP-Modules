#ifndef RPN_HPP
#define RPN_HPP

#include <sstream>
#include <iostream>
#include <cstdlib>
#include <stack>
#include <string>

class RPN {

    public:
        RPN();
        ~RPN();
        int evaluate(const std::string& expression);
    private:
        std::stack<int> stack;
        bool isOperator(const std::string& token);
        bool isDigit(const std::string& token) const;
        int applyOperator(const std::string& op, int a, int b) const;
};

#endif