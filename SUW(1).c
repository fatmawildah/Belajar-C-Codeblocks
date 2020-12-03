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
    int baris;
    int baris_limit;
    int kolom;
    int kolom_limit;
    printf("MASUKKAN BARIS:");
    scanf("%d",&baris_limit);
    printf("MASUKKAN KOLOM:");
    scanf("%d",&kolom_limit);

    for(baris=1;baris<=baris_limit;baris++)
    {
        printf("\n%d",baris);
        for(kolom=1;kolom<=kolom_limit;kolom++)
        {
            printf("%d",kolom);
        }
    }
    return 0;
}
