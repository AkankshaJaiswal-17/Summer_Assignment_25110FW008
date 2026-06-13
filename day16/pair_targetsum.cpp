#include<bits/stdc++.h>
using namespace std ;

int main(){

int n,sum;
cout << "Enter no of elemnts: \n";
cin >> n;

int arr[n];

cout << "Enter " << n << " elements:\n" ;
for( int i=0 ; i<n ; i++){
    cin >> arr[i] ;
}

cout << "Enter the target sum:\n";
cin >> sum;

cout << "Pair of target sum is:";
for(int i = 0; i < n; i++)
{
    for(int j = i + 1; j < n; j++)
    {
        if(arr[i] + arr[j] == sum)
        {
            cout << arr[i] << " " << arr[j];
        }
    }
}
return 0 ;
}