#include "SavingsAccount.h"
#include <iomanip>

using namespace std;

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount( double initialBalance, double rate ) : Account( initialBalance )
{
	// your code
  if (rate < 0) {
    interestRate = 0;
  } else {
    interestRate = rate;
  }
}

double SavingsAccount::calculateInterest() {
	// your code
  double interest = Account::getBalance() * interestRate;
  return interest;
}
void SavingsAccount::display(ostream & os) const
{
	// your code
  cout << "Account type: Saving" << endl;
  cout.setf(ios::fixed);
  cout << "Balance: $ " << setprecision(2) << Account::getBalance() << endl;
  cout << "Interest Rate (%): " << setprecision(2) << interestRate * 100 << endl;
}
