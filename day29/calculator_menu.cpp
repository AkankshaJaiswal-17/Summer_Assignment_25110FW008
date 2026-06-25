#include <bits/stdc++.h>
using namespace std;

int main()
{
    int choice;
    double num1, num2;

    do
    {
        cout << "\n===== CALCULATOR MENU =====";
        cout << "\n1. Addition";
        cout << "\n2. Subtraction";
        cout << "\n3. Multiplication";
        cout << "\n4. Division";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if(choice >= 1 && choice <= 4)
        {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }

        switch(choice)
        {
            case 1:
                cout << "Result = " << num1 + num2;
                break;

            case 2:
                cout << "Result = " << num1 - num2;
                break;

            case 3:
                cout << "Result = " << num1 * num2;
                break;

            case 4:
                if(num2 != 0)
                    cout << "Result = " << num1 / num2;
                else
                    cout << "Division by zero is not possible!";
                break;

            case 5:
                cout << "Exiting Calculator...";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while(choice != 5);

    return 0;
}