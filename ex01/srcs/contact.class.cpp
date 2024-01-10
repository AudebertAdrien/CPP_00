/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 18:25:28 by motoko            #+#    #+#             */
/*   Updated: 2024/01/10 16:30:28 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "contact.class.hpp"

Contact::Contact(void) {
	std::cout << "Constructor Contact!" << std::endl;
 	_initialized = false;

}

Contact::Contact(std::string first_name, std::string last_name, std::string nick_name, std::string darkest_secret, std::string phone_number) : _first_name(first_name), _last_name(last_name), _nick_name(nick_name), _darkest_secret(darkest_secret), _phone_number(phone_number) {
	std::cout << "Constructor Contact with Params!" << std::endl;
}

Contact::~Contact(void) {
	std::cout << "Destructor Contact!" << std::endl;
}

bool	Contact::is_initialized(void) const {
	return (_initialized);		
}

void	display_contact(std::string str)
{
	int	column_width = 10;
	int	space_before = column_width - str.length();

	if (space_before >= 0) 
		std::cout << std::setw(column_width) << std::right << str;
	else
	{
		str = str.substr(0, column_width - 1);
		str += '.';
		std::cout << std::right << str;
	}
	std::cout << "|";
}

void	Contact::get_user_infos(void) {
	display_contact(_first_name);	
	display_contact(_last_name);	
	display_contact(_nick_name);	
	display_contact(_darkest_secret);	
	display_contact(_phone_number);	
	std::cout << std::endl;
}
