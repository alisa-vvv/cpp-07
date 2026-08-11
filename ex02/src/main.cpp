/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   main.cpp                                                :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/08/11 14:48:08 by avaliull            #+#    #+#           */
/*   Updated: 2026/08/11 14:48:44 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

# ifndef CLR_NON
#  define	CLR_NON "\033[0m"
#  define	CLR_YEL "\033[93m"
#  define	CLR_CYA "\033[96m"
#  define	CLR_RED "\033[31m"
#  define	CLR_GRN "\033[92m"
#  define	CLR_MAG "\033[95m"
# endif // CLR_NON and other CLR defines

int main() {
	Array<int>	test(12);
	Array<int>	empty;

	// trying to access an empty array
	std::cout << "size of an empty array: " << empty.size() << '\n';
	try {
		std::cout << empty[0];
	}
	catch (const std::exception& e) {
		std::cout << e.what() << '\n';
	}
	std::cout << '\n';


	// set it up
	std::cout << CLR_YEL << "Orig: " << CLR_NON;
	for (unsigned int i = 0; i < test.size(); i++) {
		test[i] = i;
		std::cout<< test[i] << ' ';
	}
	std::cout << '\n';

	// editting the array
	for (unsigned int i = 0; i < test.size(); i++) {
		test[i] = i * i;
	}

	// result:

	std::cout << CLR_YEL << "After some changes: " << CLR_NON;
	for (unsigned int i = 0; i < test.size(); i++) {
		std::cout<< test[i] << ' ';
	}
	std::cout << '\n';

	try {
		std::cout << test[test.size() + 1] << '\n';
	}
	catch (const std::exception& e) {
		std::cout << e.what() << '\n';
	}
}
