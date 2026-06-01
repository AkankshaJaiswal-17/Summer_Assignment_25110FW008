#include <stdio.h>

int main() 
{
    int num, count;

    printf("Enter a num: ");
    scanf("%d", &num);

    for (int j = num; j >= 2; j--) 
    { 
    
        if (num % j == 0) 
        {

            for (int i = 2; i < j; i++) 
            {
                if (j % i == 0) 
                {
                    count=count+1;
                    break;
                }
            }

            if (count == 0) 
            { 
                printf("Largest prime factor is: %d\n", j);
                break; 
            }
        }
    }

    return 0;
}