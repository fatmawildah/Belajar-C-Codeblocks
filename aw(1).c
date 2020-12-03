///IRHAN PRABASUKMA
///A11.2016.09945
///SOAL 1
///4118
///PROGRAM NESTED WHILE
///23 NOVEMBER 2016

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int in;
    int in_limit;
    int out;
    int out_limit;

    printf("OUT LIMIT:");
    scanf("%d",&out_limit);
    printf("IN LIMIT:");
    scanf("%d",&in_limit);
    out=1;
    while(out<=out_limit)
    {
        printf("%d.LAPER\n",out);
        out++;
        in=1;
        while(in<=in_limit)
        {
            printf("\t%d.NASI GORENG\n",in);
            in++;
        }
    }
    return 0;
}
