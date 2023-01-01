#include<stdio.h>
//line 3 if for declearing the meow function
void meow(void);
int main(void){
    int n = 3;
    for(int i = 0; i < n; i ++){
        meow();
    }
}
void meow(void){
    printf("Meow\n");
    }
