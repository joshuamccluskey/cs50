//Name: Joshua McCluskey
//Date: 11.17.2021
//File Name: population.c
//Purpose: CS50 Lab01 colculating the population

#include <cs50.h>
#include <stdio.h>

int main()
{
    // Start method make sure less than 9
    int start;
    do
    {
      start = get_int("Start size: ");
    }
    while (start < 9);
    
    // End prompt make sure less than begin
    int end;
    do
    {
      end = get_int("End size: ");
    }
    while (end < start);
    
    // Calculating number of years
    int years = 0;
    
    // Update llama population until limit reached
    while (start < end)
    {
        start = start + (start / 3) - (start / 4);
        years++;
    }
    
    // Print out the years

    printf("Years: %i\n", years);
}