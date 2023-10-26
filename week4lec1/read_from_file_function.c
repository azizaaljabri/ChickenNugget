#include <stdio.h>
#include <stdlib.h> // Defines exit().

FILE *open_file(char *filename, char *mode)
{
    FILE *file = fopen(filename, mode);
    if (file == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
    return file;
}

int main()
{
    char *filename = "data.txt";
    FILE *file = open_file(filename, "r");

    int buffer_size = 100;
    // it reads buffer size -1 
    char line_buffer[buffer_size];

    while (fgets(line_buffer, buffer_size, file) != NULL)
    // != NULL is not needed in this case since null is 0 and that is false
    // we use a while loop so it doesnt only print out the first value 
    {
        printf("%s", line_buffer);
    }

    fclose(file);
    return 0;
}