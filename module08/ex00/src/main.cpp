#include <iostream>
#include <vector>
#include <list>
#include "../inc/easyfind.hpp"

int main() {
    try {
        std::vector<int> vec(5);

        for(int i = 0; i < 5; i++)
        {
            vec[i] = i * 10;
        }
        std::list<int> lst;

        lst.push_back(5);
        lst.push_back(10);
        lst.push_back(15);
        lst.push_back(20);
        lst.push_back(30);

        // std::cout << "Found in vector: " << *easyfind(vec, 3) << std::endl;
        std::cout << "Found in vector: " << *easyfind(vec, 10) << std::endl;
        std::cout << "Found in list: " << *easyfind(lst, 30) << std::endl;

        // This will throw
        std::cout << "Trying to find 99 in vector..." << std::endl;
        easyfind(vec, 99);
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}