#include <cs50.h>
#include <stdio.h>

int i,j,k,l;

int main(){
    // prompt the user for an input between the range 1 < i > 8
    // if input falls outside this range, reprompt user
    do{
        i = get_int("Height: ");
    }
    while (i < 1 || i > 8);

    // create output based on user's input using a nested for loop
    for(j = 0; j < i; j++){
        for(k = i-1; k > j; k--){
            printf(" ");
        }
        for(l = 0; l < k; l++){
            printf("#");
        }
        printf("#\n");
    }
}
