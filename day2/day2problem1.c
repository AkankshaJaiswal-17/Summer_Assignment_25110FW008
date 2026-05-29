#include<stdio.h>

int main()
{

    int num,rem,sum=0,temp_no;

    printf("Enter any nummber:");
    scanf("%d",&num);

    temp_no=num;

    while(temp_no>0)
    {
        rem=temp_no%10;
        sum=sum+rem;
        temp_no=temp_no/10;
    }

    printf("Sum of digits of %d is %d",num,sum);

    return 0;
}