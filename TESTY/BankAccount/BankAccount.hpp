#pragma once
class BankAccount
{
public:
	bool withdraw(int sum );
	void deposit(int sum);
	int getAvaibleFunds()const;
	BankAccount();

private:
	int accountBalance;
};
class DebitBankAccount:public BankAccount
{
public:
	void setDebitLimit(int amount);
	int getDebitLimit() const ;
	void payDebit(int amount);
	DebitBankAccount();
private:
	int _limit;
	

};