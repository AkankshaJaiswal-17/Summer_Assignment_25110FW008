#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;

    cout<<"Enter rows and columns of Matrix: ";
    cin>>m>>n;

    int a[m][n];

    cout<<"Enter elements of Matrix:\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    
    cout<<"\nMatrix :\n";

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<< a[i][j]<<" " ;
        }
        cout<<endl;
    }
    
    int sum=0;
   cout << "\nSum of diagonal elements of matrix:\n";
    for(int i=0;i<m;i++)
    { 
      for(int j=0;j<n;j++)
        {
            if(i==j){
            sum = sum + a[i][j];}
        }
    } 
  
  cout << sum;

    return 0;
}