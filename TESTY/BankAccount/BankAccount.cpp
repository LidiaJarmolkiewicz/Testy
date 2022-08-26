#include"BankAccount.hpp"

bool BankAccount::withdraw(int sum)
{
	if (sum > accountBalance)
	{
		return false;
	}
	else
	{
		accountBalance -= sum;
		return true;
	}
}

void BankAccount::deposit(int sum)
{
	accountBalance += sum;
}

int BankAccount::getAvaibleFunds()const
{
	return accountBalance;
}

BankAccount::BankAccount():accountBalance(0)
{
}

void DebitBankAccount::setDebitLimit(int amount)
{
	_limit = amount;
}

int DebitBankAccount::getDebitLimit() const
{
	
	return _limit;
}

void DebitBankAccount::payDebit(int amount)
{
	_limit -= amount;
}

DebitBankAccount::DebitBankAccount():_limit(0)
{
}
