/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:13:19 by motoko            #+#    #+#             */
/*   Updated: 2024/01/13 16:57:40 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include "iostream"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(void) {
	std::cout << "Contructor Account!" << std::endl;
}

void	display_time(void)
{
    char buffer[80];
    time_t currentTime;
    time(&currentTime);
    struct tm *localTime = localtime(&currentTime);
	if (strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", localTime));
    	std::cout << buffer;
}

Account::Account(int initial_deposit) {
	display_time();
	_amount = initial_deposit;
	_accountIndex = _nbAccounts++;
	_totalAmount += _amount;
	std::cout 
		<< "index:" << _accountIndex << ";" 
		<< "amount:" << _amount << ";" 
		<< "created" 
		<< std::endl;
}

Account::~Account(void) {
	display_time();
	std::cout 
		<< "index:" << _accountIndex << ";" 
		<< "amount:" << _amount << ";" 
		<< "closed" 
		<< std::endl;
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

int		Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::displayStatus(void) const {
	display_time();
	std::cout 
		<< "index:" << _accountIndex << ";" 
		<< "amount:" << _amount << ";" 
		<< "deposits:" << _nbDeposits << ";" 
		<< "withdrawals:" << _nbWithdrawals 
		<< std::endl;
}

void	Account::displayAccountsInfos(void) {
	display_time();
	std::cout 
		<< "accounts:" << _nbAccounts << ";" 
		<< "total:" << _totalAmount << ";" 
		<< "deposits:" << _totalNbDeposits 
		<< ";" << "withdrawals:" 
		<< _totalNbWithdrawals 
		<< std::endl;
}

void	Account::makeDeposit(int deposit) {
	display_time();
	int	p_amount = _amount;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout 
		<< "index:" << _accountIndex << ";" 
		<< "p_amount:" << p_amount << ";" 
		<< "deposit:" << deposit << ";" 
		<< "amount:" << _amount << ";" 
		<< "nb_deposits:" << _nbDeposits 
		<< std::endl;
}

bool	Account::makeWithdrawal(int withdrawal) {
	display_time();
	int	p_amount = _amount;

	if (withdrawal > _amount)
	{
		std::cout 
			<< "index:" << _accountIndex << ";" 
			<< "p_amount:" << p_amount << ";" 
			<< "withdrawal:" 
			<< "refused" 
			<< std::endl;
		return (false);
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout 
		<< "index:" << _accountIndex << ";" 
		<< "p_amount:" << p_amount << ";" 
		<< "withdrawal:" << withdrawal << ";" 
		<< "amount:" << _amount << ";" 
		<< "nb_withdrawals:" << _nbWithdrawals 
		<< std::endl;
	return (true);
}
