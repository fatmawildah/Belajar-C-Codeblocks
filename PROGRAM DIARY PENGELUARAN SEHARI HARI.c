# include <stdio.h>
# include <stdlib.h>

int main()
{
    int transaksi_hari;
    int transaksi_input;
    int transaksi;
    int loop_transaksi_hari;
    int loop_transaksi;
    int total_transaksi=0;
    int input;

    input=1;
    while(input!=0)
    {
        printf("\t\t\t\t\t\"MONEY LOVERZ\"");
        printf("\n\t\t\tSELAMAT DATANG DI APLIKASI COUNTER TRANSAKSI HARIAN");
        printf("\n\t\t\t\t1.TRANSAKSI");
        printf("\t\t2.KELUAR");
        printf("\n\n\t\t\t\tSILAHKAN MASUKKAN PILIHAN\t:");
        scanf("%d",&input);
        switch(input)
        {
            case 1:
                printf("\t\t\tSELAMAT BERTRANSAKSI");
                printf("\n\t\tANDA AKAN MENGINPUT PENGELUARAN BERAPA HARI ?");
                scanf("%d",&transaksi_hari);
                        for(loop_transaksi_hari=1;loop_transaksi_hari<=transaksi_hari;loop_transaksi_hari++)
                        {
                            printf("\n\t\t\tHARI KE %d BERAPA KALI TRANSAKSI\t:",loop_transaksi_hari);
                            scanf("%d",&transaksi_input);
                            for(loop_transaksi=1;loop_transaksi<=transaksi_input;loop_transaksi++)
                            {
                                printf("\n\t\t\tTRANSAKSI KE %d\t:",loop_transaksi);
                                scanf("%d",&transaksi);
                                total_transaksi=total_transaksi+transaksi;
                            }
                        }
                total_transaksi=total_transaksi+transaksi;
                printf("\n\n\t\t\tTOTAL PENGELUARAN ANDA %d",total_transaksi);
                printf("\n\t\t\t\tTEKAN SEMBARANG");
                getch();
                system("cls");
            break;
            case 2:
                printf("\t\t\t==RESI PEMBAYARAN==\n\n");
                if(total_transaksi>30000)
                {
                    printf("\n\t\t\tTOTAL TRANSAKSI ANDA %d , TOLONG LEBIH HEMAT KASIAN ORANG TUA !",total_transaksi);
                    break;
                }
                else
                {
                    printf("\n\t\t\tTOTAL TRANSAKSI ANDA %d , TERIMAKASIH ANDA SUDAH HEMAT",total_transaksi);
                    break;
                }
            getch();
            break;
        }
    }
    return 0;
}
