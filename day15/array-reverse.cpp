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

cout << "Reverse of Array elements are:\n";
for( int i=n-1 ; i>=0 ; i--){
    cout << arr[i] << " " ;
}

return 0 ;
}