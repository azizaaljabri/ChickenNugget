#include <stdio.h>
// //use a loop to print every multiple of 11 to 1000
int main () {
    int a;

    for (a=11; a<1000; a+=11) {
        printf("a = %d\n",a);
    }
    printf("the loop has ended and a= %d\n",a);
}
