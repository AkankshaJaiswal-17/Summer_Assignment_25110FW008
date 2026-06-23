#include <bits/stdc++.h>
using namespace std;

struct Student
{
    int roll;
    string name;
    float marks;
};

int main()
{
    Student s[100];
    int count = 0;
    int choice;

    do
    {
        cout << "\n===== Student Record Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Roll No: ";
                cin >> s[count].roll;

                cout << "Enter Name: ";
                cin.ignore();
               getline(cin, s[count].name);

                cout << "Enter Marks: ";
                cin >> s[count].marks;

                count++;
                cout << "Student Added Successfully!\n";
                break;

            case 2:
                if(count == 0)
                {
                    cout << "No Records Found!\n";
                }
                else
                {
                    cout << "\nStudent Records:\n";

                    for(int i = 0; i < count; i++)
                    {
                        cout << "\nRoll No: " << s[i].roll;
                        cout << "\nName: " << s[i].name;
                        cout << "\nMarks: " << s[i].marks << endl;
                    }
                }
                break;

            case 3:
            {
                int rollNo;
                bool found = false;

                cout << "Enter Roll No to Search: ";
                cin >> rollNo;

                for(int i = 0; i < count; i++)
                {
                    if(s[i].roll == rollNo)
                    {
                        cout << "\nRecord Found!\n";
                        cout << "Roll No: " << s[i].roll << endl;
                        cout << "Name: " << s[i].name << endl;
                        cout << "Marks: " << s[i].marks << endl;

                        found = true;
                        break;
                    }
                }

                if(!found)
                {
                    cout << "Record Not Found!\n";
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