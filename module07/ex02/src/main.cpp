#include "Array.cpp"

template <typename T>
void printArray(const std::string& name, const Array<T>& arr) {
    std::cout << name << " (size: " << arr.getSize() << "): [";
    for (unsigned int i = 0; i < arr.getSize(); ++i) {
        std::cout << arr[i];
        if (i < arr.getSize() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
}

int	main()
{
	Array<int> a;
	Array<int> b(5);
	std::cout << "array A size:" << a.getSize() << std::endl;
	std::cout << "array B size:" << b.getSize() << std::endl;

	// Element access and modification

	for (unsigned int i = 0; i < b.getSize(); ++i) {
        b[i] = i * 10; // Assign values
    }

	printArray("B array (after assignment)", b);

	// accessing test
	std::cout << "Element at index 2: " << b[2] << std::endl; 
	// invalid accessing test
	try
	{
		std::cout << "Element at index 7: " << b[7] << std::endl; 
	}
	catch(const std::exception& e)
	{
		std::cout << "Caught exception: " << e.what() << std::endl;
	}

	// try
	// {
	// 	std::
	// }
	return (0);
}