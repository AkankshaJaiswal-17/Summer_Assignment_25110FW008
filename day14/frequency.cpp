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

int num ,frequency=0;
cout << "Enter element to search:\n";
cin >> num ;

for(int i=0 ; i<n ; i++){
  if (  arr[i] == num ){
    frequency++;
}}

cout << "Frequency of " << num << " is:" << frequency;

return 0 ;
}