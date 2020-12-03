#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\t\tDATA MAHASISWA");
    char nama[40];
    strcpy(nama,"IRHAN PRABASUKMA");
    char nim[50];
    strcpy(nim,"A11.2016.09945");
    printf("\n\n\tNAMA\t\t:\t%s",nama);
    printf("\n\n\tNIM\t\t:\t%s",nim);
    char asal_sekolah[50];
    int tanggal;
    int bulan;
    int tahun;
    char prodi[70];
    char alamat[100];
    float ips;
    int semester;
    printf("\n\n\tASAL SEKOLAH\t:\t");
    gets(asal_sekolah);
    fflush(stdin);
    printf("\n\tTANGGAL LAHIR\t:\t");
    scanf("%s%d%d",&tanggal,&bulan,&tahun);
    fflush(stdin);
    printf("\n\tPRODI\t\t:\t");
    gets(prodi);
    printf("\n\tALAMAT\t\t:\t");
    gets(alamat);
    fflush(stdin);
    printf("\n\tIPS\t\t:\t");
    scanf("%f",&ips);
    printf("\n\tSEMESTER\t\t:\t");
    scanf("%d",&semester);
    return 0;
}
