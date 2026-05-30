#include<stdio.h>

int main()
{
    int first_term = 0, second_term = 1, next_term,num;

    printf("Enter any number:");
    scanf("%d",&num);


if (num == 1) {
    printf("%d ", first_term);
}
if (num == 2) {
    printf("%d ", second_term);
}


int i = 3; 
while (i <= num) 
{
    next_term = first_term + second_term;
    
    first_term = second_term;
    second_term = next_term;
    
    i++; 
}

printf("The %dth term of Fibonnaci Series is %d ",num, next_term);

return 0;
}