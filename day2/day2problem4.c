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

    if(reverse==num)
    {
        printf("%d is a panindrome number.",num);
    }

    else
    {
      printf("Not a panindrome number");
    }

    return 0;
}
