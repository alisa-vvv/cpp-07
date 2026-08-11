/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   little_funcs.hpp                                        :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/08/10 19:22:46 by avaliull            #+#    #+#           */
/*   Updated: 2026/08/10 19:51:33 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

# ifndef CLR_NON
#  define	CLR_NON "\033[0m"
#  define	CLR_YEL "\033[93m"
#  define	CLR_CYA "\033[96m"
#  define	CLR_RED "\033[31m"
#  define	CLR_GRN "\033[92m"
#  define	CLR_MAG "\033[95m"
# endif // CLR_NON and other CLR defines

template<typename T>
T	max(T a, T b) {
	if (a > b)
		return (a);
	return (b);
}

template<typename T>
T	min(T a, T b) {
	if (a < b)
		return (a);
	return (b);
}

template<typename T>
void	swap(T& a, T& b) {
	T c = a;
	a = b;
	b = c;
}

template<typename T>
void	test_swap(T a, T b) {
	std::cout << "Before:\n";
	std::cout << "a: " << a << '\n';
	std::cout << "b: " << b << '\n';
	swap(a, b);
	std::cout << "After:\n";
	std::cout << "a: " << a << '\n';
	std::cout << "b: " << b << '\n';
}
