#include <iostream>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void) {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[19];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "[%Y%m%d_%H%M%S] ", &tstruct);
    std::cout << buf <<std::ends;
}

void Account::makeDeposit(int deposit)
{
   _displayTimestamp();
    this->_totalAmount += deposit;
    this->_totalNbDeposits++;
    _nbDeposits++;
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ":deposits:" << deposit;
    _amount += deposit;
    std::cout << ";amount:"<< _amount << ";nb_deposits:" << _nbDeposits << ";" << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
   std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
    if (checkAmount() > withdrawal)
    {
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;
        _nbWithdrawals++;
        _amount -= withdrawal;
        std::cout	<< withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl; 
    }
    else
        std::cout << "refused\n";
    return (true);
}

int Account::checkAmount(void) const
{
    return (this->_amount);
}

void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout   << "index:" << _accountIndex << ";amount:" << _amount << ":deposits:"
                << _nbDeposits << ";whithdrawals:" << _nbWithdrawals << std::endl;
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout	<< "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:"
				<< _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << "\n";
}

Account::Account(int initial_deposit)
{
    this->_accountIndex = this->_nbAccounts;
    this->_nbDeposits = this->_totalNbDeposits;
    this->_amount = initial_deposit;
    this->_nbAccounts += 1;
    this->_totalAmount += this->_amount;
    this->_nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";created\n";
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";closed\n";
}