#include <bits/stdc++.h>
#include <string>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    float marks1, marks2, marks3;
    float total, percentage;
};

int main()
{
    Student s;

    cout << "Enter Roll Number: ";
    cin >> s.rollNo;

    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, s.name);

    cout << "Enter Marks of Subject 1: ";
    cin >> s.marks1;

    cout << "Enter Marks of Subject 2: ";
    cin >> s.marks2;

    cout << "Enter Marks of Subject 3: ";
    cin >> s.marks3;

    s.total = s.marks1 + s.marks2 + s.marks3;
    s.percentage = s.total / 3;

    cout << "\n\n===== MARKSHEET =====\n";
    cout << "Roll Number : " << s.rollNo << endl;
    cout << "Name        : " << s.name << endl;
    cout << "Subject 1   : " << s.marks1 << endl;
    cout << "Subject 2   : " << s.marks2 << endl;
    cout << "Subject 3   : " << s.marks3 << endl;
    cout << "Total Marks : " << s.total << endl;
    cout << "Percentage  : " << s.percentage << "%" << endl;

    return 0;
}