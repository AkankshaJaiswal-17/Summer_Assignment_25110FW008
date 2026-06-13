#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1, n2;
    
    cout << "Enter the size of arr1:\n";
    cin >> n1;
    int arr1[n1];
    
    cout << "Enter the elements of arr1:\n";
    for(int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    cout << "Enter the size of arr2:\n";
    cin >> n2;
    int arr2[n2];
    
    cout << "Enter the elments of arr2:\n";
    for(int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    int unionArr[n1 + n2];
    int k = 0;

    // Copy first array
    for(int i = 0; i < n1; i++) {
        unionArr[k++] = arr1[i];
    }

    // Check second array elements
    for(int i = 0; i < n2; i++) {
        bool found = false;

        for(int j = 0; j < k; j++) {
            if(arr2[i] == unionArr[j]) {
                found = true;
                break;
            }
        }

        if(!found) {
            unionArr[k++] = arr2[i];
        }
    }

    cout << "Union Array: ";

    for(int i = 0; i < k; i++) {
        cout << unionArr[i] << " ";
    }

    return 0;
}