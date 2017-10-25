#include <stdio.h>
#include <cs50.h>


int main (void){






    int minutes;

    do
    {
        printf("How long is your shower in minutes?\n");
        minutes = get_int();
    }
    while ( minutes <= 0 );

    int bottles = minutes * 12;

    printf("You used %i bottles of water.\n", bottles);






}