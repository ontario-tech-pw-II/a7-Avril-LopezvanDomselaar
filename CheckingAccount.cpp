#include "CheckingAccount.h"
#include <iomanip>

using namespace std;


// constructor initializes balance and transaction fee
CheckingAccount::CheckingAccount( double initialBalance, double fee ) : Account( initialBalance )
{
	// your code
  if (fee < 0) {
    transactionFee = 0;
  } else {
    transactionFee = fee;
  }
}

// credit (add) an amount to the account balance and charge fee
void CheckingAccount::credit( double amount )
{
	// your code
  Account::credit(amount);
}

// debit (subtract) an amount from the account balance and charge fee
bool CheckingAccount::debit( double amount )
{
	// your code
  return Account::debit(amount);
}

// subtract transaction fee
void CheckingAccount::chargeFee()
{
	// your code
  double balance = Account::getBalance();
  Account::setBalance(balance - transactionFee);
}

void CheckingAccount::display(ostream & os) const
{
	// your code
  cout << "Account type: Checking" << endl;
  cout.setf(ios::fixed);
  cout << "Balance: $ " << setprecision(2) << Account::getBalance() << endl;
  cout << "Transaction Fee: " << setprecision(2) << transactionFee << endl;
}
