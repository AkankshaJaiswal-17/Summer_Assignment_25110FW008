#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n;
 int sum=0;
 
 cout << "Enter the no of element:\n" ;
 cin >> n;
  int arr[n-1];
 cout << "Enter the elements:\n";
 for(int i=0; i<n-1; i++){
   cin >> arr[i]; 
 }
 int expected_sum= n*(n+1)/2;
 
 for(int i=0 ; i<n-1 ; i++){
     sum = sum + arr[i];
 }
   
  int missing_num = (expected_sum - sum);
  
  cout << "Missing number is: " << missing_num;
 
}