///NAMA             :   IRHAN PRABASUKMA
///NIM              :   A11.2016.09945
///KELOMPOK         :   4118
///ABSEN            :   32
///PROGRAM STUDI    :   TEKNIK INFORMATIKA
///PROGRAM          :   WARUNG SUTAR SPECIAL

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    int makanan;
    int jumlah_makanan;
    int minuman;
    int jumlah_minuman;
    int total_makanan=0;
    int total_minuman=0;
    int loop;

    input=1;
    while(input!=0)
    {

        printf("\n\t\t===\tWARUNG SUTAR SPECIAL\t===\n");
            printf("\n\n\t0.KELUAR");
            printf("\n\t1.MAKAN");
            printf("\n\t2.MINUM");
            printf("\n\t\tPILIHAN\t:");
            scanf("%d",&input);
            switch(input)
        {
            case 0 :
                printf("\t\tPROGRAM KELUAR....\n\n");
                getch();
                break;
            case 1  :
                makanan :
                printf("\n\tPILIH MAKANAN\t:\n");
                printf("\n\t1.RAMES\tRP.6000");
                printf("\n\t2.PECEL\tRP.5000");
                    printf("\n\t\tPILIH\t:");
                    scanf("%d",&makanan);
                        if(makanan==1)
                        {
                            printf("\n\tANDA MEMILIH RAMES");
                            printf("\n\tJUMLAH PESANAN\t:");
                            scanf("%d",&jumlah_makanan);
                            total_makanan=(6000*jumlah_makanan)+total_makanan;
                        }
                        else if(makanan==2)
                        {
                            printf("\n\tANDA MEMILIH PECEL");
                            printf("\n\tJUMLAH PESANAN\t:");
                            scanf("%d",&jumlah_makanan);
                            total_makanan=(5000*jumlah_makanan)+total_makanan;
                        }
                        else
                        {
                            printf("\n\tPILIHAN TIDAK ADA, SILAHKAN COBA LAGI");
                            goto makanan;
                        }
                                printf("\n\tJUMLAH BAYAR %d",total_makanan);
                                printf("\n\t\t\tTEKAN ENTER");
                                getch();
                                system("cls");
            break;
            case 2  :
                minuman :
                printf("\n\tPILIH MINUMAN\t:\n");
                printf("\n\t1.TEH MANIS\tRP.2000");
                printf("\n\t2.ES TEH\tRP.3000");
                    printf("\n\t\tPILIH\t:");
                    scanf("%d",&minuman);
                        if(minuman==1)
                        {
                            printf("\n\tANDA MEMILIH TEH MANIS");
                            printf("\n\tJUMLAH PESANAN\t:");
                            scanf("%d",&jumlah_minuman);
                            total_minuman=(2000*jumlah_minuman)+total_minuman;
                        }
                        else if(minuman==2)
                        {
                            printf("\n\tANDA MEMILIH ES TEH");
                            printf("\n\tJUMLAH PESANAN\t:");
                            scanf("%d",&jumlah_minuman);
                            total_minuman=(3000*jumlah_minuman)+total_minuman;
                        }
                        else
                        {
                            printf("\n\tPILIHAN TIDAK ADA, SILAHKAN COBA LAGI");
                            goto minuman;
                        }
                                printf("\n\tJUMLAH BAYAR %d",total_minuman);
                                printf("\n\t\t\tTEKAN ENTER");
                                getch();
                                system("cls");

            break;
            default :
                printf("\t\tPILIHAN TIDAK TERSEDIA , SILAHKAB ULANG KEMBALI");
                printf("\n\t\t\tTEKAN ENTER");
                                getch();
                                system("cls");
            break;

        }
        printf("\n\n\t\tTOTAL BAYAR\t:%d",(total_makanan+total_minuman));
    }

    return 0;
}
