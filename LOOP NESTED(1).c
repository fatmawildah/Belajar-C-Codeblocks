#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int star_out;
    int star_in;
    int input;
    printf("input:");
    scanf("%d",&input);


    for(star_out=1;star_out<=5;star_out++)
    {
        for(star_in=1;star_in<=input;star_in++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
