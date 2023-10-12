#include <stdio.h>
//use a loop to print 100 going down to 0 in 5s
int main () {
    int a;

    for (a=100; a>0; a-=5) {
        printf("a = %d\n",a);
    }
    printf("the loop has ended and a= %d\n",a);
}
