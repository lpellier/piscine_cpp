/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:50:14 by lpellier          #+#    #+#             */
/*   Updated: 2021/10/18 19:23:20 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

template<typename T>
class Array {
private:
	T *				_array;
	unsigned int	_size;

public:
	Array<T>(void) : _size(0) {
		this->_array = new T[0];
	}
	Array<T>(unsigned int n) : _size(n) {
		this->_array = new T[n];
		// need to check default values
	}
	~Array<T>(void) {
		delete [] this->_array;
	}
	Array<T>(Array<T> const & src) : _size(src.size()) {
		this->_array = new T[src.size()];
		// need to check default values
	}
	Array<T> &	operator=(Array<T> const & src) {
		this->_array = new T[src.size()];
		this->_size = src.size();
		return *this;
	}
	T &			operator[](unsigned int index) {
		try {
			if (index > this->_size || index < 0)
				throw std::exception();
			return this->_array[index];
		} catch (std::exception & e) {
			std::cout << "Index out of bounds" << std::endl;
			return this->_array[0];
		}
	}
	
	unsigned int	size() const {
		return this->_size;
	}
};