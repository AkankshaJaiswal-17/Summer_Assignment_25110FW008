#include<bits/stdc++.h>
using namespace std ;

int main(){

    char str[100];

    cout << "Enter a sentence: ";
    cin.getline(str, 100);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i]==' ')
        {
        for( int j=i; str[j] != '\0'; j++)
          {
            str[j]=str[j+1];
          }
        i--;
        }
    }

cout << "String after removing spaces become: " << str;    
return 0 ;
}