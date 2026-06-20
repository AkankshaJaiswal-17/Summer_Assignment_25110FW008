#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str1[100], str2[100], temp[200];
    int length1 = 0, length2 = 0;

    cout<<"Enter str1: ";
    cin>>str1;

    cout<<"Enter str2: ";
    cin>>str2;

    // Length of str1
    for(int i=0; str1[i]!='\0'; i++)
    {
        length1++;
    }

    // Length of str2
    for(int i=0; str2[i]!='\0'; i++)
    {
        length2++;
    }

    if(length1 != length2)
    {
        cout<<"Not Rotation";
        return 0;
    }

    // temp = str1 + str1
    int k = 0;

    for(int i=0; str1[i]!='\0'; i++)
    {
        temp[k] = str1[i];
        k++;
    }

    for(int i=0; str1[i]!='\0'; i++)
    {
        temp[k] = str1[i];
        k++;
    }

    temp[k] = '\0';

    bool found = false;

    for(int i=0; temp[i]!='\0'; i++)
    {
        bool match = true;

        for(int j=0; str2[j]!='\0'; j++)
        {
            if(temp[i+j] != str2[j])
            {
                match = false;
                break;
            }
        }

        if(match)
        {
            found = true;
            break;
        }
    }

    if(found)
        cout<<"Rotation";
    else
        cout<<"Not Rotation";

    return 0;
}