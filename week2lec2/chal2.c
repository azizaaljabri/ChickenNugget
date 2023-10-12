#include <stdio.h>
//use a loop to print 0 to 50 going up by 1s
int main () {
    int a;

    for (a=0; a<50; a+=2) {
        printf("a = %d\n",a);
    }
    printf("the loop has ended and a= %d\n",a);
}
