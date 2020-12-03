///NAMA             :   IRHAN PRABASUKMA
///NIM              :   A11.2016.09945
///KELOMPOK         :   4118
///PROGRAM STUDI    :   TEKNIK INFORMATIKA
///PROGRAM          :   MENAMPILKAN ANGKA 1-10 BERDASARKAN INPUTAN DARI ARRAY SECARA TERURUT DAN TERINTEGRASI

///Program untuk menampilkan elemen dari sebuah string
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int loopeeng;
    int banyak;

        printf("\tMASUKKAN PANJANG ARRAY\t:");
        scanf("%d",&banyak);

        int num[banyak];

    for(loopeeng=0;loopeeng<banyak;loopeeng++)
    {
        printf("\n\tELEMEN KE [%d]\tINDEX KE [%d]:\t",(loopeeng+1),loopeeng);
        scanf("%d",&num[loopeeng]);
    }
    printf("\n--------------------------------------------------");

    for(loopeeng=0;loopeeng<banyak;loopeeng++)
    {
        if(num[loopeeng]%2==0)
        {
            num[loopeeng]=0;
            printf("\n\n\tELEMEN KE [%d]\tINDEX KE [%d]:\t%d\n",(loopeeng+1),loopeeng,num[loopeeng]);
        }
        else
        {
            printf("\n\n\tELEMEN KE [%d]\tINDEX KE [%d]:\t%d\n\n",(loopeeng+1),loopeeng,num[loopeeng]);
        }

    }
	return 0;
}
