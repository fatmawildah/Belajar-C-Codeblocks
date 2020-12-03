#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int banyak_data;
    printf("MASUKKAN BANYAK DATA YANG AKAN DI INPUT\t:\t");
    scanf("%d",&banyak_data);

    int nilai_uts_mahasiswa[banyak_data];
    int nilai_uas_mahasiswa[banyak_data];
    char nama_mahasiswa[banyak_data][50];
    int limit_data;
    int loop_input;
    int loop_output;
    int nilai_akhir;

    for(loop_input=0;loop_input<banyak_data;loop_input++)
    {
        printf("\nDATA KE-%d",(loop_input+1));
        printf("\tNAMA MAHASISWA\t:\t");
        fflush(stdin);
        gets(nama_mahasiswa[loop_input]);
        printf("\t\tNILAI UTS\t:\t");
        scanf("%d",&nilai_uts_mahasiswa[loop_input]);
        printf("\t\tNILAI UAS\t:\t");
        scanf("%d",&nilai_uas_mahasiswa[loop_input]);
    }
    printf("\n\t\t\t\t\tTRANSKRIP NILAI MAHASISWA");
    printf("\n===========================================================================================================");
    printf("\n\tNO\tNAMA MAHASISWA\t\tNILAI UTS\t\tNILAI UAS\t\tNILAI AKHIR \t  |");
    printf("\n===========================================================================================================");
    for(loop_output=0;loop_output<banyak_data;loop_output++)
    {
        nilai_akhir=(float)((nilai_uts_mahasiswa[loop_output]*0.4)+(nilai_uas_mahasiswa[loop_output]*0.6));
        printf("\n\t%d\t%s\t\t\t%d\t\t\t%d\t\t\t\t%d\t\t |",(loop_output+1),nama_mahasiswa[loop_output],nilai_uts_mahasiswa[loop_output],nilai_uas_mahasiswa[loop_output],nilai_akhir);
    }
    return 0;
}
