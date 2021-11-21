//Name: Joshua McCluskey
//Date: 11.20.2021
//File Name: mario.c
//Purpose: Recreating the mario pryimads

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Variable for the number of block from the user prompt
    int block; 
    //do...while loop to continue to prompt the user until they ask for a number between 1 - 8
    //Note: I had an error with my do while loop. I needed a space after the while( condition)
    do
    {
    block = get_int("Height:\n");
    }
    while (block < 1 || block > 8);
    
    //This is building blocks of the using a if elseif statemnets for the blocks
    for (int i = 0 ; i < 9 ; i++)
    {
    
    if (i == 1)
    {
        printf("       #  #\n");
    }
        else if(i == 2)
        {
         printf("      ##  ##\n");
    }
        else if(i == 3)
        {
         printf("     ###  ###\n");
    }
        else if(i == 4)
        {
         printf("    ####  ####\n");
    }
        else if(i == 5)
        {
         printf("   #####  #####\n");
    }
        else if(i == 6)
        {
         printf("  ######  ######\n");
    }
        else if(i == 7)
        {
         printf(" #######  #######\n");
    }
        else if(i == 8)
        {
        printf("########  ########\n");
    }
  }
}