#include<bits/stdc++.h>
using namespace std;

int pattern( int n)
{
    

    for(int i= 0; i<n ; i++)
    {
        for( int j=0 ; j<=i ; j++)
        {
            cout << " * " ;
        }
        cout << endl;
    }
    return 0;
}

int main(){
 
int num;

cout << "Enter any number :" ;
cin >> num;
cout<< pattern(num);

    return 0;
}