#include<bits/stdc++.h>
using namespace std ;

int sum( int a , int b ){
  int c=a+b;
   return c ;
}

int main(){
    int num1 , num2;
    cout << "Enter num1 and num2:\n";
    cin >> num1 >> num2;
    cout << "Sum:"<< sum( num1 , num2) ;
    
    return 0 ;
}