#include <iostream>
#include <time.h>
#include <cstring>
#include "Account.hpp"

int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
int Account::_nbAccounts = 0;

Account::Account(void) {
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = _nbAccounts;
	_nbAccounts++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::Account(int initial_deposit) {
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	this->_amount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account(void) {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

void			Account::makeDeposit(int deposit) {
	if (!deposit)
		return ;
	_totalNbDeposits++;
	this->_nbDeposits++;
	_totalAmount += deposit;
	this->_amount += deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount - deposit << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool			Account::makeWithdrawal(int withdrawal) {
	if (!withdrawal || withdrawal > this->_amount) {
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
		return false;
	}
	_totalNbWithdrawals++;
	this->_nbWithdrawals++;
	_totalAmount -= withdrawal;
	this->_amount -= withdrawal;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount + withdrawal << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return true;
}

void			Account::displayStatus(void) const {
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}


void		Account::_displayTimestamp(void) {
	time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];

    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "[%Y%m%d_%X]", &tstruct);
	std::string::size_type found;
	std::string str(buf, buf + strlen(buf));
	while ((found = str.find(':')) != str.npos)
		str.erase(found, 1);
	std::cout << str << " ";
}

void		Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

int		Account::getNbAccounts(void) {
	return _nbAccounts;
}

int		Account::getTotalAmount(void) {
	return _totalAmount;
}

int		Account::getNbDeposits(void) {
	return _totalNbDeposits;
}

int		Account::getNbWithdrawals(void) {
	return _totalNbWithdrawals;
}

