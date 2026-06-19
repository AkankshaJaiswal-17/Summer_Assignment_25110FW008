#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str1[100];
    char str2[100];

    cout<<"Enter first string: ";
    cin>>str1;

    cout<<"Enter second string: ";
    cin>>str2;

    int len1 = 0, len2 = 0;

    while(str1[len1] != '\0')
        len1++;

    while(str2[len2] != '\0')
        len2++;

    if(len1 != len2)
    {
        cout<<"Not Anagram";
        return 0;
    }

    bool anagram = true;

    for(int i=0; str1[i] != '\0'; i++)
    {
        int count1 = 0;
        int count2 = 0;

        for(int j=0; str1[j] != '\0'; j++)
        {
            if(str1[i] == str1[j])
                count1++;
        }

        for(int j=0; str2[j] != '\0'; j++)
        {
            if(str1[i] == str2[j])
                count2++;
        }

        if(count1 != count2)
        {
            anagram = false;
            break;
        }
    }

    if(anagram)
        cout<<"Anagram String";
    else
        cout<<"Not Anagram";

    return 0;
}