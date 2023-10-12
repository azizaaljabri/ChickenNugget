#include <stdio.h>

int main() {
    int num1,num2;
    
    printf("Insert two numbers: ");
    scanf("%i %i", &num1, &num2);
    
 int num3 = num1 + num2;

    printf (" A the sum of %i and %i gives %i\n", num1 , num2, num3);
    return 0;
    }