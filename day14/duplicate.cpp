#include<bits/stdc++.h>
using namespace std ;

int main(){

int n;
cout << "Enter no of elemnts: \n";
cin >> n;

int arr[n];
int count=0;

cout << "Enter " << n << " elements:\n" ;
for( int i=0 ; i<n ; i++){
    cin >> arr[i] ;
}

cout << "Duplicates of array are:\n" ;

for(int i=0 ; i<n ; i++){
    count = 0;
    for( int j=i+1 ; j<n ; j++){
        if(arr[i]==arr[j]){
            count = count + 1 ;
            break;
        }}
        if(count>0){
            cout << arr[i] << " " ;
        }
    }
  return 0 ;
}