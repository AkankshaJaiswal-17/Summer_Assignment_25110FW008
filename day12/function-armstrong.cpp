#include<bits/stdc++.h>
using namespace std ;

void armstrong( int n){
    
    int temp , rem;
    int sum=0;
    temp= n;
    
    while(temp>0){
        rem = temp % 10;
        sum = sum + (rem*rem*rem);
        temp = temp / 10;
        }
        
        if(sum==n){
            cout << "ARMSTRONG NUMBER";
        }
        else{
            cout << "NOT AN ARMSTRONG NUMBER";
        }
}

int main(){
     int num;
     
     cout << "Enter any number:\n" ;
     cin >> num;
     armstrong(num);
     
     return 0;
}