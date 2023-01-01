#include<stdio.h>
#include<cs50.h>

int main(void)
{
//ask the user for their name and store it in a variable called x
    string x = get_string("What is your name: ");
//welcome the user by printing their name using the variable x
    printf("Hello %s\nWelcome to CS50\n", x);
}