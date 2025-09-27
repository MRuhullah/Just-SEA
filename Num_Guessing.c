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

    printf("I am thinking of a number between %d and %d. Can you guess it?\n", min, max);

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (scanf("%d", &guess) != 1)
        {

            while (getchar() != '\n');       
            printf("Invalid input! Try Again\n");
            continue;
        }

    } while (guess != num);
    
    return 0;
}