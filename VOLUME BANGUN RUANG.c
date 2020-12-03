///IRHAN PRABASUKMA
///PROGRAM KALKULATOR BANGUN RUANG
///TUGAS LAB
///A11.2016.09945
///KELOMPOK 4118
///12 OKTOBER 2016

#include <stdio.h>
#include <stdlib.h>

///USE SWITCH CASE

int main ()
{
    int pilih;
    int panjang;
    int lebar;
    int tinggi;
    int sisi;
    float jari;
    float jari2;
    float jari3;
    float tinggi2;
    float tinggi3;

    printf(">>>>>>>>>>>>>>MENGHITUNG VOLUME<<<<<<<<<<<<<");
    printf("\n1.KUBUS");
    printf("\n2.BALOK");
    printf("\n3.SILINDER");
    printf("\n4.KERUCUT");
    printf("\n5.BOLA");
    printf("\nPilihan\t");
    scanf("%d",&pilih);
    switch(pilih)
    {
        case 1:///KUBUS
            printf("Masukkan Sisi:\t");
            scanf("%d",&sisi);
            printf("Volume Kubus:\t%d*%d*%d",sisi,sisi,sisi);
            printf("\nHasil=%d",sisi*sisi*sisi);
            break;

       case 2:///BALOK
            printf("Masukkan Panjang:");
            scanf("%d",&panjang);
            printf("Masukkan Lebar:");
            scanf("%d",&lebar);
            printf("Masukkan Tinggi:");
            scanf("%d",&tinggi);
            printf("Volume Balok adalah=%d*%d*%d",panjang,lebar,tinggi);
            printf("\nHasil=%d",panjang*lebar*tinggi);
            break;
        case 3:///SILINDER
            printf("Masukkan Jari:");
            scanf("%f",&jari);
            printf("Masukkan Tinggi:");
            scanf("%f",&tinggi2);
            printf("\nVolume Tabung adalah 3.14*%.2f*%.2f*%.2f",jari,jari,tinggi2);
            printf("\nHasil=%.3f",3.14*jari*jari*tinggi2);
            break;
        case 4:///KERUCUT
            printf("Masukkan Jari:");
            scanf("%f",&jari2);
            printf("Masukkan Tinggi:");
            scanf("%f",&tinggi3);
            printf("\nVolume Kerucut adalah 1/3*3.14*%.3f*%.3f*%.3f",jari2,jari2,tinggi3);
            printf("\nHasil=%.3f",1.0/3.0*3.14*jari2*jari2*tinggi3);
            break;
        case 5:///BOLA
            printf("Masukkan Jari:");
            scanf("%f",&jari3);
            printf("\nVolume Bola 4/3*3.14*%.3f*%.3f*%.3f",jari3,jari3,jari3);
            printf("\nHasil=%f",4.0/3.0*3.14*jari3*jari3*jari3);
            break;
        default:
            printf("NAKAL BOLEH BEGO JANGAN!");
    }
    return 0;
}
