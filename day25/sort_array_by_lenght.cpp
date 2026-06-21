#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of words: ";
    cin >> n;

    string word[100];

    cout << "Enter words:" << endl;

    for(int i = 0; i < n; i++)
    {
        cin >> word[i];
    }


    // sort according to length
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(word[i].length() > word[j].length())
            {
                string temp = word[i];
                word[i] = word[j];
                word[j] = temp;
            }
        }
    }


    cout << "Words after sorting by length:" << endl;

    for(int i = 0; i < n; i++)
    {
        cout << word[i] << endl;
    }


    return 0;
}