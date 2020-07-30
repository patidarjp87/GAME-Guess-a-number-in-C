#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guess,no_of_attempts=1;
    srand(time(0));
    number=rand()%300 +2;//Generates a random number between 2 and 300
    printf("****Welcome to Guess a Number game****\n");
    do{
        printf("Guess the number between 2 to 300\n");
        scanf("%d",&guess);
        if(guess<number)
            {
                printf("Please enter Higher number\n");
            }
        else if(guess>number)
            {
                printf("Please enter Lower number\n");
            }
        else
        {
            printf("You guessed it in %d attempts\n",no_of_attempts);
        }
        no_of_attempts++;
    }while (guess!=number);
    return 0;
}