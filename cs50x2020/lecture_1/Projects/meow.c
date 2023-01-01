#include<stdio.h>
#include<cs50.h>

void meow(void);
int main(void)
{
  int l = get_int("how many meows do you want: ");
  for(int x = 0; x < l; x++){
    meow();
  }
}

void meow(void)
{
    printf("meow\n");
}