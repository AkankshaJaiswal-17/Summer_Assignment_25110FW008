#include<stdio.h>

int main()
{
    int first_term = 0, second_term = 1, next_term,num;

    printf("Enter the no of terms:");
    scanf("%d",&num);


if (num >= 1) {
    printf("%d ", first_term);
}
if (num >= 2) {
    printf("%d ", second_term);
}


int i = 3; 
while (i <= num) 
{
    next_term = first_term + second_term;
    printf("%d ", next_term);
    
    first_term = second_term;
    second_term = next_term;
    
    i++; 
}

return 0;
}