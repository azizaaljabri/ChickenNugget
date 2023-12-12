#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FitnessDataStruct.h"

// Struct moved to header file

// Define any additional variables here
// Global variables for filename and FITNESS_DATA array


// This is your helper function. Do not change it in any way.
// Inputs: character array representing a row; the delimiter character
// Ouputs: date character array; time character array; steps character array
void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps) {
    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);
    
    // Tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {        strcpy(date, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(time, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(steps, token);
    }
    
    // Free the duplicated string
    free(inputCopy);

                    }

// Complete the main function
int main() {
    FITNESS_DATA data [500];
    int buffer_size = 10000;
    char line[buffer_size];

    char date[11];
    char time[6];
    char steps[5000];
    //A
    char filename[buffer_size]; 

    char option; 
    //B
    int counter = 0;

    //C
    int minSteps = -1; 
    char minDate[11];
    char minTime[6];

    //D
    int maxSteps = -1;
    char maxDate[11];
    char maxTime[6];

    //E
    int totalSteps = 0;

    while (1)
    {   printf("Menu Options:\n");
        printf("\n");
        printf("A: Specify the filename to be imported\n");
        printf("B: Display the total number of records in the file\n");
        printf("C: Find the date and time of the timeslot with the fewest steps\n");
        printf("D: Find the date and time of the timeslot with the largest number of steps\n");
        printf("E: Find the mean step count of all the records in the file\n");
        printf("F: Find the longest continuous period where the step count is above 500 steps\n");
        printf("Q: Quit\n");
        printf("\n");
    
    scanf(" %c", &option);

    switch (option)
    {
        case 'A':
        case 'a':
            printf("Enter filename: ");
            scanf("%s", filename);
            FILE *input = fopen(filename, "r");
            if (!input)
            {
                printf("Could not find or open the file.\n");
                return 1;
            }
            while (fgets(line, buffer_size, input))
            {   
            tokeniseRecord(line,",",date,time,steps);
            counter ++;
            }

            break;

        case 'B':
        case 'b':
        printf("Number of records in file: %d\n", counter);

            break;

        case 'C':
        case 'c':

        rewind(input); 

        while (fgets(line, buffer_size, input))
        {
            tokeniseRecord(line, ",", date, time, steps);

            int curSteps = atoi(steps);

            if (minSteps == -1 || curSteps < minSteps)
            {
                minSteps = curSteps;
                strcpy(minDate, date);
                strcpy(minTime, time);
            }
            printf("Fewest steps: %s %s\n", minDate, minTime);
        }    
            break;

        case 'D':
        case 'd':
        rewind(input); 
        while (fgets(line, buffer_size, input)) {
            tokeniseRecord(line, ",", date, time, steps);

            int curSteps = atoi(steps);

            if (curSteps > maxSteps) {
                maxSteps = curSteps;
                strcpy(maxDate, date);
                strcpy(maxTime, time);
            }
        }
        printf("Largest steps: %s %s\n", maxDate, maxTime);
            break;

        case 'E':
        case 'e':
        rewind(input); 
        while (fgets(line, buffer_size, input))
        {
        tokeniseRecord(line, ",", date, time, steps);

        totalSteps += atoi(steps);
        }

        int mean = (totalSteps + counter -1) / counter;
        printf("Mean step count: %d\n", mean);
        break;

          case 'F':
          case 'f':
                break;

           case 'Q':
           case 'q':
             return 0;
             break;
         default:
               printf("Invalid choice\n");
              break;
        fclose(input);
     }
     
    }

   return 0;
}









