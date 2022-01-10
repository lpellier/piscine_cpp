/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpellier <lpellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:50:14 by lpellier          #+#    #+#             */
/*   Updated: 2022/01/10 14:51:35 by lpellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stdlib.h>

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
		for (unsigned int i = 0; i < n; i++)
			this->_array[i] = T();
	}

	~Array<T>(void) {
		delete [] this->_array;
	}
	
	Array<T>(Array<T> const & src) : _size(src._size) {
		this->_array = new T[src._size];
		for (unsigned int i = 0; i < src._size; i++)
			this->_array[i] = src._array[i];
	}
	
	Array<T> &	operator=(Array<T> const & src) {
		this->_array = new T[src._size];
		this->_size = src._size;
		for (unsigned int i = 0; i < src._size; i++)
			this->_array[i] = src._array[i];
		return *this;
	}
	
	T &			operator[](unsigned int index) {
		if (index >= this->_size || index < 0)
			throw std::exception();
		return this->_array[index];
	}
	
	unsigned int	size() const {
		return this->_size;
	}
};