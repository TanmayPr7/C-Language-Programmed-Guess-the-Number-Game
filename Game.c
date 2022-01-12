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

int feedback(){
    int d;
    printf("\n");
    printf("Press 1 if you want to Review Us:)\n");
    printf("OR Press 0 if you want to exit Review page:)\n");
    scanf("%d",&d);
    if(d==1){
        char e[6];
        printf("Please Rate Us on scale of ***** star Sir\n");
        scanf("%s",&e[0]);
        if(strlen(e)>5){
            printf("Error:(\n");
            printf("Your Rating is Invalid Please provide Us Valid Review Sir Thank you:)\n");
            printf("********************************************************************************************");
            feedback();
        }
        else{
            FILE *ptr;
            ptr=fopen("Feedback.txt","a");
            fprintf(ptr,"Your Rating is %s stars\n",e);
            printf("Sir your Rating is %s Thank you for precious Review and Time\n",e);
            printf("*********************************************************************************************");
        }
    }
    else{
        printf("*********************************************************************************************");
        return 0;
    }
}

int main(){
    int c;
    printf("                              ************Play and Enjoy our game Guess the Number:)************\n");
    while(1){
        printf("\n");
        printf("Press 1 to start the game:)\n");
        printf("Press 2 to Review Us:)\n");
        printf("OR Press 0 to exit the game:)\n");
        scanf("%d",&c);
        if(c==1){
            setup();
        }
        else if(c==2){
            feedback();
        }
        else{
            return 0;
        }
    }
    return 0;
}

//This is the basic code for this Game Project
