#include <stdio.h>
#include <cs50.h>
#include <math.h>

float get_cash(void);

float cash;
int main(void)
{
    //getting user input (abstracted)
    get_cash();
    //round the user input 
    int cents = round(cash * 100);
    //get quarters and subtract
    int q = cents / 25;
    cents = cents % 25;
    //get dimes and subtract 
    int d = cents / 10;
    cents = cents % 10;
    //get nickels and subtract
    int n = cents / 5;
    cents = cents % 5;
    //get pennies
    //already in cents
    //add everything
    int owed = q + d + n + cents;
    //print what is owed 
    printf("%i\n", owed);
}

float get_cash(void)
{
    do 
    {
        cash = get_float("Change owed: ");
    }
    while (cash < 0);
    return cash; 
}
