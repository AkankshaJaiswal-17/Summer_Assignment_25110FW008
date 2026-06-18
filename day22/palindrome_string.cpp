#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];
    char temp[100];
    int length = 0;

    cout << "Enter a string: ";
    cin >> str;
     //store str in temp
    for(int i = 0; str[i] != '\0'; i++){
        temp[i]=str[i];
    }
    //lenght of string
    for(int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    // store reverse string 
    int j=0;
    for(int i = length - 1; i >= 0; i--)
    {
       temp[j]=str[i];
       j++;
    }
    temp[j]='\0';
    
    bool palindrome = true;
    for(int i = 0; str[i] != '\0'; i++){
        if(temp[i] != str[i]){
            palindrome = false;
            break;
        }}
        
    if(palindrome){
        cout << "Palindrome String";
    }
    
    else{
        cout << "Not a palindrome string";
    }

    return 0;
}