///IRHAN PRABASUKMA
///A11.2016.09945
///SOAL PDP06-01
///NUMERAL SELECTION PROGRAM
///16 NOVEMBER 2016

#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///KAMUS
    int num;
    ///ALGORITMA
    printf("\n\n\t\tINPUT YOUR NUMBER\t:\t");
    scanf("%d",&num);
    if(num>=1 && num<=9)
    {
        printf("\t\tYOU'RE NUMBER IS UNIT TYPE\n");
    }
    else if(num>=10 && num<=99)
    {
        printf("\t\tYOU'RE NUMBER IS TENS TYPE\n");
    }
    else if(num>=100 && num<=999)
    {
        printf("\t\tYOU'RE NUMBER IS HUNDREDS TYPE\n");
    }
    else if(num>=1000 && num<=999999)
    {
        printf("\t\tYOU'RE NUMBER IS THOUSAND TYPE\n");
    }
    else if(num>=1000000 && num<=999999999)
    {
        printf("\t\tYOU'RE NUMBER IS MILLION TYPE\n");
    }
    else
    {
        printf("\t\tERROR\n");
    }
    return 0;
}
