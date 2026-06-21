#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of names: ";
    cin >> n;

    string name[100];

    cout << "Enter names:" << endl;

    for(int i = 0; i < n; i++)
    {
        cin >> name[i];
    }


    // sorting names alphabetically
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(name[i] > name[j])
            {
                string temp = name[i];
                name[i] = name[j];
                name[j] = temp;
            }
        }
    }


    cout << "Names after sorting:" << endl;

    for(int i = 0; i < n; i++)
    {
        cout << name[i] << endl;
    }


    return 0;
}