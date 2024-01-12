/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:36:54 by motoko            #+#    #+#             */
/*   Updated: 2024/01/12 16:18:36 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>
#include <functional>
#include "Account.hpp"

int	main(void)
{
	Account	t(42);
	Account	y(54);
	Account	z(60);

	Account::displayAccountsInfos();

	t.displayStatus();
	y.displayStatus();
	z.displayStatus();

	t.makeDeposit(5);
	y.makeDeposit(765);

	Account::displayAccountsInfos();

	t.makeWithdrawal(100);
	y.makeWithdrawal(10);

	Account::displayAccountsInfos();

	t.displayStatus();
	y.displayStatus();
	z.displayStatus();

	return (0);
}
