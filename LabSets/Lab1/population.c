#include <cs50.h>
#include <stdio.h>

int n, m, y;

int main(void)
{
    // TODO: Prompt for start size
    do{
        n = get_int("Start size: ");
    }
    while (n < 9);

    // TODO: Prompt for end size
    do{
        m = get_int("End size: ");
    }
    while (m <= n-1);

    // TODO: Calculate number of years until we reach threshold
    do{
        if (n == m){
            y = 0;
        }
        else{
            n += n/3 - n/4;
            y++;
        }
    }
    while (n < m);

    // TODO: Print number of years
    printf("Years: %i\n", y);
}
