#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;

    cout<<"Enter rows and columns of Matrix: ";
    cin>>m>>n;

    int a[m][n], t[m][n];

    cout<<"Enter elements of Matrix:\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            t[j][i]=a[i][j];
        }
    }
    
    cout<<"\nMatrix:\n";

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<< a[i][j]<<" " ;
        }
        cout<<endl;
    }
    
    cout<<"\nTranspose Matrix :\n";

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<< t[i][j]<<" " ;
        }
        cout<<endl;
    }
    
    return 0;
}