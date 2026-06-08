#include<bits/stdc++.h>
using namespace std ;

int fibonacci( int n){
    
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
    return 0;
}

int main(){
     int term;
     
     cout << "Enter term:\n" ;
     cin >> term;
     cout << "Fibonacci " << term << " term is :" << fibonacci(term);
     
     return 0;
}