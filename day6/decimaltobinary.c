#include <stdio.h>
#include <string.h>

int main() {
    int decimal_num, rem;

    char binary_string[64] = ""; 
    char temp_string[64] = "";

    printf("Enter decimal number: ");
    scanf("%d", &decimal_num);

    int original_num = decimal_num;

    if (decimal_num == 0) 
    {
        strcpy(binary_string, "0");
    }

    while (decimal_num > 0)
     {
        rem = decimal_num % 2;

        sprintf(temp_string, "%d%s", rem, binary_string);
        
        strcpy(binary_string, temp_string);

        decimal_num = decimal_num / 2;
    }

    printf("Decimal number %d in Binary is: %s\n", original_num, binary_string);

    return 0;
}