#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    int guess, min, max, num;
    srand(time(NULL));
    num = (rand() % (max - min + 1)) + min;

    printf("Enter the range for your number guessing: ");
    scanf("%d %d", &min, &max);

    srand(time(NULL));
    num = (rand() % (max - min + 1)) + min;

    printf("I am thinking of a number between %d and %d. Can you guess it?\n", min, max);

    do
    {
        printf("Enter your guess: ");
       

        if (scanf("%d", &guess) != 1)
        {

            while (getchar() != '\n');
                
            printf("Invalid input! Try Again\n");
            continue;
        }

        if (guess < min || guess > max)
        {
            printf("Out of range! Guess between %d and %d.\n", min, max);
        }
        else if (guess < num)
        {
            printf("Too low!\n");
        }
        else if (guess > num)
        {
            printf("Too high!\n");
        }
        else
        {
            printf("Congratulations! You guessed the number!\n");
        }

    } while (guess != num);

    return 0;
}