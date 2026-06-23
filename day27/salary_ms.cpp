#include <bits/stdc++.h>
#include <string>
using namespace std;

struct Employee
{
    int id;
    string name;
    float salary;
};

int main()
{
    Employee emp[100];
    int count = 0, choice;

    do
    {
        cout << "\n===== Salary Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Salary\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Employee ID: ";
                cin >> emp[count].id;

                cin.ignore();

                cout << "Enter Employee Name: ";
                getline(cin, emp[count].name);

                cout << "Enter Salary: ";
                cin >> emp[count].salary;

                count++;
                cout << "Employee Added Successfully!\n";
                break;

            case 2:
                for(int i = 0; i < count; i++)
                {
                    cout << "\nID     : " << emp[i].id;
                    cout << "\nName   : " << emp[i].name;
                    cout << "\nSalary : " << emp[i].salary << endl;
                }
                break;

            case 3:
            {
                int id;
                bool found = false;

                cout << "Enter Employee ID: ";
                cin >> id;

                for(int i = 0; i < count; i++)
                {
                    if(emp[i].id == id)
                    {
                        cout << "\nEmployee Name : "
                             << emp[i].name;
                        cout << "\nSalary : "
                             << emp[i].salary << endl;

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Employee Not Found!\n";

                break;
            }

            case 4:
                cout << "Program Ended!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 4);

    return 0;
}