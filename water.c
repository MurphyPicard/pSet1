#include <stdio.h>
#include <cs50.h>


int main (void)
{

    int minutes;

    // Gets a valid length of shower in minutes
    do
    {
        printf("How long is your shower in minutes?\n");
        minutes = get_int();
    }
    while ( minutes <= 0 );

    // The math
    int bottles = minutes * 12;

    printf("You used %i bottles of water.\n", bottles);

    //test2




}