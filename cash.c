//Name: Joshua McCluskey
//Date: 11.20.2021
//File Name: cash.c
//Purpose: Greedy algortihm to calculate how many coins of change to return to person

#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float dollars = 0.0;
    int coins = 0;
    
    do 
    {
        
     dollars = get_float("How much change?\n");
     
    }
    while (dollars < 0);
     
    int cents = round(dollars * 100);
     
    //   for (int coins = 0 ; coins >= cents ; coins++)
        
    do
    {
        
        if (cents >= 25)
        {
            cents -= 25;
            coins ++;
        }
        else if (cents >= 10)
        {
            cents -= 10;
            coins ++;
        }
        else if (cents >= 5)
        {
            cents -= 5;
            coins ++;
        }
        else if (cents >= 1)
        {
            cents -= 1;
            coins ++;
        }
         
    }
    while (cents != 0);
     
    printf("Change owed:" "%d\n", coins);
    
}
