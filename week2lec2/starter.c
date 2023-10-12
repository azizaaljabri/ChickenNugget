#include <stdio.h>

int main() {
    float a ;
    float b ;
    int c;
    printf("Insert first number: ");
    scanf("%f", &a);
    printf("Insert second number: ");
    scanf("%f", &b);
    c = a + b;
    printf (" A the sum of %f and %f gives %d\n", a , b, c);
    return 0;
    }