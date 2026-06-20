#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a sentence: ";
    cin.getline(str, 100);

    int currentLength = 0;
    int maxLength = 0;

    for(int i = 0;; i++)
    {
        if(str[i] != ' ' && str[i] != '\0')
        {
            currentLength++;
        }
        else
        {
            if(currentLength > maxLength)
            {
                maxLength = currentLength;
            }

            currentLength = 0;
        }

        if(str[i] == '\0')
        {
            break;
        }
    }

    cout << "Length of longest word = " << maxLength;

    return 0;
}