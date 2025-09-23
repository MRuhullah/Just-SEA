#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int User_choice, comp_choice;
    char play_again;
    srand(time(NULL));
    do
    {

        printf("Welcome to the Rock Paper Scissors game!\n");
        printf("Choose from the following:\n");
        printf("1.Rock\n");
        printf("2.Paper\n");
        printf("3.Scissors\n");
        scanf("%d", &User_choice);

        if (User_choice < 1 || User_choice > 3)
        {
            printf("Invalid choice.......Please try again\n");
            continue;
        }
        comp_choice = (rand() % 3) + 1;

        if (User_choice == 1)
        {
            printf("You chose.......Rock\n");
        }

        else if (User_choice == 2)
        {
            printf("You chose.......Paper\n");
        }
        else
            printf("You chose........Scissors\n");

        if (comp_choice == 1)
        {
            printf("Computer chose.......Rock\n");
        }

        else if (comp_choice == 2)
        {
            printf("Computer chose.......Paper\n");
        }
        else
            printf("Computer chose........Scissors\n");

        if (User_choice == comp_choice)
        {
            printf("It's a tie!\n");
        }
        else if (
            (User_choice == 1 && comp_choice == 3) ||
            (User_choice == 2 && comp_choice == 1) ||
            (User_choice == 3 && comp_choice == 2))
        {
            printf("You win!\n");
        }
        else
        {
            printf("You lose!\n");
            printf("Better luck next time\n");
        }

        printf("Play again? (y/n): ");
        scanf(" %c", &play_again);

    } while (play_again == 'y' || play_again == 'Y');

    printf("Thank You for playing\n");

    return 0;
}