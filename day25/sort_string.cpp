#include<bits/stdc++.h>
using namespace std;

int main(){
    
  int n;
  char str[100];
  char temp;
  
  cout<<"Enter string\n";
  cin >> str;
  
  cout << "String after sort:\n";
  for(int i=0; str[i] !='\0'; i++){
      for(int j=0; str[j] !='\0'; j++){
          if(str[i]<str[j]){
              temp = str[i];
              str[i]=str[j];
              str[j]=temp;
          }
      }
  }
  for(int i=0; str[i] !='\0'; i++){
      cout << str[i] << " ";
  }
return 0;
}