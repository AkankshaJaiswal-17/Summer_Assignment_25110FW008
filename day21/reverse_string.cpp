#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];
    int length = 0;

    cout << "Enter a string: ";
    cin >> str;

    for(int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    cout << "Reverse string: ";

    for(int i = length - 1; i >= 0; i--)
    {
        cout << str[i];
    }

    return 0;
}