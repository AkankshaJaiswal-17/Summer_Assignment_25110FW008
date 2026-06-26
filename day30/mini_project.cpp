#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;

int roll[MAX];
string name[MAX];
float marks[MAX];
int countStudents = 0;

// Function to add students
void addStudent()
{
    cout << "\nEnter Roll Number: ";
    cin >> roll[countStudents];

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name[countStudents]);

    cout << "Enter Marks: ";
    cin >> marks[countStudents];

    countStudents++;

    cout << "\nStudent Added Successfully!\n";
}

// Function to display students
void displayStudents()
{
    if(countStudents == 0)
    {
        cout << "\nNo Records Found!\n";
        return;
    }

    cout << "\n----- Student Records -----\n";

    for(int i = 0; i < countStudents; i++)
    {
        cout << "\nRoll Number: " << roll[i];
        cout << "\nName: " << name[i];
        cout << "\nMarks: " << marks[i] << endl;
    }
}

// Function to search student
void searchStudent()
{
    int searchRoll;
    cout << "\nEnter Roll Number to Search: ";
    cin >> searchRoll;

    for(int i = 0; i < countStudents; i++)
    {
        if(roll[i] == searchRoll)
        {
            cout << "\nStudent Found!";
            cout << "\nName: " << name[i];
            cout << "\nMarks: " << marks[i] << endl;
            return;
        }
    }

    cout << "\nStudent Not Found!\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n\n===== STUDENT MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                cout << "\nThank You!";
                break;

            default:
                cout << "\nInvalid Choice!";
        }

    } while(choice != 4);

    return 0;
}