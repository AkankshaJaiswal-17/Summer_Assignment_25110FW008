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
  
  cout << "Array after selection sort:\n";
 for(int i = 0; i < n-1; i++)
{
    int min = i;

    for(int j = i+1; j < n; j++)
    {
        if(arr[j] < arr[min])
        {
            min = j;
        }
    }

    int temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
}

  for(int j=0; j<n; j++){
      cout << arr[j] << " ";
  }
return 0;
}