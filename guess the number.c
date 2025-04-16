#include <stdio.h>
int main()
{
    int randomNumber = 0;
    int guess = 0;
    int numberOfGuesses = 0;

    randomNumber = rand() % 50;
    printf("\nThis is a guessing game.");
    printf("\nI have chosen a number between 0 and 49, which you must guess. \n");

    for(numberOfGuesses = 10; numberOfGuesses > 0; --numberOfGuesses)
    {
        printf("\nYou have %d tr%s left.", numberOfGuesses, numberOfGuesses == 1 ? "y" : "ies");
        printf("\nEnter a guess: ");
        scanf("%d", &guess);

        if(guess == randomNumber)
        {
            printf("Congratulations.  You guessed it!\n");
            return 0;
        }
        else if(guess < 0 || guess > 49) 
            printf("I said the number is between 0 and 49.\n");
        else if(randomNumber > guess)
            printf(" %d is wrong.  My number is greater than that.\n", guess);
        else if(randomNumber < guess)
            printf(" %d is wrong.  My number is less than that.\n", guess);
    }

    printf("You have had ten tries and failed. The number was %d\n",randomNumber);

    return 0;
}