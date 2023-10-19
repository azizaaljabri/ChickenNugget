#include <stdio.h>
float sum (float a, float b); //declaration 

/* when it compiles it goes line by line 
however if we declare it as above it knows that it would be defined later*/

int main () 
{
    float y = 2;
    float z = sum(5, y); // calling our new function

    printf ("The sum of 5 and %f is %f\n", y, z);

    return 0;
}

float sum (float a, float b)
{
    float answer;
    answer = a + b;
    return answer;
} 