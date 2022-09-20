#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
    Account account1{"Juan Valdez", 20};
    Account account2{"Jose Jimenez ", 20};

    cout << "Account1: " << account1.getName() << " balance is $"
            << account1.getBalance();
    cout << "\nAccount2: " << account2.getName() << " balance is $"
            << account2.getBalance();

    cout << "\n\nEnter deposit amount for account1: ";
    int depositAmount;
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account1 balance";
    account1.deposit(depositAmount);

    cout << "\n\nAccount1: " << account1.getName() << " balance is $"
            << account1.getBalance();
    cout << "\nAccount2: " << account2.getName() << " balance is $"
            << account2.getBalance();

    cout << "\n\nEnter deposit amount for account2: ";
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account2 balance";
    account2.deposit(depositAmount);

    cout << "\n\nAccount1: " << account1.getName() << " balance is $"
            << account1.getBalance();
    cout << "\nAccount2: " << account2.getName() << " balance is $"
            << account2.getBalance();

    cout << "\n\nEnter withdrawal amount for account2: ";
    int withdrawalAmount;
    cin >> withdrawalAmount;
    cout << "withdrawalAmount -> " << withdrawalAmount << " to account2 balance";
    account2.withdraw(withdrawalAmount);

    cout << "\n\nAccount1: " << account1.getName() << " balance is $"
            << account1.getBalance();
    cout << "\nAccount2: " << account2.getName() << " balance is $"
            << account2.getBalance();

    return 0;
}
