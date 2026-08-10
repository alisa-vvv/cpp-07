/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   main.cpp                                                :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/08/10 19:21:12 by avaliull            #+#    #+#           */
/*   Updated: 2026/08/10 19:54:24 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "little_funcs.hpp"
#include <iostream>

int	main() {
	const std::string bars = "=====";
	std::cout << CLR_YEL << bars << "max()" << bars << CLR_NON << '\n';
	std::cout << max(1, 2) << '\n';
	std::cout << max(2, 1) << '\n';
	std::cout << max(3, 3) << '\n';
	std::cout << max(1.1, 2.2) << '\n';
	std::cout << max(2.2, 1.1) << '\n';
	std::cout << max(3.3, 3.3) << '\n';

	std::cout << CLR_YEL << bars << "min()" << bars << CLR_NON << '\n';
	std::cout << min(1, 2) << '\n';
	std::cout << min(2, 1) << '\n';
	std::cout << min(3, 3) << '\n';
	std::cout << min(1.1, 2.2) << '\n';
	std::cout << min(2.2, 1.1) << '\n';
	std::cout << min(3.3, 3.3) << '\n';


	std::cout << CLR_YEL << bars << "swap()" << bars << CLR_NON << '\n';
	test_swap(13, 47);
	test_swap(25.38, 9.3);
	test_swap("plink", "plonk");


	std::cout << CLR_YEL << bars << " Example from subject.pdf " << bars << CLR_NON << '\n';
	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
}
