//Name: Joshua McCluskey
//Date: 11.17.2021
//File Name: hello.c
//Purpose: THe method prompted user to type and greet the user back.

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("What is your name?\n");
    printf("hello, %s\n", name);
}