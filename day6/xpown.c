#include <stdio.h>

int main()
{
    int x, n ,power ;
    int final_value = 1;  
    
    printf("Enter any number(x):");
    scanf("%d",&x);
    
    printf("Enter any number as power(n):");
    scanf("%d",&n);
    
    power=n;
    
    while (power > 0)
    {
        
        final_value = final_value * x ;
        
        power = power - 1;
    }
    
    printf(" %d power %d is : %d",x,n,final_value);

    return 0;
}