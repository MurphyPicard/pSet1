#include <stdio.h>
#include <cs50.h>
#include <math.h>


int main (void){

    printf("put in a cc number \n");

    long int ccnum;
    ccnum = get_long_long();


    int nDigits = floor(log10(ccnum)) + 1;

    int sum = 0;


    int mod = 10; // mod starts at ten for this particular loop
    for(int i = 0; i < nDigits; i += 2){

        sum += (ccnum % mod) / (mod/10);

        mod = mod * 100;

        printf("sum: %i \n", sum);
    }

    mod = 100; // mod starts at 100 for this particular loop
    for(int j = 0; j < nDigits; j += 2){

        switch(     (ccnum % mod) / (mod/10)    ) {

            case 1 :
                sum += (ccnum % mod) / (mod/10);
                break;

            case 2 :
                sum += (ccnum % mod) / (mod/10);
                break;

            default :
            sum += (ccnum % mod) / (mod/10);
        }//switch

        //sum += (ccnum % mod) / (mod/10);

        mod = mod * 100;

        printf("sum: %i \n", sum);

    }// for



    printf("%ld \n", ccnum);

    printf("%i  \n", nDigits);



}//main