#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <climits>
#include <string>
#include <vector>
#include <algorithm>

class Span {
private:
	// data
	std::vector<int>	_storage;
	unsigned int		_max;

	// default constructor
	Span(void);

public:
	// parameter constructor
	Span(unsigned int n);
	// destructor
	~Span(void);
	// copy constructor
	Span(Span const & src);
	// assignment operator
	Span & operator=(Span const & src);

	// accessors
	std::vector<int>	getStorage(void) const;
	unsigned int		getFilled(void) const;

	// methods
	void				addNumber(const int toBeAdded);
	void				addNumber(std::vector<int>::iterator _begin, std::vector<int>::iterator _end);
	unsigned int		shortestSpan(void) const;
	unsigned int		longestSpan(void) const;
};

#endif
