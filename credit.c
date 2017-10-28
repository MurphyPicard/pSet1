#include <stdio.h>
#include <cs50.h>
#include <math.h>


int main (void){

    printf("put in a cc number \n");

    long int ccnum;
    ccnum = get_long_long();


    int nDigits = floor(log10(ccnum)) + 1;

    int sum = 0;


    long int mod = 10; // mod starts at ten for this particular loop
    for(int i = 0; i < nDigits; i += 2){

        sum += (ccnum % mod) / (mod/10);

        mod = mod * 100;

        printf("sum: %i \n", sum);
    }

    mod = 100; // mod starts at 100 for this particular loop
    for(int j = 0; j < nDigits; j += 2){

        switch(     (ccnum % mod) / (mod/10)    ) {

            case 9 :
                sum += 9;
                break;

            case 8 :
                sum += 7;
                break;

            case 7 :
                sum += 5;
                break;

            case 6 :
                sum += 3;
                break;
            case 5 :
                sum += 1;
                break;

            default :
                sum += ( (ccnum % mod) / (mod/10) ) * 2;
        }//switch

        //sum += (ccnum % mod) / (mod/10);

        mod = mod * 100;

        printf("sum: %i \n", sum);

    }// for

    printf("%ld \n", ccnum);

    printf("%i  \n", nDigits);



    if( sum % 10 == 0 && nDigits == 15 ){
        printf("AMEX\n");
    }
    else if( sum % 10 == 0 && nDigits == 13 ){
        printf("VISA\n");
    }
    else if(sum % 10 == 0 && nDigits == 16 ){
                printf("VISA or MC\n");

    }
    else{
        printf("INVALID\n");
    }





}//main