/// NAMA            :   IRHAN PRABASUKMA
/// NIM             :   A11.2016.09945
/// PROGRAM STUDI   :   TEKNIK INFORMATIKA
/// JUDUL           :   PROGRAM LATIHAN MENGINPUT DAN MENGOUTPUT DATA

# include <stdio.h>
# include <stdlib.h>

int main()
{
    int tinggi;
    int alas;
    int sisi;
    float luas;
    int keliling;

    printf("\n\tTINGGI\t:\t");
    scanf("%d",&tinggi);
        printf("\n\tALAS\t:\t");
        scanf("%d",&alas);
            printf("\n\tSISI\t:\t");
            scanf("%d",&sisi);
        luas=(float)(0.5*alas*tinggi);
        keliling=3*sisi;
            printf("\n\tLUAS\t\t:\t%.2f",luas);
            printf("\n\tKELILING\t:\t%d",keliling);
    return 0;
}
