/// NAMA            :   IRHAN PRABASUKMA
/// NIM             :   A11.2016.09945
/// KELOMPOK        :   A11.4118
/// PROGRAM STUDI   :   TEKNIK INFORMATIKA
/// JUDUL           :   MENJELASKAN STRUKTUR MAHASIWA MENGGUNAKAN STRUCT ARRAY LOOPING MAHASIWA

# include <stdio.h>
# include <stdlib.h>

///kalau struct di atas int
typedef struct
{
  char nama[50];
  char nim[15];
  int daspro;
  int kalkulus;
  int fisika;
  float rata;
}Mahasiswa;

int main()
{
    char input;
    int banyak;
    int loop;

    float max=0;
    float nmax;
    int min;

    printf("\tBANYAK MAHASISWA\t:\t");
    scanf("%d",&banyak);

    Mahasiswa mhs[banyak];
    printf("\t\t\tDATA MAHASISWA\n");
    for(loop=0;loop<banyak;loop++)
    {
        menu :
        printf("\t\t\tDATA MAHASISWA %d\n",(loop+1));
            printf("\n\n\tNAMA\t\t:\t");
            fflush(stdin);
            gets(mhs[loop].nama);
            printf("\tNIM\t\t:\t");
            fflush(stdin);
            gets(mhs[loop].nim);
            printf("\tDASPRO\t\t:\t");
            scanf("%d",&mhs[loop].daspro);
            printf("\tKALKULUS\t:\t");
            scanf("%d",&mhs[loop].kalkulus);
            printf("\tFISIKA\t\t:\t");
            scanf("%d",&mhs[loop].fisika);
    }



        printf("\n===============================================================\n\n");
        for(loop=0;loop<banyak;loop++)
        {
            printf("\t\t\tCETAK DATA MAHASISWA %d\n\n",(loop+1));
            printf("\n\tNAMA\t\t:\t%s",mhs[loop].nama);
            printf("\n\tNIM\t\t:\t%s",mhs[loop].nim);
            printf("\n\tDASPRO\t\t:\t%d",mhs[loop].daspro);
            printf("\n\tKALKULUS\t:\t%d",mhs[loop].kalkulus);
            printf("\n\tFISIKA\t\t:\t%d",mhs[loop].fisika);
            mhs[loop].rata=(mhs[loop].rata+mhs[loop].daspro+mhs[loop].kalkulus+mhs[loop].fisika)/3;
            printf("\n\tRATA-RATA\t:\t%.2f",mhs[loop].rata);
            if(mhs[loop].rata>=85)
            {
                printf("\n\tNILAI HURUF\t:\tA");
            }
            else if(mhs[loop].rata>=70)
            {
                printf("\n\tNILAI HURUF\t:\tB");
            }
            else if(mhs[loop].rata>=60)
            {
                printf("\n\tNILAI HURUF\t:\tC");
            }
            else if(mhs[loop].rata>=50)
            {
                printf("\n\tNILAI HURUF\t:\tD");
            }
            else
            {
                printf("\n\tNILAI HURUF\t:\tE");
            }
        if(max<mhs[loop].rata)
        {
            printf("\n\tNILAI MAX %.2f",mhs[loop].rata);
        }
        //printf("\n\tNILAI MAX %.2f",mhs[loop].rata>=85);
        printf("\n\tMASUKKAN LAGI ? \(Y/N\)");
        scanf("%c",&input);
            if(input=='Y' && 'y')
            {
                goto menu;
            }
        }
    return 0;
}
