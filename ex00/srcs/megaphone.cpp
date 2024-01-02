/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:36:54 by motoko            #+#    #+#             */
/*   Updated: 2024/01/02 17:05:55 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

char	ft_toupper(char ch)
{
	return static_cast<char>(std::toupper(static_cast<unsigned char>(ch)));
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
		{
			for (int j = 0; argv[i][j]; j++)
				std::cout << ft_toupper(argv[i][j]);
			std::cout << std::endl;
		}
	}
	return (0);
}
