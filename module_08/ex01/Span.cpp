#include "Span.hpp"

//                                 _             _        ___                         _                   //
//                                (_)           | |      / __)                    _  (_)                  //
//    ____ _____ ____   ___  ____  _  ____ _____| |    _| |__ _   _ ____   ____ _| |_ _  ___  ____   ___  //
//   / ___|____ |  _ \ / _ \|  _ \| |/ ___|____ | |   (_   __) | | |  _ \ / ___|_   _) |/ _ \|  _ \ /___) //
//  ( (___/ ___ | | | | |_| | | | | ( (___/ ___ | |     | |  | |_| | | | ( (___  | |_| | |_| | | | |___ | //
//   \____)_____|_| |_|\___/|_| |_|_|\____)_____|\_)    |_|  |____/|_| |_|\____)  \__)_|\___/|_| |_(___/  //

Span::Span(void) : _max(0) {
	// std::cout << "Default constructor called" << std::endl;
}

Span::Span(unsigned int n) : _max(n) {
	// std::cout << "Parameter constructor called" << std::endl;
}

Span::~Span(void) {
	// std::cout << "Destructor called" << std::endl;
}

Span::Span(Span const & src) {
	// std::cout << "Copy constructor called" << std::endl;
	this->_storage = src.getStorage();
	_max = src._max;
}

Span & Span::operator=(Span const & src) {
	// std::cout << "Assignment operator called" << std::endl;
	this->_storage = src.getStorage();
	_max = src._max;
	return *this;
}

//   _____  ____ ____ _____  ___  ___  ___   ____ ___  //
//  (____ |/ ___) ___) ___ |/___)/___)/ _ \ / ___)___) //
//  / ___ ( (__( (___| ____|___ |___ | |_| | |  |___ | //
//  \_____|\____)____)_____|___/(___/ \___/|_|  (___/  //

std::vector<int>	Span::getStorage(void) const {
	return this->_storage;
}

//                     _               _       //
//                 _  | |             | |      //
//   ____  _____ _| |_| |__   ___   __| | ___  //
//  |    \| ___ (_   _)  _ \ / _ \ / _  |/___) //
//  | | | | ____| | |_| | | | |_| ( (_| |___ | //
//  |_|_|_|_____)  \__)_| |_|\___/ \____(___/  //

void				Span::addNumber(const int toBeAdded) {
	if (this->_storage.size() == this->_max)
		throw std::exception();
	this->_storage.push_back(toBeAdded);
	std::sort(_storage.begin(), _storage.end());
}

void				Span::addNumber(std::vector<int>::iterator _begin, std::vector<int>::iterator _end) {
	if (this->_storage.size() + std::distance(_begin, _end) > this->_max)
		throw std::exception();
	this->_storage.insert(this->_storage.end(), _begin, _end);
	std::sort(_storage.begin(), _storage.end());
}

unsigned int		Span::shortestSpan(void) const {
	unsigned int shortestSpan = UINT_MAX;
	std::vector<int>::const_iterator _end = _storage.end() - 1;

	if (this->_storage.size() < 2)
		throw std::exception();
	for (; _end != _storage.begin(); _end--) {
		if (static_cast<unsigned int>((*(_end) - *(_end - 1))) < shortestSpan) 
			shortestSpan = static_cast<unsigned int>((*(_end) - *(_end - 1)));
	}
	return shortestSpan;
}

unsigned int		Span::longestSpan(void) const {
	if (this->_storage.size() < 2)
		throw std::exception();
	return (*(_storage.end() - 1) - *(_storage.begin()));
}

