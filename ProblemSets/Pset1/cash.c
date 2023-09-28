#include <cs50.h>
#include <stdio.h>

int get_cents();
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(){
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);

    return 0;
}

int get_cents(){
    // prompt user for change owed. If user inputs a negative value, reprompt them
    int change;
    do{
        change = get_int("Change owed: ");
    }
    while(change < 0);

    return change;
}

int calculate_quarters(int cents){
    // set quarters conditions for different ranges of cents inputted by the user
    int x = 0;

    if(cents > 24 && cents < 50){
        x = 1;
    }
    else if(cents > 49 && cents < 75){
        x = 2;
    }
    else if(cents > 74 && cents < 100){
        x = 3;
    }
    else if(cents > 99 && cents < 125){
        x = 4;
    }
    else if(cents > 124 && cents < 150){
        x = 5;
    }
    else if(cents > 149 && cents < 175){
        x = 6;
    }

    return x;
}

int calculate_dimes(int cents){
    // set dimes conditions for different ranges of cents inputted by the user
    int x = 0;

    if(cents > 9 && cents < 20){
        x = 1;
    }
    else if(cents > 19 && cents < 30){
        x = 2;
    }
    else if(cents > 29 && cents < 40){
        x = 3;
    }
    else if(cents > 39 && cents < 50){
        x = 4;
    }
    else if(cents > 49 && cents < 60){
        x = 5;
    }
    else if(cents > 59 && cents < 70){
        x = 6;
    }
    else if(cents > 69 && cents < 80){
        x = 7;
    }
    else if(cents > 79 && cents < 90){
        x = 8;
    }
    else if(cents > 89 && cents < 100){
        x = 9;
    }

    return x;
}

int calculate_nickels(int cents){
    // set nickels conditions for different ranges of cents inputted by the user
    int x = 0;

    if(cents > 4 && cents < 10){
        x = 1;
    }
    else if(cents > 9 && cents < 15){
        x = 2;
    }
    else if(cents > 14 && cents < 20){
        x = 3;
    }
    else if(cents > 19 && cents < 25){
        x = 4;
    }
    else if(cents > 24 && cents < 30){
        x = 5;
    }
    else if(cents > 29 && cents < 35){
        x = 6;
    }
    else if(cents > 34 && cents < 40){
        x = 7;
    }
    else if(cents > 39 && cents < 45){
        x = 8;
    }
    else if(cents > 44 && cents < 50){
        x = 9;
    }
    else if(cents > 49 && cents < 55){
        x = 10;
    }
    else if(cents > 54 && cents < 60){
        x = 11;
    }
    else if(cents > 59 && cents < 65){
        x = 12;
    }
    else if(cents > 64 && cents < 70){
        x = 13;
    }
    else if(cents > 69 && cents < 75){
        x = 14;
    }
    else if(cents > 74 && cents < 80){
        x = 15;
    }
    else if(cents > 79 && cents < 85){
        x = 16;
    }
    else if(cents > 84 && cents < 90){
        x = 17;
    }
    else if(cents > 89 && cents < 95){
        x = 18;
    }
    else if(cents > 94 && cents < 100){
        x = 19;
    }

    return x;
}

int calculate_pennies(int cents)
{
    // set pennies conditions for different ranges of cents inputted by the user
    if(cents > 0 && cents < 5){
        return cents;
    }

    return cents;
}
