#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

//declare function
int compute_score(string word);


int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    printf("score1 = %i\n", score1);
    printf("score2 = %i\n", score2);

    // TODO: Print the winner
    if (score1 > score2){
        printf("Player 1 wins!\n");
    }
    else if(score1 < score2){
        printf("Player 2 wins!\n");
    }
    else if(score1 == score2){
        printf("Tie!\n");
    }
}


// define function
int compute_score(string word)
{
    // TODO: Compute and return score for string

    // create and initialize a variable to use as sum
    int len = strlen(word);
    int sum = 0;

    // create arrays of upper and lower case alphabets
    char ALPHA[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N',
                    'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    char alpha[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
                    'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    // iterate through the length of the string using a for loop
    for (int i = 0; i < len; i++){
        if (isupper(word[i])){
            sum += POINTS[word[i] - ALPHA[i - i]];
        }
        else if (islower(word[i])){
            sum += POINTS[word[i] - alpha[i - i]];
        }
    }

    return sum;
}
