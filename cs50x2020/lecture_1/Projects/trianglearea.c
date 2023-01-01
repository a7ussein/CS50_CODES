#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int b = get_int("Base:");
    int h = get_int("Height:");
    int a = (h*b)/2;

       printf("Your triangle's area is: %i\n", a);
}
