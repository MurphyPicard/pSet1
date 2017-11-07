#include <stdio.h>
#include <cs50.h>


int main (void)
{

    printf("how much due? ");

    // can be float or double
    float due;
    due = get_float();


    // to prevent computer rounding errors (not every number possible in binary)
    // this ensures the due variable is always slightly above the real life amount owed
    due += .001;

    int coins = 0;

    // give the Quarters back first
    while (due >= .25)
    {
        coins++;
        due -= .25;
    }

    // second give the dimes back
    while (due >= .1)
    {
        coins++;
        due -= .1;
    }

    // third give the nickels back
    while (due >= .05)
    {
        coins++;
        due -= .05;
    }

    // last give the pennies back
    while (due >= .01)
    {
        coins++;
        due -= .01;
    }

    // mininum number of coins returned
    printf("%i \n", coins);

}//main