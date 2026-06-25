#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100], n, choice;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    do
    {
        cout << "\n===== ARRAY OPERATIONS MENU =====";
        cout << "\n1. Display Array";
        cout << "\n2. Find Sum";
        cout << "\n3. Find Maximum Element";
        cout << "\n4. Search Element";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Array Elements: ";
                for(int i = 0; i < n; i++)
                {
                    cout << arr[i] << " ";
                }
                break;

            case 2:
            {
                int sum = 0;
                for(int i = 0; i < n; i++)
                {
                    sum += arr[i];
                }
                cout << "Sum = " << sum;
                break;
            }

            case 3:
            {
                int max = arr[0];
                for(int i = 1; i < n; i++)
                {
                    if(arr[i] > max)
                        max = arr[i];
                }
                cout << "Maximum Element = " << max;
                break;
            }

            case 4:
            {
                int key, found = 0;
                cout << "Enter element to search: ";
                cin >> key;

                for(int i = 0; i < n; i++)
                {
                    if(arr[i] == key)
                    {
                        cout << "Element found at index " << i;
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    cout << "Element not found!";
                break;
            }

            case 5:
                cout << "Exiting Program...";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while(choice != 5);

    return 0;
}