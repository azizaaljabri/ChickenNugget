#include <stdio.h>
#include <math.h>

float circleArea (double radius)
{
    float a_circle;
    a_circle = 3.14159* pow(radius,2.);
    return a_circle;
}

int main () 
{
    float rad;

    printf ("Enter circlce Radius:\n");

    scanf ("%f",&rad);

    printf ("The area of a circle with radius %f is %f.\n", rad, circleArea (rad));
    
    return 0;
}