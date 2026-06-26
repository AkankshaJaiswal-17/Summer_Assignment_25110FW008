#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    int empID[100];
    string empName[100];
    float salary[100];

    // Input employee details
    for(int i = 0; i < n; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;

        cout << "Enter Employee ID: ";
        cin >> empID[i];

        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, empName[i]);

        cout << "Enter Salary: ";
        cin >> salary[i];
    }

    // Display employee records
    cout << "\n\n----- Employee Records -----\n";

    for(int i = 0; i < n; i++)
    {
        cout << "\nEmployee ID: " << empID[i];
        cout << "\nName: " << empName[i];
        cout << "\nSalary: " << salary[i] << endl;
    }

    // Search employee by ID
    int searchID;
    cout << "\nEnter Employee ID to Search: ";
    cin >> searchID;

    bool found = false;

    for(int i = 0; i < n; i++)
    {
        if(empID[i] == searchID)
        {
            cout << "\nEmployee Found!";
            cout << "\nName: " << empName[i];
            cout << "\nSalary: " << salary[i];
            found = true;
            break;
        }
    }

    if(!found)
    {
        cout << "\nEmployee not found!";
    }

    return 0;
}