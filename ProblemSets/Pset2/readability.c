// For this problem, we’ll implement a program that calculates the approximate grade level needed to comprehend some text.

#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

// declare functions
int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(){
    // prompt user for text input
    string text = get_string("Text: ");

    // count the number of sentences in the user's input
    int sentences = count_sentences(text);

    // count the number of words in the user's input
    int words = count_words(text);

    // count the number of letters in the user's input
    int letters = count_letters(text);

    // define parameters for the Coleman-Liau index (index = 0.0588 * L - 0.296 * S - 15.8)
    double L = ((double) letters / (double) words) * 100;
    double S = ((double) sentences / (double) words) * 100;

    // thus the Coleman-Liau index becomes
    double index = 0.0588 * L - 0.296 * S - 15.8;

    // print output, while checking conditions
    if (index < 1){
        printf("Before Grade 1\n");
    }
    else if (index >= 1 && index < 16){
        printf("Grade %i\n", (int) round(index));
    }
    else if (index >= 16){
        printf("Grade 16+\n");
    }
}

// define first function
int count_letters(string text){

    // create and initialize variable(s).
    int i, j;

    // Iterate through each character of the string and remove non-alphabetical characters.
    for (i = 0; text[i] != '\0'; i++){
        while (!((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z') || text[i] == '\0')){
            for (j = i; text[j] != '\0'; j++){
                text[j] = text[j + 1];
            }
            text[j] = '\0';
        }
    }

    int len = strlen(text);

    return len;
}

// define second function
int count_words(string text){

    // create and initialize variable(s)
    int count = 0, i;

    // iterate through the string and check for spaces
    for (i = 0; text[i] != '\0'; i++){
        if (text[i] == ' ' && text[i + 1] != ' '){
            count++;
        }
    }
    count++;

    return count;
}

// define third function
int count_sentences(string text){

    // create and initialize variable(s)
    int count = 0, i;

    // iterate through the string and check for periods(.), exclamation marks(!) and question marks(?)
    for (i = 0; text[i] != '\0'; i++){
        if (text[i] == '.' || text[i] == '!' || text[i] == '?'){
            count++;
        }
    }
    count++;

    return count - 1;
}
