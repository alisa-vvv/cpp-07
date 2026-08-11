/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   Array.hpp                                               :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/08/11 14:43:18 by avaliull            #+#    #+#           */
/*   Updated: 2026/08/11 16:05:54 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
class Array {
private:
	unsigned int	_size = 0;
	T*				_array;
public:
	/*	Constructors and destructor	*/
	Array();
	Array(unsigned int n);
	Array(const Array& other);
	~Array();
	/**/

	/*	Overloads	*/
	Array& operator=(const Array& other);
	T& operator[](unsigned int index);
	const T& operator[](unsigned int index) const;
	/**/

	unsigned int	size() const;
};

/*	Definitions:	*/
#include "Array.tpp"
