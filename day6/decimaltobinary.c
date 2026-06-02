#include<stdio.h>
int main()
{
    int  binary_num,last_digit;
    int decimal_num=0;
    int base=1; //2 power 0 is 1
    
    printf("Enter Binary Number:\n");
    scanf("%d",&binary_num);
    
    while(binary_num>0)
    {
        last_digit = binary_num % 10;
        binary_num = binary_num / 10;
        decimal_num = decimal_num + base;
        base = base * 2;
    }
    
    printf(" Binary number %d in decimal number is :%d",binary_num,decimal_num);
    
    return 0;
    
}