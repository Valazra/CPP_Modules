#include <iostream>
#include "Account.hpp"
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_displayTimestamp();
	_nbAccounts++;
	_totalAmount += this->_amount;
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	return ; 
}

Account::~Account(void)
{
	_displayTimestamp();
	_nbAccounts--;
	_totalAmount -= this->_amount;
	_totalNbDeposits -= this->_nbDeposits;
	_totalNbWithdrawals -= this->_nbWithdrawals;
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl; 
	return ;
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

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl; 
	return ;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
	return ;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
	return ;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	if (withdrawal > _amount)
	{
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount  << ";withdrawal:refused"  << std::endl;
		return (false);
	}
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	std::cout << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

void	Account::_displayTimestamp(void)
{
//	std::cout << "[19920104_091532] ";
	time_t ttime = time(NULL);
	tm* elapsed_time = localtime(&ttime);

	std::cout << '[' << elapsed_time->tm_year + 1900;
	if (elapsed_time->tm_mon + 1 < 10)
		std::cout << "0";
	std::cout << elapsed_time->tm_mon + 1;
	if (elapsed_time->tm_mday < 10)
		std::cout << "0";
	std::cout << elapsed_time->tm_mday << "_";
	if (elapsed_time->tm_hour < 10)
		std::cout << "0";
	std::cout << elapsed_time->tm_hour;
	if (elapsed_time->tm_min < 10)
		std::cout << "0";
	std::cout << elapsed_time->tm_min;
	if (elapsed_time->tm_sec < 10)
		std::cout << "0";
	std::cout << elapsed_time->tm_sec << "] ";
	return ;
}

int	Account::checkAmount(void) const
{
	return (this->_amount);
}

Account::Account(void) : _accountIndex(_nbAccounts), _amount(0), _nbDeposits(0), _nbWithdrawals(0)
{
	_displayTimestamp();
	_nbAccounts++;
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	return ;
}
