/// NAMA            :   IRHAN PRABASUKMA
/// NIM             :   A11.2016.09945
/// PROGRAM STUDI   :   TEKNIK INFORMATIKA
/// JUDUL           :   PROGRAM CONVERTER WAKTU KETERLAMABATAN MAHASISWA

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int in_hour=9;
    int in_minute=40;
    int jam_datang;
    int menit_datang;
    int convert;
    printf("\n\tJAM MASUK\t\t:\t%d.%d",in_hour,in_minute);
    printf("\n\tMAHASISWA DATANG\t:\t");
    scanf(" %d\.%d",&jam_datang,&menit_datang);
    convert=((jam_datang*3600)+menit_datang*60)-((in_hour*3600)+in_minute*60);
    printf("\tKETERLAMBATAN\t\t:\t%d s",convert);
    getch();
    return 0;
}
