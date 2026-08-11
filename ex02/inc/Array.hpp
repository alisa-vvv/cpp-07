/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   Array.hpp                                               :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/08/11 14:43:18 by avaliull            #+#    #+#           */
/*   Updated: 2026/08/11 14:47:02 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdexcept>

template <typename T> class Array {
private:
	unsigned int	_size = 0;
	T*				_array;
public:
	/*	Constructors and destructor	*/
	Array() {
		_array = new T[_size];
	}
	Array(unsigned int n) : _size(n) {
	 	_array = new T[_size];
	}
	Array(const Array& other) {
		_array = other._array;
		_size = other._size;
	}
	~Array() {
		delete[] _array;
	}
	/**/

	/*	Overloads	*/
	Array& operator=(const Array& other) {
		if (*this != other) {
			_array = other._array;
			_size = other._size;
		}
		return (this);
	}
	T& operator[](unsigned int index) {
		if (_size == 0 || index > _size - 1) {
			throw std::out_of_range("index " + std::to_string(index) + " out of bounds");
		}
		return (_array[index]);
	}
	/**/

	unsigned int	size() const {
		return (_size);
	}
};
