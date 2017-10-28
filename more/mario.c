#include <stdio.h>
#include <cs50.h>


int main (void){

    int height;

    do
    {
        printf("pick 0 - 23 to see Mario's pyramid, then press enter: ");
        height = get_int();

    }
    while(height < 0 || height > 23);

    for(int h = 0; h < height; h++){

        for(int s = 0; s < height - ( h + 1) ;s++){
            printf(" ");
        }

        for(int i = 0; i < 1 + h; i++){
            printf("#");
        }

        printf("  ");

        for(int i = 0; i < 1 + h; i++){
            printf("#");
        }

        printf("\n");
    }//for h

}//main