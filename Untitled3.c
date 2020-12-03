///IRHAN PRABASUKMA
///A11.2016.09945
///PROGRAM 3
///26 OKTOBER 2016
///32
///TEKNIK INFORMATIKA
///KELOMPOK 4118

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    ///kamus
    int dd;
    int mm;
    int yy;
    ///algoritma
    printf("DATE\t\t:\t");
    scanf("%d %d %d",&dd,&mm,&yy);
    if(dd>=1 && dd<=31 && mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12)
    {
        printf("\nVALID");
        if(yy&4==0)
        {
            printf
        }
    }
    else if(dd<=29 && mm==2)
    {
        printf("\nVALID");
    }
    else if(dd<=30 && mm==1 && mm==4 && mm==6 && mm==9 && mm==11)
    {
        printf("\nVALID");
    }
    else
    {
        printf("\nERROR");
    }

    return 0;
}
