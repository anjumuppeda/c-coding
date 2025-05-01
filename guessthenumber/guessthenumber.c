#include <stdio.h>

int main()
 {
    int number = 5; 
    int guess;

    printf("Guess the number (between 1 and 10): ");
    scanf("%d", &guess);

    if (guess == number)
     {
        printf("You guess is correct\n");
    }
     else 
    {
        printf("you guess is wrong\n");
    }
 return 0;
}