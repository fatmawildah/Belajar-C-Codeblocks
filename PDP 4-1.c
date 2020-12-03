/// NAMA            :   IRHAN PRABASUKMA
/// NIM             :   A11.2016.09945
/// PROGRAM STUDI   :   TEKNIK INFORMATIKA
/// JUDUL           :   PAINT SHOP MENGGUNAKAN IF
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nama[50];
    int tanggal;
    char bulan[10];
    int tahun;
    float luas;
    int jumlah_kaleng;
    int harga;
    printf("\t\t\t\tHADI JAYA PAINT SHOP");
    printf("\n\n\tNAMA\t\t\t:\t");
    gets(nama);
    fflush(stdin);
    printf("\tTANGGAL PEMBELIAN\t:\t");
    scanf("%d %s %d",&tanggal,&bulan,&tahun);
    printf("\tLUAS DINDING\t\t:\t");
    scanf("%f",&luas);
    printf("========================================================================");
    ///tiap 10m^2 @25000
    printf("\n\t\t\t\tNOTA PEMBAYARAN");
    printf("\n========================================================================");
    printf("\n\tNAMA\t\t\t:\t%s",nama);
    printf("\n\tTANGGAL PEMBELIAN\t:\t%d %s %d",tanggal,bulan,tahun);
    jumlah_kaleng=luas/10;
    printf("\n\tTOTAL KALENG CAT\t:\t%d",jumlah_kaleng);
    if(jumlah_kaleng>0 && jumlah_kaleng<11)
    {
        harga=jumlah_kaleng*25000;
        printf("\n\tHARGA\t\t\t:\t%d",harga);
    }
    else if(jumlah_kaleng>10 && jumlah_kaleng<26)
    {
        harga=jumlah_kaleng*24500;
        printf("\n\tHARGA\t\t\t:\t%d",harga);
    }
    else if(jumlah_kaleng>25 && jumlah_kaleng<51)
    {
        harga=jumlah_kaleng*23000;
        printf("\n\tHARGA\t\t\t:\t%d",harga);
    }
    else if(jumlah_kaleng>50)
    {
        harga=jumlah_kaleng*22000;
        printf("\n\tHARGA\t\t\t:\t%d",harga);
    }
    else
    {
        printf("\n\tSILAHKAN INPUT ULANG");
    }
    getch();
    return 0;
}
