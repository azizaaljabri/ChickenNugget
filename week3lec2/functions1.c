#include <stdio.h>

// function in c 
int sum (int a, int b) // parameters of the function 
{
    int answer;
    answer = a + b;
    return answer;
}
// function in c 

int main () 
{
    int y = 2;
    int z = sum(5, y); // calling our new function
    /* 5 would be a and y would be b (the order matters) 
    z is the value of whats returned out of our function 
    you can repeat the function multiple times */

    printf ("The sum of 5 and %d is %d\n", y, z);
}