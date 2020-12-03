///NAMA             :   IRHAN PRABASUKMA
///NIM              :   A11.2016.09945
///KELOMPOK         :   4118
///PROGRAM STUDI    :   TEKNIK INFORMATIKA
///PROGRAM          :   MENAMPILKAN ANGKA HASIL JUMLAH INDEX GENAP GANJIL BERDASARKAN INPUTAN DARI ARRAY SECARA TERURUT DAN TERINTEGRASI

///Program untuk menampilkan elemen dari sebuah string
#include <stdio.h>
#include <stdlib.h>

int main()

{

    int loopeeng,sum=0,kali,sumjil=0;
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
        if(loopeeng%2==0)
        {
            sum=sum+num[loopeeng];
        }
        else if(loopeeng%2!=0)
        {
            sumjil=sumjil+num[loopeeng];
        }

    }
    kali=sum*sumjil;
    printf("\n\tJUMLAH GENAP\t:\t%d",sum);
    printf("\n\tJUMLAH GANJIL\t:\t%d",sumjil);
    printf("\n--------------------------------------------------\t");
    printf("\n\tHASIL\t\t:\t%d",kali);
	return 0;
}
