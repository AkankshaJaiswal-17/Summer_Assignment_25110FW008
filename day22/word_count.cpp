#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];
    // '0' include in count 
    int count = 1;

    cout << "Enter a sentence: ";
    cin.getline(str, 100);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            count++;
        }
    }

    cout << "Total words = " << count;

    return 0;
}