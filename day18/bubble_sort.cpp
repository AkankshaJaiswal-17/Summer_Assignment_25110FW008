#include<bits/stdc++.h>
using namespace std;

int main(){
    
  int n, temp;
  
  cout<<"Enter the size of element\n";
  cin >> n;
  int arr[n];
  cout << "Enter the elements of array\n";
  for(int i=0; i<n; i++){
      cin >> arr[i];
  }
  
  cout << "Array:\n";
  for(int i=0; i<n; i++){
      cout << arr[i]<< " " ;
  }
  
  cout << "Array after bubble sort:\n";
  for(int i=0; i<n-1; i++){
      for(int j=0; j<n-i-1; j++){
          if(arr[j]>arr[j+1]){
              temp = arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
          }
      }
  }
  for(int j=0; j<n; j++){
      cout << arr[j] << " ";
  }
return 0;
}