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
    int count = 0;
    int choice;

    do
    {
        cout << "\n===== Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
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
                if(count == 0)
                {
                    cout << "No Records Found!\n";
                }
                else
                {
                    cout << "\n----- Employee Records -----\n";

                    for(int i = 0; i < count; i++)
                    {
                        cout << "\nEmployee ID : " << emp[i].id;
                        cout << "\nName        : " << emp[i].name;
                        cout << "\nSalary      : " << emp[i].salary;
                        cout << "\n---------------------------\n";
                    }
                }
                break;

            case 3:
            {
                int searchId;
                bool found = false;

                cout << "Enter Employee ID to Search: ";
                cin >> searchId;

                for(int i = 0; i < count; i++)
                {
                    if(emp[i].id == searchId)
                    {
                        cout << "\nEmployee Found!\n";
                        cout << "Employee ID : " << emp[i].id << endl;
                        cout << "Name        : " << emp[i].name << endl;
                        cout << "Salary      : " << emp[i].salary << endl;

                        found = true;
                        break;
                    }
                }

                if(found == false)
                {
                    cout << "Employee Not Found!\n";
                }

                break;
            }

            case 4:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 4);

    return 0;
}