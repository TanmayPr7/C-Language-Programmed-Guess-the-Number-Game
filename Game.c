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
