#include<stdio.h>

int main()
{
    int i,num;
    int sum=0;

    printf("Write a natural number:\n");
    scanf("%d",&num);

    for(int i=1;i<=num;i=i+1)
    {
        sum=sum+i;
    }
    
    printf("The sum of first %d natural no is:%d",num,sum);
    
    return 0;
}
