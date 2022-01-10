#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <algorithm>
#include <string>

template<typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
public:
	// default constructor
	// constructor just calls stack constructor since it's the same
	MutantStack(void) : std::stack<T>() {}
	// destructor
	// virtual to not interfere with parent destructor
	virtual ~MutantStack(void) {}
	// copy constructor
	// allows for conversion between stack and mutantStack
	MutantStack(std::stack<T, Container> const & src) : std::stack<T, Container>(src) {}
	MutantStack(MutantStack const & src) : std::stack<T, Container>(src) {}
	// assignment operator
	// no need to change anything here
	// using std::stack<T>::operator=;

	typedef typename std::stack<T, Container>::container_type::iterator iterator;
	// methods
	// std::begin and std::end return iterators on container c (whatever the container is)
	// so we can use it to point at the start and end of the stack
	iterator	begin() {return this->c.begin();}
	iterator	end() {return this->c.end();}
};

#endif
