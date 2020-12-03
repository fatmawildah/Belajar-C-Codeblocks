/// NAMA            :   IRHAN PRABASUKMA
/// NIM             :   A11.2016.09945
/// PROGRAM STUDI   :   TEKNIK INFORMATIKA
/// JUDUL           :   PAINT SHOP
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nama[50];
    int tanggal;
    char bulan[10];
    int tahun;
    int jumlah_bayar;
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
    harga=jumlah_kaleng*25000;
    printf("\n\tHARGA\t\t\t:\tRP.%d",harga);
    getch();
    return 0;
}
