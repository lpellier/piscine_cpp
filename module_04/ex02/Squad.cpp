#include "Squad.hpp"

//     ____                        _           _   _____                 _   _                  //
//    / ___|__ _ _ __   ___  _ __ (_) ___ __ _| | |  ___|   _ _ __   ___| |_(_) ___  _ __  ___  //
//   | |   / _  |  _ \ / _ \|  _ \| |/ __/ _  | | | |_ | | | |  _ \ / __| __| |/ _ \|  _ \/ __| //
//   | |__| (_| | | | | (_) | | | | | (_| (_| | | |  _|| |_| | | | | (__| |_| | (_) | | | \__ \ //
//    \____\__,_|_| |_|\___/|_| |_|_|\___\__,_|_| |_|   \__,_|_| |_|\___|\__|_|\___/|_| |_|___/ //

Squad::Squad(void) : _army(NULL), _count(0) {
	// std::cout << "Default constructor called" << std::endl;
}

Squad::~Squad(void) {
	for (int i = 0; i < this->_count; i++) {
		delete this->_army[i];
	}
	delete[] this->_army;
	// std::cout << "Destructor called" << std::endl;
}

Squad::Squad(Squad const & src) {
	// std::cout << "Copy constructor called" << std::endl;
	for (int i = 0; i < this->_count; i++) {
		delete this->_army[i];
	}
	delete[] this->_army;
	this->_army = new ISpaceMarine *[src.getCount()];
	for (int i = 0; i < this->_count; i++) {
		this->_army[i] = src.getUnit(i);
	}
}

Squad & Squad::operator=(Squad const & src) {
	// std::cout << "Assignment operator called" << std::endl;
	for (int i = 0; i < this->_count; i++) {
		delete this->_army[i];
	}
	delete[] this->_army;
	this->_army = new ISpaceMarine *[src.getCount()];
	for (int i = 0; i < this->_count; i++) {
		this->_army[i] = src.getUnit(i);
	}
	return *this;
}

//       _                                         //
//      / \   ___ ___ ___  ___ ___  ___  _ __ ___  //
//     / _ \ / __/ __/ _ \/ __/ __|/ _ \| '__/ __| //
//    / ___ \ (_| (_|  __/\__ \__ \ (_) | |  \__ \ //
//   /_/   \_\___\___\___||___/___/\___/|_|  |___/ //

int							Squad::getCount() const {
	return this->_count;
}

ISpaceMarine*				Squad::getUnit(int n) const {
	if (n >= 0 && n < this->_count)
		return this->_army[n];
	return NULL;
}

ISpaceMarine**				Squad::getArmy() const {
	return this->_army;
}

int							Squad::push(ISpaceMarine* newMarine) {
	if (!newMarine)
		return (this->_count);
	ISpaceMarine	**newArmy = new ISpaceMarine *[this->_count + 1];
	for (int i = 0; i < this->_count; i++) {
		newArmy[i] = this->_army[i];
 	}
	newArmy[this->_count] = newMarine;
	delete[] this->_army;
	this->_count++;
	this->_army = newArmy;
	return (this->_count);
}
