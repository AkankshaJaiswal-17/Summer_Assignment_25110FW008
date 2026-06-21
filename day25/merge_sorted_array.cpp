#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;

    cout << "Enter size of first array: ";
    cin >> n;

    int a[n];
    cout << "Enter first sorted array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter size of second array: ";
    cin >> m;

    int b[m];
    cout << "Enter second sorted array: ";
    for(int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int c[n+m];

    int i = 0; // first array pointer
    int j = 0; // second array pointer
    int k = 0; // merged array pointer

    while(i < n && j < m)
    {
        if(a[i] <= b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }

    // remaining elements of first array
    while(i < n)
    {
        c[k] = a[i];
        i++;
        k++;
    }

    // remaining elements of second array
    while(j < m)
    {
        c[k] = b[j];
        j++;
        k++;
    }

    cout << "Merged array: ";

    for(int x = 0; x < n+m; x++)
    {
        cout << c[x] << " ";
    }

    return 0;
}