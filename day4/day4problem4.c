#include<stdio.h>

int main()
{

int num, temp, rem, sum; 

printf("Enter any number:");
    scanf("%d",&num);

for(int i=1;i<=num;i++)
{
temp = i;
sum=0; 


while (temp > 0) 
{ 
    rem = temp % 10;
    sum = sum + (rem * rem * rem); 
     temp = temp / 10;
}
 


if (sum == i) 
{
    printf("%d\n",i);
}
} 

return 0;
}