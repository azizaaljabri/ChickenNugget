#include <stdio.h>

int main () {
    float temp;
    printf("What's the temperature today? ");
    scanf("%f", &temp);
    
    float threshold = 20;

    if ( temp >= -10 && temp <= 40)
    printf("Temperature is within the range\n");

    else
        printf("Temperature is not within the range\n");
    return 0; 
}