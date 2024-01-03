/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:36:54 by motoko            #+#    #+#             */
/*   Updated: 2024/01/02 20:42:27 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(int argc, char **argv)
{
	PhoneBook b1;
	PhoneBook b2(99);

	std::cout << "1: b1.foo = " << b1.foo << std::endl;
	//std::cout << "1: b2.foo = " << b2._print_private() << std::endl;

	b1.print_public();

	b1.foo = 42;
	std::cout << "after b1.boo = " << b1.foo << std::endl;

	return (0);
}
