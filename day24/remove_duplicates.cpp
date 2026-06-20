#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin >> str;

    for(int i = 0; str[i] != '\0'; i++)
    {
        for(int j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                // Left shift
                for(int k = j; str[k] != '\0'; k++)
                {
                    str[k] = str[k + 1];
                }

                j--;
            }
        }
    }

    cout << "String after removing duplicates: " << str;

    return 0;
}