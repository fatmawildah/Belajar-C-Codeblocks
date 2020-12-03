///IRHAN PRABASUKMA
///A11.2016.09945
///SOAL PDP03-02
///ANALISA KASUS 01
///PROGRAM NOTA CAT
///12 OKTOBER 2016

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    ///KAMUS
    ///INPUT
    char nama[30];
    int panjang_tembok;
    int lebar_tembok;
    int tanggal;
    int bulan;
    int tahun;
    int harga;
    int cat;
    ///ALGORITMA
    puts("================INPUT PEMBELIAN================");
    printf("NAMA PEMBELI\t\t:");
    gets(nama);
    printf("PANJANG TEMBOK (M) \t:");
    scanf("%d",&panjang_tembok);
    printf("LEBAR TEMBOK (M)   \t:");
    scanf("%d",&lebar_tembok);
    printf("TANGGAL PEMBELIAN\t:");
    scanf("%d %d %d",&tanggal,&bulan,&tahun);
    puts("\n\n\n================NOTA PEMBAYARAN================");
    printf("NAMA PEMBELI\t:%s\n",nama);
    printf("TANGGAL PEMBELIAN\t:%d %d %d",tanggal,bulan,tahun);
    cat=panjang_tembok*lebar_tembok/10;
    printf("\nJUMLAH KALENG CAT\t:%d\n",cat);
    if (cat)
    harga=25000*cat;
    printf("TOTAL PEMBAYARAN\t:%d\n\n\n",harga);

    return 0;
}
