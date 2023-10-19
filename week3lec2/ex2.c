#include <stdio.h>

float sphereVolume (float radius)
{
    float vSphere;
    vSphere = (4/3) * 3.14159 * (radius * radius * radius);
    return vSphere;
}

int main () 
{
    float rad;

    printf ("Enter Sphere Radius:\n");

    scanf ("%f",&rad);

    printf ("The volume of a sphere with radius %f is %f.\n", rad, sphereVolume (rad));
    
    return 0;
}