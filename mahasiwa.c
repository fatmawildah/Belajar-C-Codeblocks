/// NAMA            :   IRHAN PRABASUKMA
/// NIM             :   A11.2016.09945
/// KELOMPOK        :   A11.4118
/// PROGRAM STUDI   :   TEKNIK INFORMATIKA
/// JUDUL           :   MENJELASKAN STRUKTUR MAHASIWA MENGGUNAKAN STRUCT MAHASIWA

# include <stdio.h>
# include <stdlib.h>

///kalau struct di atas int
typedef struct
{
  char nama[50];
  char nim[15];
  int uts;
  int uas;
  int tugas;
}Mahasiswa;

int main()
{
    Mahasiswa mhs;
    printf("\t\t\tDATA MAHASISWA");
    printf("\n\n\tNAMA\t:\t");
    gets(mhs.nama);
    printf("\tNIM\t:\t");
    gets(mhs.nim);
    printf("\tUTS\t:\t");
    scanf("%d",&mhs.uts);
    printf("\tUAS\t:\t");
    scanf("%d",&mhs.uas);
    printf("\tTUGAS\t:\t");
    scanf("%d",&mhs.tugas);

        printf("\n===============================================================\n\n");
        printf("\t\t\tCETAK DATA MAHASISWA\n\n");
        printf("\n\tNAMA\t:\t%s",mhs.nama);
        printf("\n\tNIM\t:\t%s",mhs.nim);
        printf("\n\tUTS\t:\t%d",mhs.uts);
        printf("\n\tUAS\t:\t%d",mhs.uas);
        printf("\n\tTUGAS\t:\t%d",mhs.tugas);

        getch();
    return 0;
}
