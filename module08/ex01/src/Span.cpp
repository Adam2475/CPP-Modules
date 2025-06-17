#include "../inc/Span.hpp"

///////////////////////////
// Constructors
///////////////////////////

Span::Span() : maxSize(0) {}

Span::Span(unsigned int N) : maxSize(N) {}

Span::Span(Span const &src)
{
	// manually copy each parameter
	this->numbers = src.numbers;
	this->maxSize = src.maxSize;
}

Span::~Span() {
}

Span &Span::operator=(Span const &rSym)
{
	// manually copies values after checking for self-assignement
	if (this != &rSym)
	{
		this->numbers = rSym.numbers;
		this->maxSize = rSym.maxSize;
	}
	return *this;
}

/////////////////////////
// Member Functions
/////////////////////////

void	Span::addNumber(int n)
{
	int cnt = numbers.size();
	if (cnt >= (int)this->maxSize)
		throw std::overflow_error("Span is full!");
	// push an element to the last position of the vector
	this->numbers.push_back(n);
}

int		Span::shortestSpan()
{
	if (numbers.size() < 2)
		throw std::logic_error("Not enough numbers to find a Span");

	std::vector<int> sorted = numbers;
	std::sort(sorted.begin(), sorted.end());

	int minSpan = std::numeric_limits<int>::max();

	for (size_t i = 1; i < sorted.size(); ++i) {
        int span = sorted[i] - sorted[i - 1];
        if (span < minSpan)
            minSpan = span;
    }
    return minSpan;
}


int		Span::longestSpan() const
{
	if (numbers.size() < 2)
		throw std::logic_error("Not enough numbers to find a span!");
		
	int	max = *std::max_element(this->numbers.begin(), this->numbers.end());
	int	min = *std::min_element(this->numbers.begin(), this->numbers.end());

	return max - min;
}
