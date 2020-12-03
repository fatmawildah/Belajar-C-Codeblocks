///IRHAN PRABASUKMA
///PROGRAM SWITCH
///A11.2016.09945
///KELOMPOK 4118
///12 OKTOBER 2016

#include <stdio.h>
#include <stdlib.h>

///switch case
int main ()
{
    int angka;
    printf("1.Warna Merah");
    printf("\n2.Warna Kuning");
    printf("\n3.Warna Hijau");
    printf("\nmasukka pilihan:\t");
    scanf("%d",&angka);
    switch(angka)
    {
        case 1: printf("Anda Memilih Warna Merah");
                break;///kalau gada break pasti lanjut ke garis bawah
        case 2:printf("Kuning");
                break;
        case 3:printf("Ijo royo royo");
                break;

        default:printf("warna warni tjoy");
                break;
    }
    return 0;
}
