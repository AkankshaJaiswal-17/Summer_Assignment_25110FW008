#include<bits/stdc++.h>
using namespace std ;

int main(){

int n , largest , smallest;
cout << "Enter no of elemnts: \n";
cin >> n;

int arr[n];

cout << "Enter " << n << " elements:\n" ;
for( int i=0 ; i<n ; i++){
    cin >> arr[i] ;
}

int evenCount = 0, oddCount = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    cout << "Number of even elements: " << evenCount << endl;
    cout << "Number of odd elements: " << oddCount << endl;

return 0 ;
}
