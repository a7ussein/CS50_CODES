#include<stdio.h>

void mario(int n);

int main(void)
{

    mario(18);
    printf("\n");
 }

void mario(int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("?");
    }
}