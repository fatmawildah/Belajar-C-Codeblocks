///IRHAN PRABASUKMA
///A11.2016.09945
///SOAL PDP4-01
///ANALISA KASUS 1
///PROGRAM NOTA PEMBELIAN CAT
///19 OKTOBER 2016

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    ///KAMUS
    char nama[40];
    int tanggal;
    char bulan[50];
    int tahun;
    float cat;
    float harga;
    int panjangtbk;
    int lebartbk;
    ///ALGORITMA
    puts("==============================INPUT==============================");
    printf(">MASUKKAN NAMA PEMBELI\t\t:\t");
    gets(nama);
    printf(">MASUKKAN PANJANG TEMBOK\t:\t");
    scanf("%d",&panjangtbk);
    printf(">MASUKKAN LEBAR TEMBOK\t\t:\t");
    scanf("%d",&lebartbk);
    printf(">MASUKKAN TANGGAL PEMBELIAN\t:\t");
    scanf("%d%s%d",&tanggal,&bulan,&tahun);
    puts("==============================NOTA==============================");
    printf("NAMA PEMBELI\t\t\t:\t%s",nama);
    printf("\nTANGGAL PEMBELIAN\t\t:\t%d-%s-%d",tanggal,bulan,tahun);
    printf("\nPANJANG TEMBOK\t\t\t:\t%d",panjangtbk);
    printf("\nLEBAR TEMBOK\t\t\t:\t%d",lebartbk);
    cat=(float)(panjangtbk*lebartbk)/10;
    printf("\nJUMLAH KALENG CAT\t\t:\t%.1f\n",cat);
    if (cat<=10)
    {
        harga=cat*25000;
        printf("HARGA\t:\t%.1f",harga);
    }
    else if(cat>=11 && cat<=25)
    {
        harga=cat*24500;
        printf("HARGA\t:\t%.1f",harga);
    }
    else if (cat>=26 && cat<=50)
    {
        harga=cat*23000;
        printf("HARGA\t:\t%.1f",harga);
    }
    else
    {
        harga=cat*22000;
        printf("HARGA\t:\t%.1f",harga);
    }
    ///cat=panjang_tembok*lebar_tembok/10;
    return 0;
}
