#include <stdio.h>
//Write a c program which uses a while loop to have users guess a number until they get it right
int main() {
    int rightAnswer, guess;
    rightAnswer = 6;
    guess = 0;

    while (guess !=rightAnswer)
    // while guess doesnt equal rightAnswer 
    {
        printf ("Guess what number im thinking of 1-10: ");
        scanf ("%i\n" ; &guess);
    }
    printf ("Well Done! :)");

    return (0);
}