#include<stdio.h>

int main()
{

    int count=0,num;

    printf("Enter any number:");
    scanf("%d",&num);

    while(num>0)
    {
        num=num/10;
        count=count+1;
    }

    printf("Total no of digits is:%d",count);

    return 0;
}

