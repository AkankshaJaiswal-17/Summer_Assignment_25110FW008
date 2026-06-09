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

largest = arr[0];
smallest = arr[0];
for( int i=1 ; i<n ; i++){
if(arr[i] > largest){
    largest = arr[i];
}

if( arr[i] < smallest){
    smallest = arr[i];
}
}
cout << "Largest element of array is: " << largest << endl;
cout << "Smallest element of array is: " << smallest << endl;

return 0 ;
}