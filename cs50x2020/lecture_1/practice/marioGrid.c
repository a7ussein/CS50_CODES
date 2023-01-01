#include<stdio.h>
#include<cs50.h>


int main(void){
    int i = get_int("Width: ");
    for (int h = 0; h < i; h++){
        for(int w = 0; w < i; w++)
        {
            printf("#");
        }
        printf("\n");
    }
}