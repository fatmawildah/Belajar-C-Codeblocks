# include <stdio.h>
# include <stdlib.h>

int main()
{
    int loop_in;
    int loop_out;

    int loop_in2;
    int loop_out2;

    int baris;
    int kolom;
    printf("masukkan baris\t:\t");
    scanf("%d",&baris);
    printf("masukkan kolom\t:\t");
    scanf("%d",&kolom);
    int arrai[baris][kolom];
    int arrai2[baris][kolom];
    int hasil=0;
    int ngurang=0;
    int tot=0;

    //input data

    for(loop_out=0;loop_out<baris;loop_out++)
    {
        for(loop_in=0;loop_in<kolom;loop_in++)
        {
            printf("BARIS DATA KE [%d], KOLOM KE [%d]\t:\t",loop_out,loop_in);
            scanf("%d",&arrai[loop_in][loop_out]);
        }
        printf("\n");
    }
            for(loop_out2=0;loop_out2<baris;loop_out2++)
            {
                for(loop_in2=0;loop_in2<kolom;loop_in2++)
                {
                    printf("BARIS DATA KE [%d], KOLOM KE [%d]\t:\t",loop_out2,loop_in2);
                    scanf("%d",&arrai2[loop_in2][loop_out2]);
                }
                printf("\n");
            }

    //output data

     for(loop_out=0;loop_out<baris;loop_out++)
    {
        for(loop_in=0;loop_in<kolom;loop_in++)
        {
            printf("%d\t",arrai[loop_in][loop_out]);
        }
        printf("\n");
    }
        for(loop_out2=0;loop_out2<baris;loop_out2++)
        {
            for(loop_in2=0;loop_in2<kolom;loop_in2++)
            {
                printf("%d\t",arrai2[loop_in2][loop_out2]);
            }
            printf("\n");
        }

    //penjumlahan

                for(loop_out=0;loop_out<baris;loop_out++)
                {
                    for(loop_in=0;loop_in<kolom;loop_in++)
                    {
                        hasil=hasil+arrai[loop_in][loop_out];
                        //tot=tot+arrayi[loop1][loop2];
                    }
                    printf("\n\tHASIL BARIS [%d] MATRIKS 1\t:\t%d",loop_out+1,hasil);

                    hasil=0;
                }
                printf("\n");
                                for(loop_out2=0;loop_out2<baris;loop_out2++)
                                {
                                    for(loop_in2=0;loop_in2<kolom;loop_in2++)
                                    {
                                        hasil=hasil+arrai2[loop_in2][loop_out2];
                                        tot=tot+arrai2[loop_in][loop_out];
                                    }
                                    printf("\n\tHASIL BARIS [%d] MATRIKS 2\t:\t%d",loop_out+1,hasil);

                                    hasil=0;
                                }
                                printf("\n\tHASIL TOTAL\t:\t%d",tot);
//ngurang

                for(loop_out=0;loop_out<baris;loop_out++)
                {
                    for(loop_in=0;loop_in<kolom;loop_in++)
                    {
                        ngurang=arrai[loop_in][loop_out]-ngurang;
                        //tot=tot+arrayi[loop1][loop2];
                    }
                    printf("\n\tHASIL BARIS [%d] MATRIKS 1\t:\t%d",loop_out+1,hasil);

                    hasil=0;
                }
                printf("\n");
                                for(loop_out2=0;loop_out2<baris;loop_out2++)
                                {
                                    for(loop_in2=0;loop_in2<kolom;loop_in2++)
                                    {
                                        ngurang=ngurang-arrai2[loop_in2][loop_out2];
                                        //tot=tot+arrayi[loop1][loop2];
                                    }
                                    printf("\n\tHASIL BARIS [%d] MATRIKS 2\t:\t%d",loop_out+1,hasil);

                                    hasil=0;
                                }


    return 0;
}
