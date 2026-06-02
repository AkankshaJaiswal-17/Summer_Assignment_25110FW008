#include <stdio.h>

int main()
{
    int num,count = 0;  
    
    printf("Enter any number:");
    scanf("%d",&num);
    
    while (num > 0)
    {
        
        if ((num & 1) == 1)
        {
            count = count + 1;
        }
        
        num= num >> 1; 
    }
    
    printf(" Total set bits: %d", count);

    return 0;
}