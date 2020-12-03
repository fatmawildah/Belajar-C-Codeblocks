/// NAMA            :   IRHAN PRABASUKMA
/// NIM             :   A11.2016.09945
/// PROGRAM STUDI   :   TEKNIK INFORMATIKA
/// JUDUL           :   PROGRAM FIXING CONVERTER SUHU

#include <stdio.h>
#include <stdlib.h>
int main()
{
/* kamus */
    int Celcius;
    int CeltoFah;
    int CeltoKel;
    int CeltoRea;
    printf("Masukkan Jumlah Celcius\t: ");
    scanf("%d",&Celcius);
    //Program
    CeltoFah=(1.8) * Celcius + 32;
    CeltoKel=Celcius+273;
    CeltoRea=(0.8)* Celcius;
    printf("Dalam Skala Celcius menunjukkan %d \n ",Celcius);
    printf("Bila dikonversi menjadi Fahrenheit menjadi\t: %d\n",CeltoFah);
    printf("Bila dikonversi menjadi Reamur menjadi\t: %d\n",CeltoRea);
    printf("Bila dikonversi menjadi Kelvin menjadi\t: %d\n",CeltoKel);
    return 0;
}
