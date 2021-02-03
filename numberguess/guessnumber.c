#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    
    unsigned guess = 21;
    int attempts = 1;
    time_t t;
    srand((unsigned) time(&t));
    unsigned correct=rand() %21;
    while (guess!=correct)
    {
        printf("Guess a number\n");
        scanf("%i", &guess);
        if (guess<correct)
        {
            printf("your number is too small!\nyou have %i attempts left\n", 5-attempts);
        }
        else if (guess>correct)
        {
            printf("your number is too large!\nyou have %i attempts left\n", 5-attempts);
        }
        else if (guess==correct)
        {
            printf("you guessed the number!\nyou took %i attempts\n", attempts);
            break;
        }
        attempts++;
        if (attempts>5)
        {
            printf("too many tries, you lose!\n");
            break;
        }
    }
    printf("game over!\n");
    return 0;
}