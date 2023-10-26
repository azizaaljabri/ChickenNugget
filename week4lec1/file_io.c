#include <stdio.h>

int main () {
    char filename[] ="./data.txt";
    FILE *file = fopen(filename, "w"); 
    // * = file pointer , w means writing (r for reading and a for appending)
    if (file == NULL) {
        perror("File I/O");
        return 1;
    }
    printf("file is %ld\n", file); 

    fprintf(file,"Hello :D"); 
    fclose(file);
    //its good practice to close files after opening it 

    return 0;
}