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
    
    cout << "\nRow-wise sum:\n";
    for(int i=0;i<m;i++)
    {  int sum=0;
        for(int j=0;j<n;j++)
        {
            sum = sum + a[i][j];
        }
     cout << "Sum of Row " << i+1 << " = " << sum << endl;
    }
    
    return 0;
}