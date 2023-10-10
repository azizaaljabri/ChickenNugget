#include <stdio.h>

/*int main( ) {
    int var1;
    int var2;
    printf("Insert the length: ");
    scanf("%d", &var1);
    printf("Insert the width: ");
    scanf("%d", &var2);
    int c; 
    c = var1 * var2
    printf("area = %d\n" , var1, var2);
    return 0;
}*/
int main() {
    float a ;
    float b ;
    int c;
    printf("Insert the width of the rectangle: ");
    scanf("%f", &a);
    printf("Insert the length of the rectangle: ");
    scanf("%f", &b);
    c = a * b;
    printf (" A rectangle with width %f and length %f gives an area of %d\n", a , b, c);
    return 0;
    }