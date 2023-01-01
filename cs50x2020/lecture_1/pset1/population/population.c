#include <stdio.h>
#include <cs50.h>
int main(void)
{
    // TODO: Prompt for start size
    int startSize;
    do
    {
        startSize = get_int("Start Size: ");
    }
    while (startSize < 9);
    // TODO: Prompt for end size
    int endSize;
    do
    {
        endSize = get_int("End Size: ");
    }
    while (startSize > endSize);

    // TODO: Calculate number of years until we reach threshold

    int years = 0;
    while (startSize < endSize)
    {
        startSize = startSize + startSize / 3 - startSize / 4;
        years++;
    }

    // TODO: Print number of years
    printf("Years: %i\n", years);
}