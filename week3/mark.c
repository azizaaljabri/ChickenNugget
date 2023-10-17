#include <stdio.h>

int main () {

    int mark;

    printf("Enter mark: ");
    scanf("%d", &mark);

    if (mark >= 0 && mark <= 100){
        if (mark >= 40)
         printf ("A mark of %d is a pass :) \n", mark);
        else 
         printf("A mark of %d is a fail :(\n", mark);
    }
    else 
        printf ("Please enter a number between 0-100");
    return 0;
}