# This the basic code to genrate Ranmdom numbers between any two(2) numbers you want

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num; //To store the random number generated
    srand(time(0));
    num=rand()%100; //This will generate any random number between 0 to 100
    printf("Random generated is %d\n",num); //This will print the random number
    return 0;
}

//This the basic program to generate random numbers:)
