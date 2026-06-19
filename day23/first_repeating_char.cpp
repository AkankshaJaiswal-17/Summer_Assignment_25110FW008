#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string:\n";
    cin >> str;

    for(int i = 0; str[i] != '\0'; i++)
    {
        int count = 0;

        for(int j = 0; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                count++;
            }
        }

        if(count > 1)
        {
            cout << "First repeating character: " << str[i];
            break;
        }
    }

    return 0;
}