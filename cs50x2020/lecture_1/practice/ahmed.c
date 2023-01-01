#include<stdio.h>
#include<cs50.h>

int main(void){
    int x = get_int ("HOW MANY AHMEDS DO YOU WANT? \n");
    for (int i = 0; i < x; i++){
        printf("AHMED\n");
    }
}