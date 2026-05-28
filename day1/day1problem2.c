#include<stdio.h>

int main()
{
    int multiple,i,num;

    printf("Enter any number:\n");
    scanf("%d",&num);

    printf("Table of %d:\n",num);

    for(int i=1;i<=10;i++)
    {
        multiple=num*i;

    printf("%d*%d=%d\n",num,i,multiple);

    }

    return 0;
}
