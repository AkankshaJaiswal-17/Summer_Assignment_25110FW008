#include<bits/stdc++.h>

int sum_of_digit( int n)
{
    if(n==0)
    {
        return 0;
    }
    
    return n%10 + sum_of_digit(n/10);
}

int main(){

using namespace std;
int num;

cout << "Enter any number:";
cin >> num;

cout<< "Sum of digits : " << sum_of_digit(num);

return 0;
}
