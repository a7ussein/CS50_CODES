#include<stdio.h>
#include<cs50.h>

int main(void){
    int x = get_int("X: ");
    int y = get_int("Y: ");

    if(x > y){
        printf("x is larger than y\n");
    }
    else if(x < y){
        printf("x is less than y\n");
    }
    else{
        printf("x is equal to y\n");
    }
}