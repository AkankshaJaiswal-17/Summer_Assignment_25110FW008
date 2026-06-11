#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter no of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int A = 0;

    for(int i=0; i<n; i++)
    {
        if(arr[i] != 0)
        {
            swap(arr[i], arr[A]);
            A++;
        }
    }

    cout << "Array after moving zeros to end:\n";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}