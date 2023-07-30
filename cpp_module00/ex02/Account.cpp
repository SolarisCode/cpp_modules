/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 23:27:27 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/05 21:53:03 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctime>
#include <sstream>
#include "Account.hpp"

Account::Account( void ) : _accountIndex(Account::_nbAccounts),
				_amount(0), _nbDeposits(0), _nbWithdrawals(0) {
	Account::_nbAccounts++;
	return ;
}

Account::Account(int initial_deposit) : _accountIndex(Account::_nbAccounts),
				_amount(initial_deposit), _nbDeposits(1), _nbWithdrawals(0) {
	Account::_nbAccounts++;
	Account::_totalAmount += _amount;
	Account::_totalNbDeposits++;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" <<
		_amount << ";created" << std::endl;
	return;
}

void	Account::makeDeposit( int deposit ) {
	int	p_amount;

	p_amount = _amount;
	_amount += deposit;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	_nbDeposits++;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << "p_amount:" << p_amount <<
		";deposit:" << deposit << ";amount:" << _amount <<
		";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	int	p_amount;

	p_amount = _amount;
	if (withdrawal > _amount) {
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" <<
		p_amount << ";withdrawal:refused" << std::endl;
		return (false);
	}
	_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	_nbWithdrawals++;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << "p_amount:" << p_amount <<
		";withdrawal:" << withdrawal << ";amount:" << _amount <<
		";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

int		Account::checkAmount( void ) const {
	return (_amount);
}

void	Account::displayStatus( void ) const {
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount <<
		";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
	return;
}

Account::~Account(void) {
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
	return;
}

int	Account::getNbAccounts( void ) {
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void ) {
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void ) {
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ) {
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts <<
		";total:" << Account::_totalAmount <<
		";deposits:" << Account::_totalNbDeposits <<
		";withdrawals:" << Account::_totalNbWithdrawals <<
		std::endl;
	return;
}

void	Account::_displayTimestamp( void ) {
	std::time_t			currentTime;
	std::tm*			localTime;
	std::ostringstream	timeStamp;

	currentTime = std::time(nullptr);
	localTime = std::localtime(&currentTime);
	timeStamp << "[" << std::put_time(localTime, "%Y%m%d_%H%M%S") << "] ";
	std::cout << timeStamp.str();
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
