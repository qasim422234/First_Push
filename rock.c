#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int user, comp;
    int score = 0;
    char play;

    srand(time(NULL));

    do
    {
        comp = (rand() % 3) + 1;

        printf("\n1. Rock, 2. Paper, 3. Scissors\nChoice: ");
        scanf("%d", &user);

        switch (user)
        {
        case 1:
            switch (comp)
            {
            case 1:
                printf("Comp: Rock. Draw!\n");
                break;
            case 2:
                printf("Comp: Paper. You Lose!\n");
                break;
            case 3:
                printf("Comp: Scissors. You Win!\n");
                score++;
                break;
            }
            break;

        case 2:
            switch (comp)
            {
            case 1:
                printf("Comp: Rock. You Win!\n");
                score++;
                break;
            case 2:
                printf("Comp: Paper. Draw!\n");
                break;
            case 3:
                printf("Comp: Scissors. You Lose!\n");
                break;
            }
            break;

        case 3:
            switch (comp)
            {
            case 1:
                printf("Comp: Rock. You Lose!\n");
                break;
            case 2:
                printf("Comp: Paper. You Win!\n");
                score++;
                break;
            case 3:
                printf("Comp: Scissors. Draw!\n");
                break;
            }
            break;

        default:
            printf("Invalid Input!\n");
        }

        printf("Score: %d\nPlay again? (y/n): ", score);
        scanf(" %c", &play);

    } while (play == 'y' || play == 'Y');

    return 0;
}