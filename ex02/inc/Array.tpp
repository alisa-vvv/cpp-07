#pragma once

#include "Array.hpp"
#include <stdexcept>

/*	Constructos and destructor	*/
template <typename T>
Array<T>::Array() {
	_array = new T[_size];
}

template <typename T>
Array<T>::Array(unsigned int n)
	: _size(n)
{
 	_array = new T[_size];
}

template <typename T>
Array<T>::Array(const Array& other) {
	_array = other._array;
	_size = other._size;
}

template <typename T>
Array<T>::~Array() {
	delete[] _array;
}
/**/

/*	Overloads	*/
template <typename T>
Array<T>& Array<T>::operator=(const Array& other) {
	if (*this != other) {
		_array = other._array;
		_size = other._size;
	}
	return (this);
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
	if (_size == 0 || index > _size - 1) {
		throw std::out_of_range("index " + std::to_string(index) + " out of bounds");
	}
	return (_array[index]);
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
	if (_size == 0 || index > _size - 1) {
		throw std::out_of_range("index " + std::to_string(index) + " out of bounds");
	}
	return (_array[index]);
}
/**/

template <typename T>
unsigned int	Array<T>::size() const {
	return (_size);
}
