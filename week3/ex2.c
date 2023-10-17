#include <stdio.h>

int main () {
    
    int num;

    printf("Enter number: ");
    scanf("%d", &num);
    
    if ( num%4==0 && num%5==0 )
        printf("number is divisible by both 4 and 5\n");

    else 
        printf("number is not divisible by  both 4 and 5 \n");

    return 0; 
}