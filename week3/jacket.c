#include <stdio.h>

int main () {
    float temperature;
    printf("What's the temperature today? ");
    scanf("%f", &temperature);
    
    float threshold = 20;

    if ( temperature > threshold)
    printf("No need for a jacket :)\n");
    else if ( temperature > 10)
        printf("Good weather for a light jacket :)\n");
    else
        printf("Bring a heavy jacket\n");
    return 0; 
}