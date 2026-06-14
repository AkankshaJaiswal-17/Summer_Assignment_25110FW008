#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, num;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter sorted array elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter number to search: ";
    cin >> num;

    int low = 0;
    int high = n - 1;
    int loc = -1;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] == num)
        {
            loc = mid;
            break;
        }
        else if(arr[mid] > num)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if(loc != -1)
    {
        cout << "Element found at position: " << loc+1;
    }
    else
    {
        cout << "Element not found";
    }

    return 0;
}