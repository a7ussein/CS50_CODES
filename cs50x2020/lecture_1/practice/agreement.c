#include<stdio.h>
#include<cs50.h>

int main(void)
{
    char agreement = get_char("Do you agree? ");
if (agreement == 'y' || agreement == 'Y' )
{
    printf("Agreed.\n");
}
else if (agreement == 'n' || agreement == 'N')
{
    printf("Disagreed. \n");
}
}