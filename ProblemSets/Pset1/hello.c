#include <stdio.h>
#include <cs50.h>

string name;

int main(){
    name = get_string("What's your name? ");

    printf("Hello, %s. Welcome to CS50\n", name);
}
