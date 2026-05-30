#include <stdio.h>

int main() {
    int num1, num2, temp;
    
    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);

    // Euclidean algorithm
    while(num2 != 0) 
    {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    
    printf("GCD is: %d", num1);
    return 0;
}