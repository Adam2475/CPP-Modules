#include "../inc/iter.hpp"

template <typename T>
void printElement(const T& elem) {
    std::cout << elem << " ";
}

template <typename T>
void increment(T& elem) {
    ++elem;
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    std::string strArray[] = {"apple", "banana", "cherry"};
    const int constArray[] = {1, 2, 3, 4, 5};
    
    std::cout << "Original intArray: ";
    iter(intArray, 5, printElement<int>);
    std::cout << std::endl;

    iter(intArray, 5, increment<int>);

    // const array are accepted but not modifiable
    // iter(constArray, 5, increment<int>);

    std::cout << "Modified intArray: ";
    iter(intArray, 5, printElement<int>);
    std::cout << std::endl;

    // std::cout << "Modified constArray: ";
    // iter(intArray, 5, printElement<int>);
    // std::cout << std::endl;

    std::cout << "String array: ";
    iter(strArray, 3, printElement<std::string>);
    std::cout << std::endl;

    return 0;
}
