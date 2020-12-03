/// NAMA            :   IRHAN PRABASUKMA
/// NIM             :   A11.2016.09945
/// PROGRAM STUDI   :   TEKNIK INFORMATIKA
/// JUDUL           :   MENGHITUNG VOLUME CAMPURAN ANTARA TABUNG DAN SETENGAH LINGKARAN

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Volume = luas alas x tinggi, atau luas lingkaran x t
    //V = 4/3 x π x r³
    float phi=3.14;
    float diameter_lingkaran=4;
    float tinggi=10;
    float luas_lingkaran;
    float tabung;
    float diameter_bola=4;
    float setengah_bola;
    float volume_kelereng;
    float total_gabungan;
    float selisih;
    luas_lingkaran=phi*diameter_lingkaran;
    tabung=luas_lingkaran*tinggi;
    setengah_bola=(1/2)*(4/3)*phi*diameter_bola;
    printf("\n\n\tMASUKKAN VOLUME KELERENG\t:\t");
    scanf("%f",&volume_kelereng);
    selisih=(tabung+setengah_bola)-volume_kelereng;
    printf("\tAIR YANG TUMPAH\t:\t%.2f",selisih);
    getch();
    return 0;
}
