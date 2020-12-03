///IRHAN PRABASUKMA
///PROGRAM SELEKSI KERJA
///A11.2016.09945
///KELOMPOK 4118
///19 OKTOBER 2016
///19.04

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char pilihan;
    int height;
    int weight;
    int old;

    printf("\nA.PEREMPUAN");
    printf("\nB.LAKI-LAKI\n\n");
    printf("\nMasukkan Pilihan\t:\t");
    scanf("%c",&pilihan);

    switch(pilihan)
    {
        case 'A'  :
        case 'a':
            printf("PEREMPUAN\n");
            printf("Masukkan Tinggi Badan\t:\t");
            scanf("%d",&height);
            printf("Masukkan Umur\t\t:\t");
            scanf("%d",&old);

            if (height>=160 && old>=20)
            {
                printf("\t\t\t\tCongratulation you're accepted");
            }
            else
            {
                printf("\t\t\t\tSorry you're not accepted");
            }
            break;
        case 'B'  :
        case 'b':
            printf("LAKI-LAKI\n");
            printf("Masukkan Tinggi Badan\t:\t");
            scanf("%d",&height);
            printf("Masukkan Umur\t\t:\t");
            scanf("%d",&old);

            if (height>=165 && old>=21)
            {
                printf("\t\t\t\tCongratulation you're accepted");
            }
            else
            {
                printf("\t\t\t\tSorry you're not accepted");
            }
            break;
        default :
            printf("YOU STUPID!");
    }
    return 0;
}
