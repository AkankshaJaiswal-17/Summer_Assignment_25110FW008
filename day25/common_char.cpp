#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str1[100];
    char str2[100];
    char str3[100];

    cout << "Enter a string1: ";
    cin >> str1;

    cout << "Enter a string2: ";
    cin >> str2;

    int k = 0;

    // finding common characters
    for(int i = 0; str1[i] != '\0'; i++)
    {
        for(int j = 0; str2[j] != '\0'; j++)
        {
            if(str1[i] == str2[j])
            {
                str3[k] = str1[i];
                k++;
                break;
            }
        }
    }

    str3[k] = '\0';


    // duplicate remove step
    for(int i = 0; str3[i] != '\0'; i++)
    {
        for(int j = i + 1; str3[j] != '\0'; j++)
        {
            if(str3[i] == str3[j])
            {
                for(int l = j; str3[l] != '\0'; l++)
                {
                    str3[l] = str3[l+1];
                }

                j--;
            }
        }
    }


    cout << "Common characters: " << str3;

    return 0;
}