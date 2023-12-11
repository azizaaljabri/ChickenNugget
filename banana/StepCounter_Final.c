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

    char filename[buffer_size]; 
    char option; 

    do 
    {
        printf("Menu Options:\n");
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
        printf("Enter Choice: ");
        fgets(line, buffer_size, stdin);
        sscanf(line, " %s ", filename);
        break;

        case 'B':
        case 'b':
        // int counter = 0;
        //     while (fgets(line, buffer_size, input))
        //     {
        //         tokeniseRecord(line, ",", date, time, steps);
        //         counter++;
        //     }
        // printf("Total Records: %d\n", counter);
            break;

        case 'C':
        case 'c':
            break;

        case 'D':
        case 'd':
            break;

        case 'E':
        case 'e':
             break;

          case 'F':
          case 'f':
                break;

           case 'G':
           case 'g':
               break;

           case 'Q':
           case 'q':
              return 0;
             break;
         default:
               printf("Invalid choice\n");
              break;
     }
    }

   return 0;
}









