/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:36:54 by motoko            #+#    #+#             */
/*   Updated: 2024/01/03 14:51:45 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(int argc, char **argv)
{
	PhoneBook b1;
	PhoneBook b2(99);

	PhoneBook	*b3 = &b1;

	int	PhoneBook::*p = NULL;
	void	(PhoneBook::*f)(void) const;

	p = &PhoneBook::foo;
	std::cout << "1: b1.foo = " << b1.foo << std::endl;
	b1.*p = 1234567;
	std::cout << "2: b1.foo = " << b1.foo << std::endl;
	b3->*p = 54321;
	std::cout << "3: b1.foo = " << b1.foo << std::endl;

	f = &PhoneBook::_print_private;
	(b1.*f)();
	(b3->*f)();

	b1.print_public(2222);
	b2.print_public(1111);

	b1.foo = 42;
	std::cout << "4: b1.boo = " << b1.foo << std::endl;

	return (0);
}
