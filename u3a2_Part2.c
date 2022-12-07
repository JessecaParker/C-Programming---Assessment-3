/*Jesseca Wirtz - IT-FP2240 - Part 2
 *5/10/20
 */

 //Made sure to have the correct headers
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
    //declare the variables to be used. I set numGuesses to 1
    //since the user has to guess at least 1 time.
    int numGuesses = 1;
    int guess = 0;
    int i;
    int randomNumber = 0;
    time_t t;

    //makes sure that the number generated is different each time
    srand(time(&t));

    //creates a random number
    randomNumber = (rand() % 20) + 1;

    printf("Guess a number between 1 and 20: ");

    /*Using a while loop instead of a for loop in case the user
    ends up guessing numerous times. Instead of setting a for loop at
    20 or another number, the user might forget which numbers they have
    guessed, so it is simpler to use a while loop until the user
    guesses the correct number. */

    /*Switched from a do/while loop to a while loop as suggested.
    This makes the condition easily visible at the top and is more
    concise code. The prompt for the user is now outside of the loop
    and the scan is on the inside.*/
    while (guess != randomNumber)
    {
        scanf(" %d", &guess);
        //Outputs if the user guesses the correct number
        if (guess == randomNumber)
        {
            printf("\nCorrect! You guessed the correct number in %d tries!",
                   numGuesses++);
        }
        //Outputs if the user guesses higher than the random number
        else if (guess > randomNumber)
        {
            printf("\n%d was too high!", guess);
            numGuesses++;
            printf("\nGuess again!\n\n");
        }
        //Outputs if the user guesses lower than the random number
        else
        {
            printf("\n\n%d was too low!", guess);
            numGuesses++;
            printf("\nGuess again!\n\n");
        }
    }
    return 0;
}
