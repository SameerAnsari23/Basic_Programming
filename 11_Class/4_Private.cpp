#include <iostream>
using namespace std;
class BankAccount
{
private:
    // Private Data Member
    int balance = 10000;
public:
    // Public Function to Deposit Money
    void deposit(int amount)
    {
        balance = balance + amount;
    }
    // Public Function to Display Balance
    void displayBalance()
    {
        cout << "Account Balance: " << balance << endl;
    }
};
int main()
{
    BankAccount account;
    // Calling public functions
    account.deposit(5000);
    account.displayBalance();
    // Direct access to private member is not allowed
    // account.balance = 50000;  // Error
    return 0;

}
