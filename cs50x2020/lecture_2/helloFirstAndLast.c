#include<stdio.h>
#include<cs50.h>

int main(void){
    string firstName = get_string("what is your first name: " );
    string lastName = get_string("what is your last name: ");
    // string firstAndLast = (firstName + lastName);
    printf("Hello, %s",firstName);
    printf(" ");
    printf("%s\n", lastName);
}