#include<bits/stdc++.h>
using namespace std ;

int main(){

int n , sum = 0 , avg;
cout << "Enter no of elemnts: \n";
cin >> n;

int arr[n];

cout << "Enter " << n << " elements:\n" ;
for( int i=0 ; i<n ; i++){
    cin >> arr[i] ;
}

for( int i=0 ; i<n ; i++){
    sum = sum + arr[i];
}
cout << "Sum of array is: " << sum << endl;

avg = sum / n ;
cout << "Average of array is: " << avg;

return 0 ;
}