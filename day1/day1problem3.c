#include<stdio.h>

int main()
{

    int i,num,factorial=1;

    printf("Emter any number:");
    scanf("%d",&num);

    for(int i=1;i<=num;i++)
    {
        factorial=factorial*i;
    }

    printf("The factorial of %d is:%d",num,factorial);

    return 0;
}