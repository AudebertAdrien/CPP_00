/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:13:19 by motoko            #+#    #+#             */
/*   Updated: 2024/01/11 19:04:42 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include "iostream"

int	Account::_nbAccounts = 0;
/*
int	totalAmount = 0;
int	nbDeposits = 0;
int	totalNbDeposits = 0;
*/

Account::Account(void) {
	std::cout << "Contructor Account!" << std::endl;
}

Account::Account(int initial_deposit) {
	_amount = initial_deposit;
	_accountIndex = _nbAccounts++;
	/*
	_nbAccounts = nbAccounts++;
	_totalAmount = totalAmount;
	_totalNbDeposits = totalNbDeposits;
	_totalNbWithdrawals = totalNbWithdrawals;
	*/
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "created" << std::endl;
}

Account::~Account(void) {
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "closed" << std::endl;
}

void	Account::displayStatus(void) const
{
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "deposits:" << _nbDeposits << ";" << "withdrawals:" << _nbWithdrawals << std::endl;
}

void		Account::displayAccountsInfos(void) {
	std::cout << "totot" << std::endl;
	//[19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
	//std::cout << "accounts:" << nbAccounts << ";" << "total:" << totalAmount << ";" << "deposits:" << nbDeposits << ";" << "withdrawals:" << totalNbDeposits << std::endl;
}

/*
static int	getNbAccounts(void)
{
	return (_nbAccounts);
}

static int	getTotalAmount(void)
{
	return (_totalAmount);
}

static int	getNbDeposits(void)
{
	return (_totalNbDeposits);
}

static int	getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	makeDeposit(int deposit)
{
	_amount += deposit;
	_nbDeposits++;
}

bool	makeWithdrawal(int withdrawal)
{
	_amount -= withdrawal;
	_nbWithdrawals++;
}

int		checkAmount(void) const
{
}
*/
