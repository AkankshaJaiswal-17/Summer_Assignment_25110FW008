#include<bits/stdc++.h>
using namespace std;

int main()
{
    int age;

    cout << "Enter your age:\n";
    cin >> age;

    if(age >= 18)
    {
        cout << "Eligible for vote";
    }
    else
    {
        cout << "Not eligible for vote";
    }

    return 0;
}