#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter no of elements:\n";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array after removing duplicates:\n";

    for(int i = 0; i < n; i++)
    {
        int count = 0;

        for(int j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        if(count == 0)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}