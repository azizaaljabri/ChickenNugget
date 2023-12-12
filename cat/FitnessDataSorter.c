#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the struct for the fitness data
typedef struct {
    char date[11];
    char time[6];
    int steps;
} FitnessData;

// Function to tokenize a record
void tokeniseRecord(char *record, char delimiter, char *date, char *time, int *steps) {
    char *ptr = strtok(record, &delimiter);
    if (ptr != NULL) {
        strcpy(date, ptr);
        ptr = strtok(NULL, &delimiter);
        if (ptr != NULL) {
            strcpy(time, ptr);
            ptr = strtok(NULL, &delimiter);
            if (ptr != NULL) {
                *steps = atoi(ptr);
            }
        }
    }
}
/*
references 
1) https://www.geeksforgeeks.org/bubble-sort/
2) https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/
3) https://www.geeksforgeeks.org/basics-file-handling-c/
4) course material 
*/
int main() {
    char filename[256];

    //getting filename
    printf("Enter filename: ");
    scanf("%s", filename);

    // opening file
    FILE *file = fopen(filename, "r");

    //making sure a filename is given
    if (file == NULL) {
        fprintf(stderr, "Error: Unable to open file\n");
        return 1; 
    }
 
    char line[1000]; 
    int count = 0;

    //reading file and getting count
    while (fgets(line, sizeof(line), file) != NULL)
    {
        char date[11];
        char time[6];
        int steps;

        tokeniseRecord(line, ',', date, time, &steps);

        count++;
    }
    fclose(file);
    
    //open file to get array
    file = fopen(filename, "r");

    //allocating space for an array
    FitnessData *data = (FitnessData *)malloc(count * sizeof(FitnessData));

    //putting the contents of the file into the array
    int i = 0;
    while (fgets(line, sizeof(line), file) != NULL) {
        tokeniseRecord(line, ',', data[i].date, data[i].time, &data[i].steps);
        i++;
    }

    fclose(file);

    //sorting contents using 'bubble sort'
    for (i = 0; i < count - 1; i++) 
    {
        for (int j = 0; j < count - i - 1; j++) 
        {
         if (data[j].steps < data[j + 1].steps)
            {
            FitnessData temp = data[j];
            data[j] = data[j + 1];
            data[j + 1] = temp;
            }
        }
    }

    //making a tsv file
    strcat(filename, ".tsv");

    //putting contents into created file
    file = fopen(filename, "w");

    for (i = 0; i < count; i++) 
    {
        fprintf(file, "%s\t%s\t%d\n", data[i].date, data[i].time, data[i].steps);
    }

    fclose(file);

    free(data);

    return 0;
}