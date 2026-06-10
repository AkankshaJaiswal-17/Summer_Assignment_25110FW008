#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    if (n < 2) {
        cout << " For Second largest element we required atleast 2 elements.\n";
        return 0;
    }

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        
        if (arr[i] > largest) {
            secondLargest = largest; 
            largest = arr[i];        
        }
    
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "No second largest element exist.\n";
    } else {
        cout << "The second largest element is: " << secondLargest ;
    }

    return 0;
}