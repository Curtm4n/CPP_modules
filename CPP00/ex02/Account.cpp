/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 13:01:41 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/14 16:38:04 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

Account::Account(int initial_deposit)
{
	Account::_displayTimestamp();
	this->_accountIndex = Account::getNbAccounts();
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	Account::_nbAccounts++;
	std::cout << "index:"<< this->_accountIndex << ";amount:";
	std::cout << this->_amount << ";created" << std::endl;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:"<< this->_accountIndex << ";amount:";
	std::cout << this->_amount << ";closed" << std::endl;
}

void    Account::makeDeposit(int deposit)
{
	int	nb;

	if (deposit <= 0)
		return ;
	Account::_displayTimestamp();
	nb = this->_accountIndex;
    std::cout << "index:" << nb << ";p_amount:";
    nb = this->_amount;
    std::cout << nb << ";deposit:" << deposit << ";amount:";
	this->_amount += deposit;
	nb = this->_amount;
	this->_nbDeposits++;
	std::cout << nb << ";nb_deposits:" << this->_nbDeposits << std::endl;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
}

bool    Account::makeWithdrawal(int withdrawal)
{
	int nb;

	if (withdrawal <= 0)
		return (false);
	Account::_displayTimestamp();
	nb = this->_accountIndex;
    std::cout << "index:" << nb << ";p_amount:";
    nb = this->_amount;
    std::cout << nb << ";withdrawal:";
	if (withdrawal > this->_amount)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	std::cout << withdrawal << ";amount:";
	this->_amount -= withdrawal;
	nb = this->_amount;
	this->_nbWithdrawals++;
	std::cout << nb << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	return (true);
}

int Account::checkAmount(void) const
{
	std::cout << this->_amount << std::endl;
	return (this->_amount);
}

void    Account::displayStatus(void) const
{
	int		nb;

	Account::_displayTimestamp();
	nb = this->_accountIndex;
    std::cout << "index:" << nb << ";amount:";
    nb = this->_amount;
    std::cout << nb << ";deposits:";
    nb = this->_nbDeposits;
    std::cout << nb << ";withdrawals:";
	nb = this->_nbWithdrawals;
	std::cout << nb << std::endl;
}

void	Account::_displayTimestamp(void)
{
	char		str[20];
	std::time_t	curr_time;
	std::tm		*timeptr;

	time(&curr_time);
	timeptr = localtime(&curr_time);
	strftime(str, 20, "[%Y%m%d_%H%M%S] ", timeptr);
	std::cout << str;
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	int		nb;

	nb = Account::getNbAccounts();
	Account::_displayTimestamp();
    std::cout << "accounts:" << nb << ";total:";
    nb = Account::getTotalAmount();
    std::cout << nb << ";deposits:";
    nb = Account::getNbDeposits();
    std::cout << nb << ";withdrawals:";
	nb = Account::getNbWithdrawals();
	std::cout << nb << std::endl;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
