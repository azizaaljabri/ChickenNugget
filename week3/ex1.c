#include <stdio.h>

int main () {
    
    float num;

    printf("Enter number: ");
    scanf("%f", &num);
    
    if ( num > 0)
    printf("number is positive\n");

    else if ( num < 0)
        printf("number is negative\n");

    else if (num == 0)
        printf("number is 0 \n");

    return 0; 
}