#include <cs50.h>
#include <stdio.h>
#include <string.h>

// declare function
void convert(string msg);

int main(){
    // get user input
    string message = get_string("Message: ");

    // convert input to binary and display output
    convert(message);
}

// define function
void convert(string text){

    // Convert each character to binary
    for (int i = 0; i < strlen(text); i++) {
        char character = text[i];

        // reverse output
        for (int j = 7; j >= 0; j--) {
            int bit = (character >> j) & 1;

            // display output in emojis
            if (bit == 0){
                // Dark emoji
                printf("\U000026AB");
            }
            else if (bit == 1){
                // Light emoji
                printf("\U0001F7E1");
            }
        }
        printf("\n");
    }
}
