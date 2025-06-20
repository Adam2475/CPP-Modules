#include "../inc/RPN.hpp"

// The Reverse Polish notation is a way of writing expressions
// without parenthesis

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Error, wrong number of arguments!" << std::endl;
        return 1;
    }
    try {
        RPN rpn;
        int result = rpn.evaluate(av[1]);
        std::cout << result << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception catched: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}

/* test cases:

$ ./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
42

$ ./RPN "7 7 * 7 -"
42

$ ./RPN "1 2 * 2 / 2 * 2 4 - +"
0

$ ./RPN "(1 + 1)"
Error

$ ./RPN "1 2 + +"
Error

*/