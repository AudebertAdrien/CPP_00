/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:36:54 by motoko            #+#    #+#             */
/*   Updated: 2024/01/02 18:33:21 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(int argc, char **argv)
{
	PhoneBook b1;

	std::cout << "Hello world!" << std::endl;

	b1.foo = 42;
	std::cout << "b1.boo = " << b1.foo << std::endl;

	b1.print_string();
	return (0);
}
