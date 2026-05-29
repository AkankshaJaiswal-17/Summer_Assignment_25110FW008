#include<stdio.h>

int main()
{

    int num,rem,product=1,temp_no;

    printf("Enter any nummber:");
    scanf("%d",&num);

    temp_no=num;

    while(temp_no>0)
    {
        rem=temp_no%10;
        product=product*rem;
        temp_no=temp_no/10;
    }

    printf("Product of digits of %d is %d",num,product);

    return 0;
}
