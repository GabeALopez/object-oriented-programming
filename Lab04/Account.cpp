#include <iostream>
#include <string>

using namespace std;

class Account
{

    private:

        int id;
        double balance;
        double annualInterestRate;

    public:

        //gets balance
        double getBalance()
        {

            return balance;

        }

        //creates default account
        Account()
        {

            id = 0;
            balance = 0.0;
            annualInterestRate = 0.0;

        }

        //creates predefined account
        Account(int pid, double pbalance, double pannualInterestRate)
        {

            id = pid;
            balance = pbalance;
            annualInterestRate = pannualInterestRate;

        }

        //return monthly interest
        double getMonthlyInterestRate()
        {

           return annualInterestRate / 12;
            
        }

        //withdraw money
        void withdraw(double amount)
        {
            balance -= amount;

        }

        //deposit amount
        void deposit(double amount)
        {

            balance += amount;

        }
        
        
        
    




};

int main()
{
    //creates the account object and does operations on the balance
    Account account(1122, 20000.0, 4.5);

    account.withdraw(2500);
    account.deposit(3000);

    cout << "The balance for the account is " << account.getBalance() << endl;
    cout << "The monthly interest is " << account.getMonthlyInterestRate() << endl;

    return 0;

}