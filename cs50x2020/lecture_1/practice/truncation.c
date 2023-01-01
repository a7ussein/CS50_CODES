#include<stdio.h>
#include<cs50.h>

int main(void)
{
//instead of changing the whole code to float just type (float) next to whatever variable you want to change
    int x = get_int("X:");
    int y = get_int("Y:");

//Divide x by y
    float z = (float) x / (float) y;
    printf("%f\n" , z);
}