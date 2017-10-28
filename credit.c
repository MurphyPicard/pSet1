#include <stdio.h>
#include <cs50.h>
#include <math.h>


int main (void){

    printf("put in a cc number \n");

    long int ccnum;
    ccnum = get_long_long();


    int nDigits = floor(log10(ccnum)) + 1;

    int sum = 0;
    int mod = 10;
    int divisor = 10;

    for(int i = 0; i < nDigits; i++){


        printf("hi\n");
    }



    //for(int i = 0; i < ){}


    printf("%ld \n", ccnum);

    printf("%i  \n", nDigits);




}//main