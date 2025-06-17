#ifndef WHATEVER_HPP
# define WHATEVER_HPP

// templates make us write generic code
// that can work with any data type

// template definition
template <typename T>
void swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
T const &min(T const &a, T const &b)
{
	return (a < b ? a : b);
}

template <typename T>
T const &max(T const &a, T const &b)
{
	return (a > b ? a : b);
}

#endif