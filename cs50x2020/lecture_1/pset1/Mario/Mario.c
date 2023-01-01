#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int x;
    do
    {
//prompt user for the Height
        x = get_int("Height: ");
    }
//if the user input is less than one or more than 8 the program will ask the user to type his input again
    while (x < 1 || x > 8);
//h is for the row
    for (int h = 0; h < x; h++)
    {

//w is for the column
        for (int w = 0; w < x; w++)
        {
            if (h + w < x - 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }

        printf("\n");

    }
}