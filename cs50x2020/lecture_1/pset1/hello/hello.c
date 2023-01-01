#include<cs50.h>
#include<stdio.h>

int main(void)
{
    //propmt user for name input
    string name = get_string("What is your name: ");
    //prints hello and the name of the user
    printf("Hello, %s\n", name);
}