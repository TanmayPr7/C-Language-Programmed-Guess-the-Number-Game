# This is the main source code for this game project

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void setup()                       
{
    int guess;
    int num;
    srand(time(0));
    num=rand()%100;
    
    int no_guess=0;
    printf("                                           ****Guess the number between 1 to 100:)****\n");

    while(guess!=num)
    {
        scanf("%d",&guess);
        if(guess>num)
        {
            printf("Lower number plz:)\n");
        }
        else if(guess<num)
        {
            printf("Higher number plz:)\n");
        }
        else
        {
            printf("\n");
            printf("                                        (:Congrats you gussed the number in %d attempts:)\n",no_guess);
            printf("                                          Thanks for Playing Our Game please Rate Us:)\n");
            printf("************************************************************************************************************************");
        }
        no_guess++;
    }
}
