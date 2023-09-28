// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    // create variables for each conditions and set to false
    bool lower = false;
    bool upper = false;
    bool number = false;
    bool symbol = false;

    // store length of the string in a variable as an integer
    int len = strlen(password);

    // iterate through the string with a for loop
    for (int i = 0; i < len; i++){
        if (password[i] != 0){
            return number;
        }
    }
    return true;
}
