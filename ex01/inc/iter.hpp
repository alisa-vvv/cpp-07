/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   iter.hpp                                                :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/08/11 12:15:18 by avaliull            #+#    #+#           */
/*   Updated: 2026/08/11 12:32:56 by avaliull            ########   odam.nl   */
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

/*	Template required by the exercise	*/
template<typename TArr, typename TArrLen, typename TFunc>
void iter(TArr arr, TArrLen arr_len, TFunc func) {
	for (TArrLen i = 0; i < arr_len; i++) {
		func(arr[i]);
	}
}
/**/

/*	Testing	*/

template <typename T>
void	sqrt_val(T& val) {
	val *= val;
}

template <typename T>
void	add_obj(T& val) {
	val += val;
}

template <typename T>
void	print_val(const T& val) {
	std::cout << val << ' ';
}

/**/
