#include <bits/stdc++.h>
using namespace std;

int main()
{
    int choice;
    float balance = 5000, amount;

    cout << "1. Check Balance\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw Money\n";

    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Balance = " << balance;
            break;

        case 2:
            cout << "Enter the amount to deposit:\n";
            cin >> amount;
            balance += amount;
            cout << "New Balance = " << balance;
            break;

        case 3:
            cout << "Enter the amount to withdrawl:\n";
            cin >> amount;

            if(amount <= balance)
            {
                balance -= amount;
                cout << "New Balance = " << balance;
            }
            else
            {
                cout << "Insufficient Balance";
            }
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}