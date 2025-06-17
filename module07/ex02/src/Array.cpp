#include "../inc/Array.hpp"

template<typename T>
Array<T>::Array() : array(new T[0]), size(0) {}

template<typename T>
Array<T>::Array(unsigned int n)
{
	this->array = new T[n];
	for (unsigned int i = 0; i < n; i++)
		this->array[n] = 0;
	this->size = n;
}

template<typename T>
Array<T>::Array(Array const &src) {
	*this = src;
}

template<typename T>
Array<T>::~Array() {
	std::cout << "using default destructor for memory area of size: " << this->getSize() << std::endl; 
	delete [] this->array;
}

// assignement operator overload
template<typename T>
Array<T> &	Array<T>::operator=(const Array<T> &ptref)
{
	if (this != &ptref)
	{
		delete [] this->array;
		this->array = new T[ptref.size];
		this->size = ptref.size;
		for (int i = 0; i < ptref.size; i++)
			this->array[i] = ptref.array[i];
	}
	return *this;
}

// subscript operator overload implementation

template<typename T>
T&	Array<T>::operator[](unsigned int n) {
	if ((int)n > this->size - 1)
		throw Array::OutOfBoundsException();
	return this->array[n];
}

template<typename T>
const T& Array<T>::operator[](unsigned int n) const {
	// T	instance;

	if ((int)n > this->size - 1)
		throw Array::OutOfBoundsException();
	// instance = this->array[n];
	return this->array[n]; // return const reference to a point in the array
}


// exeptions

template <class T>
const char* Array<T>::OutOfBoundsException::what() const throw()
{
	return ("Value is out of bound.");
}

// getter for size

template<typename T>
unsigned int Array<T>::getSize() const {
	return this->size;
}