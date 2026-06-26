#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    int roll[100];
    string name[100];
    float marks[100];

    // Input student records
    for(int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Enter Roll Number: ";
        cin >> roll[i];

        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name[i]);

        cout << "Enter Marks: ";
        cin >> marks[i];
    }

    // Display records
    cout << "\n\n----- Student Records -----\n";

    for(int i = 0; i < n; i++)
    {
        cout << "\nRoll Number: " << roll[i];
        cout << "\nName: " << name[i];
        cout << "\nMarks: " << marks[i] << endl;
    }

    // Search student
    int searchRoll;
    cout << "\nEnter Roll Number to Search: ";
    cin >> searchRoll;

    bool found = false;

    for(int i = 0; i < n; i++)
    {
        if(roll[i] == searchRoll)
        {
            cout << "\nStudent Found!";
            cout << "\nName: " << name[i];
            cout << "\nMarks: " << marks[i];
            found = true;
            break;
        }
    }

    if(!found)
    {
        cout << "\nStudent not found!";
    }

    return 0;
}