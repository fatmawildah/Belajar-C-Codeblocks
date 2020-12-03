///IRHAN PRABASUKMA
///A11.2016.09945
///SOAL PDP4-03
///ANALISA KASUS 3
///PROGRAM APLIKASI KASIR
///19 OKTOBER 2016

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    ///KAMUS
    int choose;
    int jum;
    int tot;
    int menu;
    char nama[30];
    int pay;
    int change;
    int dd;
    char mm[30];
    int yy;
    ///ALGORITMA
        puts("\t\t\t\t\tDINUSIAN'S CAFE");
        ///HEADER
    printf("\n\n>\tMenu");
    printf("\t\t\t\tPrice");
    printf("\n\n1.\tICE TEA");
    printf("\t\t\t\t@6000");
    printf("\n2.\tCARAMEL MACHIATO");
    printf("\t\t@30000");
    printf("\n3.\tGREEN TEA LATTE");
    printf("\t\t\t@25000");
    printf("\n4.\tMILKSHAKE");
    printf("\t\t\t@15000");
    printf("\n5.\tCHOCOLATE HAZELNUT");
    printf("\t\t@25000");
        ///BODY
        printf("\n\n\t========================================INPUT========================================");
        printf("\n\n\t\t>Name\t\t\t:\t");
        gets(nama);
        printf("\t\t>Date\t\t\t:\t");
        scanf("%d%s%d",&dd,&mm,&yy);
        printf("\t\t>Choose Menu\t\t:\t");
        scanf("%d",&choose);
        printf("\t\t>Jumlah Pesanan\t\t:\t");
        scanf("%d",&jum);
        printf("\n\n\t========================================NOTA========================================");
        printf("\n\n\t\t>NAME\t\t\t:\t%s",nama);
        printf("\n\t\t>PESANAN\t\t:\t");
    switch(choose)
    {
        case 1: printf("ICE TEA");
                printf("\n\t\t>HARGA\t\t\t:\t");
                printf("@6000,00");
                ///("\n\t>Jumlah Pesanan\t\t:\t");
                ///scanf("%d",&jum);
                ///printf(">Jumlah Pesanan\t\t:\t%d",jum);
                tot=jum*6000;
                printf("\n\t\t>Total\t\t\t:\t%d",tot);
                printf("\n\t\t>Bayar\t\t\t:\t");
                scanf("%d",&pay);
                ///printf("Bayar\t\t:\t%d",pay);
                change=pay-tot;
                printf("\t\t>Kembalian\t\t:\t%d\n\n",change);
                break;///kalau gada break pasti lanjut ke garis bawah
        case 2:printf("CARAMEL MACHIATO");
                printf("\n\t\t>HARGA\t\t\t:\t");
                printf("@30000,00");
                ///("\n\t>Jumlah Pesanan\t\t:\t");
                ///scanf("%d",&jum);
                ///printf(">Jumlah Pesanan\t\t:\t%d",jum);
                tot=jum*30000;
                printf("\n\t\t>Total\t\t\t:\t%d",tot);
                printf("\n\t\t>Bayar\t\t\t:\t");
                scanf("%d",&pay);
                ///printf("Bayar\t\t:\t%d",pay);
                change=pay-tot;
                printf("\t\t>Kembalian\t\t:\t%d\n\n",change);
                break;
        case 3:printf("GREEN TEA LATTE");
                printf("\n\t\t>HARGA\t\t\t:\t");
                printf("@25000,00");
                ///("\n\t>Jumlah Pesanan\t\t:\t");
                ///scanf("%d",&jum);
                ///printf(">Jumlah Pesanan\t\t:\t%d",jum);
                tot=jum*25000;
                printf("\n\t\t>Total\t\t\t:\t%d",tot);
                printf("\n\t\t>Bayar\t\t\t:\t");
                scanf("%d",&pay);
                ///printf("Bayar\t\t:\t%d",pay);
                change=pay-tot;
                printf("\t\t>Kembalian\t\t:\t%d\n\n",change);
                break;
        case 4:printf("MILKSHAKE");
                printf("\n\t\t>HARGA\t\t\t:\t");
                printf("@15000,00");
                ///("\n\t>Jumlah Pesanan\t\t:\t");
                ///scanf("%d",&jum);
                ///printf(">Jumlah Pesanan\t\t:\t%d",jum);
                tot=jum*15000;
                printf("\n\t\t>Total\t\t\t:\t%d",tot);
                printf("\n\t\t>Bayar\t\t\t:\t");
                scanf("%d",&pay);
                ///printf("Bayar\t\t:\t%d",pay);
                change=pay-tot;
                printf("\t\t>Kembalian\t\t:\t%d\n\n",change);
                break;
        case 5:printf("CHOCOLATE HAZELNUT");
                printf("\n\t\t>HARGA\t\t\t:\t");
                printf("@25000,00");
                ///("\n\t>Jumlah Pesanan\t\t:\t");
                ///scanf("%d",&jum);
                ///printf(">Jumlah Pesanan\t\t:\t%d",jum);
                tot=jum*25000;
                printf("\n\t\t>Total\t\t\t:\t%d",tot);
                printf("\n\t\t>Bayar\t\t\t:\t");
                scanf("%d",&pay);
                ///printf("Bayar\t\t:\t%d",pay);
                change=pay-tot;
                printf("\t\t>Kembalian\t\t:\t%d\n\n",change);
                break;
        default:printf("\nNGGA ADA MAS\n");
                break;
    }
    ///printf("PESANAN:%d")
    return 0;
}
