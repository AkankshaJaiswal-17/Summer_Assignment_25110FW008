#include<bits/stdc++.h>
using namespace std ;

void panindrome( int n){
     
     int rem, original, rev=0;
     
     original = n;
     
     while( n > 0){
         rem = n % 10 ;
         rev = rev + rem;
         n = n / 10;
     }
     
     if( n == rev){
         cout << "PANINDROME";
     }
     
     else{
         cout << "NOT A PANINDROME";
     }
}

int main(){
    
    int num;
    cout << "Enter a number\n";
    cin >> num;
    panindrome( num);
    
    return 0;
}