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
 int temp = arr[n-1];
for( int i=n-1 ; i>0; i--){
        arr[i]=arr[i-1] ;
     }
    arr[0] =temp;
for( int i=0 ; i<n ; i++){
    cout << arr[i] << " ";}

return 0 ;
}