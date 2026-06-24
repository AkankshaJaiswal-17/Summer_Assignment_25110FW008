#include <iostream>
#include <string>
using namespace std;

struct Account
{
    int accNo;
    string name;
    double balance;
};

int main()
{
    Account acc[100];
    int count = 0;
    int choice;

    do
    {
        cout << "\n===== BANK ACCOUNT MANAGEMENT SYSTEM =====\n";
        cout << "1. Create Account\n";
        cout << "2. Display All Accounts\n";
        cout << "3. Search Account\n";
        cout << "4. Deposit Money\n";
        cout << "5. Withdraw Money\n";
        cout << "6. Delete Account\n";
        cout << "7. Total Accounts\n";
        cout << "8. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                cout << "Enter Account Number: ";
                cin >> acc[count].accNo;

                cin.ignore();

                cout << "Enter Account Holder Name: ";
                getline(cin, acc[count].name);

                cout << "Enter Initial Balance: ";
                cin >> acc[count].balance;

                count++;

                cout << "Account Created Successfully!\n";
                break;
            }

            case 2:
            {
                if(count == 0)
                {
                    cout << "No Accounts Found!\n";
                }
                else
                {
                    for(int i = 0; i < count; i++)
                    {
                        cout << "\nAccount " << i + 1 << endl;
                        cout << "Account No: " << acc[i].accNo << endl;
                        cout << "Name: " << acc[i].name << endl;
                        cout << "Balance: " << acc[i].balance << endl;
                    }
                }
                break;
            }

            case 3:
            {
                int searchNo;
                bool found = false;

                cout << "Enter Account Number: ";
                cin >> searchNo;

                for(int i = 0; i < count; i++)
                {
                    if(acc[i].accNo == searchNo)
                    {
                        cout << "\nAccount Found\n";
                        cout << "Account No: " << acc[i].accNo << endl;
                        cout << "Name: " << acc[i].name << endl;
                        cout << "Balance: " << acc[i].balance << endl;

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Account Not Found!\n";

                break;
            }

            case 4:
            {
                int accNo;
                double amount;
                bool found = false;

                cout << "Enter Account Number: ";
                cin >> accNo;

                for(int i = 0; i < count; i++)
                {
                    if(acc[i].accNo == accNo)
                    {
                        cout << "Enter Amount to Deposit: ";
                        cin >> amount;

                        acc[i].balance += amount;

                        cout << "Amount Deposited Successfully!\n";
                        cout << "New Balance: " << acc[i].balance << endl;

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Account Not Found!\n";

                break;
            }

            case 5:
            {
                int accNo;
                double amount;
                bool found = false;

                cout << "Enter Account Number: ";
                cin >> accNo;

                for(int i = 0; i < count; i++)
                {
                    if(acc[i].accNo == accNo)
                    {
                        cout << "Enter Amount to Withdraw: ";
                        cin >> amount;

                        if(amount <= acc[i].balance)
                        {
                            acc[i].balance -= amount;

                            cout << "Withdrawal Successful!\n";
                            cout << "Remaining Balance: "
                                 << acc[i].balance << endl;
                        }
                        else
                        {
                            cout << "Insufficient Balance!\n";
                        }

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Account Not Found!\n";

                break;
            }

            case 6:
            {
                int deleteNo;
                bool found = false;

                cout << "Enter Account Number to Delete: ";
                cin >> deleteNo;

                for(int i = 0; i < count; i++)
                {
                    if(acc[i].accNo == deleteNo)
                    {
                        for(int j = i; j < count - 1; j++)
                        {
                            acc[j] = acc[j + 1];
                        }

                        count--;
                        found = true;

                        cout << "Account Deleted Successfully!\n";
                        break;
                    }
                }

                if(!found)
                    cout << "Account Not Found!\n";

                break;
            }

            case 7:
            {
                cout << "Total Accounts = " << count << endl;
                break;
            }

            case 8:
            {
                cout << "Thank You!\n";
                break;
            }

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 8);

    return 0;
}