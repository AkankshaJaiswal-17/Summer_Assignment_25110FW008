#include<bits/stdc++.h>
using namespace std ;

int main(){

    char str[100];

    cout << "Enter a string:\n";
cin >> str;

for(int i=0; str[i]!='\0'; i++)
{
    int count = 0;

    for(int j=0; str[j]!='\0'; j++)
    {
        if(str[i] == str[j])
        {
            count++;
        }
    }

    bool printed = false;

    for(int k=0; k<i; k++)
    {
        if(str[k] == str[i])
        {
            printed = true;
            break;
        }
    }

    if(!printed)
    {
        cout << str[i] << " : " << count << endl;
    }
}
    
return 0 ;
}