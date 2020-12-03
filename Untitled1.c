///IRHAN PRABASUKMA
///A11.2016.09945
///PROGRAM MINI SIADIN
///26 OKTOBER 2016
///32
///TEKNIK INFORMATIKA
///KELOMPOK 4118

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    ///kamus
    char nama[50];
    char nim[20];
    strcpy(nim,"A11.2016.09945");
    float tugas;
    float uas;
    float uts;
    float na;
    ///na=0.3*tugas+0.4*uas+0.3*uts
    ///algoritma
    ///input
    printf("\n\n\tNAMA\t\t:\t");
    gets(nama);
    fflush(stdin);
    printf("\tNILAI UTS\t:\t");
    scanf("%f",&uts);
    printf("\tNILAI UAS\t:\t");
    scanf("%f",&uas);
    printf("\tNILAI TUGAS\t:\t");
    scanf("%f",&tugas);
    ///putput
    printf("\t\t=============================");
    printf("\n\tNAMA\t\t:\t%s",nama);
    printf("\n\tNIM\t\t:\t%s",nim);
    printf("\n\tNILAI UTS\t:\t%.1f",uts);
    printf("\n\tNILAI UAS\t:\t%.1f",uas);
    printf("\n\tNILAI TUGAS\t:\t%.1f",tugas);
    na=(0.3*tugas)+(0.4*uas)+(0.3*uts);
    printf("\n\tNILAI AKHIR\t:\t%.1f\n\n",na);

    return 0;
}
