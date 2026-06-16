#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,o,p;

    cout<<"Enter rows and columns of Matrix 1: ";
    cin>>m>>n;

    cout<<"Enter rows and columns of Matrix 2: ";
    cin>>o>>p;

    if(m!=o || n!=p)
    {
        cout<<"Matrix subtraction not possible";
        return 0;
    }

    int a[m][n], b[o][p], c[m][p];

    cout<<"Enter elements of Matrix 1:\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Enter elements of Matrix 2:\n";
    for(int i=0;i<o;i++)
    {
        for(int j=0;j<p;j++)
        {
            cin>>b[i][j];
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
             c[i][j] = a[i][j] - b[i][j];
        }
    }
    
    cout<<"\nMatrix 1:\n";

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<< a[i][j]<<" " ;
        }
        cout<<endl;
    }
    
    cout<<"\nMatrix 2:\n";

    for(int i=0;i<o;i++)
    {
        for(int j=0;j<p;j++)
        {
            cout<< b[i][j]<<" " ;
        }
        cout<<endl;
    }

    cout<<"\nMatrix Subtraction:\n";

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<< c[i][j]<<" " ;
        }
        cout<<endl;
    }

    return 0;
}