#include<stdio.h>

int main()
{

int num,i,count;

printf("Enter any number:");
scanf("%d",&num);

for(i=1;i<=num;i++)
{
    if(num%i==0)
    {
        count=count+1;
    }
}
if(count==2)
{
    printf("It is a PRIME NUMBER");
}

if(count>2)
{
    printf("It is NOT a PRIME NUMBER");
}

return 0;

}