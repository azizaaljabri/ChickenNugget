#include <stdio.h>
#include <stdib.h>

int main() {
    int nums [200];
    char line[100];
    int counter = 0;
    int numsOver1000 = 0;


    FILE* input = fopen("input.txt","r");

    while (fgets(line,100,input)){
        nums [counter] = atoi(line);
        //atoi for converting to integer 
        printf("%d\n", nums [counter]);
        counter++;
    }
    fclose(input);

    for (int i=0; i < 200; i++){
        
    }
}