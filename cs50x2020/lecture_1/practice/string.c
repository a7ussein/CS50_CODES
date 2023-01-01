#include<stdio.h>
#include<cs50.h>

int main(void)
{
    printf("Welcome!\n");
 //you should always declare your variables. 
    string answer = get_string("what is your name? ");
    printf("Hello, %s\n", answer);
}