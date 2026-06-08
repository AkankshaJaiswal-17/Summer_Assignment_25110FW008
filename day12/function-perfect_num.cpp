#include<bits/stdc++.h>
using namespace std ;

void perfect_num( int n){
    
    int sum=0;
    
   for (int i = 1; i < n; i++) 
    {
        if (n % i == 0) 
        {
            sum = sum + i; 
        }
    }

    if (sum == n) 
    {
       cout << "PERFECT NUMBER";
    } 
    else 
    {
        cout << "NOT PERFECT NUMBER" ;
    }
}

int main(){
     int num;
     
     cout << "Enter any number:\n" ;
     cin >> num;
     perfect_num(num);
     
     return 0;
}