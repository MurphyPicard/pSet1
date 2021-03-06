#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{

    printf("put in a cc number \n");

    long int ccnum;
    ccnum = get_long_long();

    //#include <math.h>
    int nDigits = floor(log10(ccnum)) + 1;

    int sum = 0;


    long int mod = 10; // mod starts at ten for this particular loop
    for (int i = 0; i < nDigits; i += 2)
    {

        sum += (ccnum % mod) / (mod / 10);
        mod = mod * 100;
    }

    // mod starts at 100 for this particular loop
    mod = 100;
    for (int j = 0; j < nDigits; j += 2)
    {

        switch ( (ccnum % mod) / (mod / 10) )
        {
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
                sum += ( (ccnum % mod) / (mod / 10) ) * 2;
        }//switch

        mod = mod * 100;

    }// for

    if ( sum % 10 == 0 && nDigits == 15 )
    {
        printf("AMEX\n");
    }
    else if ( sum % 10 == 0 && nDigits == 13 )
    {
        printf("VISA\n");
    }
    else if (sum % 10 == 0 && nDigits == 16 )
    {

        if (ccnum / 1000000000000000 == 4)
        {
            printf("VISA\n");
        }
        else if (ccnum / 1000000000000000 == 5)
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }

// although I passed all tests on check50, I did not expect to YET and believe there are more tests needed to be thorough
// that being said, I have other things to work on and will move on to them and be happy with the win!
}//main