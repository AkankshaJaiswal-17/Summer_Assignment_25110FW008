#include <stdio.h>

int main() 
{
    int num, sum = 0; 

    printf("Enter any number: ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++) 
    {
        if (num % i == 0) 
        {
            sum = sum + i; 
        }
    }

    if (sum == num) 
    {
        printf("Perfect no\n");
    } 
    else 
    {
        printf("Not a Perfect no\n"); 
    }

    return 0; 
}