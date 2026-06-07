#include<bits/stdc++.h>
using namespace std ;

void prime( int n ){
    int count=0;
  for( int i=1 ; i<=n ; i++){
      if(n%i==0){
        count = count + 1 ;
  }}
  
  if(count == 2 ){
      cout << "prime";
  }
  
  else{
      cout << "not a prime";  }
}

int main(){
    int num;
    cout << "Enter a number:\n";
    cin >> num;
prime(num);
    
    return 0 ;
}