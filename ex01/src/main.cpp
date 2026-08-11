/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   main.cpp                                                :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/08/11 12:20:56 by avaliull            #+#    #+#           */
/*   Updated: 2026/08/11 12:33:05 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

int main() {
	const size_t	arr_len = 10;

	{
		std::cout << CLR_YEL << "\nTesting int:\n";
		int	int_arr[10] { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, };

		std::cout << CLR_YEL << "Before: " << CLR_NON;
		iter(int_arr, arr_len, print_val<int>);
		std::cout << '\n';

		iter(int_arr, arr_len, sqrt_val<int>);

		std::cout << CLR_YEL << "After: " << CLR_NON;
		iter(int_arr, arr_len, print_val<int>);
		std::cout << '\n';
	}


	{
		std::cout << CLR_YEL << "\nTesting float:\n";
		float	float_arr[10] { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10 };

		std::cout << CLR_YEL << "Before: " << CLR_NON;
		iter(float_arr, arr_len, print_val<float>);
		std::cout << '\n';

		iter(float_arr, arr_len, sqrt_val<float>);

		std::cout << CLR_YEL << "After: " << CLR_NON;
		iter(float_arr, arr_len, print_val<float>);
		std::cout << '\n';
	}

	{
		std::cout << CLR_YEL << "\nTesting string:\n";
		std::string	str_arr[10] { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J" };

		std::cout << CLR_YEL << "Before: " << CLR_NON;
		iter(str_arr, arr_len, print_val<std::string>);
		std::cout << '\n';

		iter(str_arr, arr_len, add_obj<std::string>);

		std::cout << CLR_YEL << "After: " << CLR_NON;
		iter(str_arr, arr_len, print_val<std::string>);
		std::cout << '\n';
	}
}
