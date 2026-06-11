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

cout << "Left rotation of array became:\n";
 int temp = arr[0];
for( int i=0 ; i<n-1 ; i++){
        arr[i]=arr[i+1] ;
     }
    arr[n-1] =temp;
for( int i=0 ; i<n ; i++){
    cout << arr[i] << " ";}

return 0 ;
}