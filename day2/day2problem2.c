#include<stdio.h>

int main()
{

    int num,rem,reverse=0,temp_no;

    printf("Enter any nummber:");
    scanf("%d",&num);

    temp_no=num;

    while(temp_no>0)
    {
        rem=temp_no%10;
        reverse=reverse*10+rem;
        temp_no=temp_no/10;
    }

    printf("Reverse of %d is %d",num,reverse);

    return 0;
}
