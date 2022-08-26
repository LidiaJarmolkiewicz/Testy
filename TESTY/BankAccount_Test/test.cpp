#include "pch.h"
#include "../BankAccount/BankAccount.hpp"

TEST(BankAccountTest, TestEmpty) 
{
	BankAccount account;

  EXPECT_EQ(account.getAvaibleFunds(),0);
  
}

TEST(BankAccountTest, TestDeposit)
{
	BankAccount account;
	account.deposit(1000);

	EXPECT_EQ(account.getAvaibleFunds(),1000);

}
TEST(BankAccountTest, TestWithDraw)
{
	BankAccount account;
	account.deposit(1000);
	EXPECT_TRUE(account.withdraw(100));

	EXPECT_EQ(account.getAvaibleFunds(), 900);

}
TEST(BankAccountTest, TestWithDrawFail)
{
	BankAccount account;
	account.deposit(100);
	EXPECT_FALSE(account.withdraw(1000));

	EXPECT_EQ(account.getAvaibleFunds(), 100);

}

TEST(DebitBankAccountTest, TestLimitEmpty)
{
	DebitBankAccount accountL;

	EXPECT_FALSE(accountL.getDebitLimit(), 0);

}
TEST(DebitBankAccountTest, TestLimit)
{
	DebitBankAccount accountL;
	accountL.setDebitLimit(2000);
	EXPECT_EQ(accountL.getDebitLimit(), 2000);

}
TEST(DebitBankAccountTest, TestPayDebit)
{
	DebitBankAccount accountL;
	accountL.setDebitLimit(2000);
	accountL.payDebit(600);
	EXPECT_EQ(accountL.getDebitLimit(), 1400);

}
