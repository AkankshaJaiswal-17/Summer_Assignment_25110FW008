#include<bits/stdc++.h>
using namespace std ;

int main(){

int n;
cout << "Enter no of elemnts: \n";
cin >> n;

int arr[n];

cout << "Enter " << n << " elements:\n" ;
for( int i=0 ; i<n ; i++){
    cin >> arr[i] ;
}

cout << "Array elements are:\n";
for( int i=0 ; i<n ; i++){
    cout << arr[i] << endl ;
}

return 0 ;
}