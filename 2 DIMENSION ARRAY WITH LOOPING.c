# include <stdio.h>
# include <stdlib.h>

int main()
{
    int baris;
    int kolom;
    int loop1;
    int loop2;
        printf("\n\tBARIS\t:\t");
        scanf("%d",&baris);
            printf("\n\tKOLOM\t:\t");
            scanf("%d",&kolom);

    int arrayi[baris][kolom];
    int hasil=0;
    int tot=0;
        ///INPUT ARRAY
    for(loop1=0;loop1<baris;loop1++)
    {
        for(loop2=0;loop2<kolom;loop2++)
        {
            printf("\n\tNILAI[%d][%d]\t:",loop1,loop2);
            scanf("%d",&arrayi[loop1][loop2]);
        }
    }
    puts("=======================================================");
    ///Menampilkan nilai array
            for(loop1=0;loop1<baris;loop1++)
                {
                    for(loop2=0;loop2<kolom;loop2++)
                    {
                        printf("\t%d\t",arrayi[loop1][loop2]);
                    }
                    printf("\n");
                }
    puts("========================================================");
    ///PENJUMLAHAN
                for(loop1=0;loop1<baris;loop1++)
                {
                    for(loop2=0;loop2<kolom;loop2++)
                    {
                        hasil=hasil+arrayi[loop1][loop2];
                        tot=tot+arrayi[loop1][loop2];
                    }
                    printf("\n\tHASIL BARIS %d\t:\t%d",loop1+1,hasil);

                    hasil=0;
                }
    /*puts("\n========================================================");
                        for(loop1=0;loop1<baris;loop1++)
                        {
                            for(loop2=0;loop2<kolom;loop2++)
                            {
                                hasil=hasil+arrayi[loop1][loop2];
                            }
                        }
    printf("\tHASIL\t:\t%d",hasil);*/
    printf("\n\tHASIL TOTAL\t:\t%d",tot);

    return 0;
}
