///LATIHAN RABU SORE

#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0

int main ()
{
    ///NO 1
    ///KAMUS
        int nilai1;
        int nilai2;

            ///PROGRAM
            printf("Masukkan Nilai 1      :");
            scanf("%d",&nilai1);
            printf("Masukkan Nilai 2      :");
            scanf("%d",&nilai2);
            int tambah = nilai1+nilai2;
            int kurang = nilai1-nilai2;
            int kali = nilai1*nilai2;
            float bagi = nilai1/nilai2;
            printf("Nilai 1 + Nilai 2 =%d\n",tambah);
            printf("Nilai 1 - Nilai 2 =%d\n",kurang);
            printf("Nilai 1 x Nilai 2 =%d\n",kali);
            printf("Nilai 1 / Nilai 2 =%f\n",bagi);


    ///NO 2
    ///KAMUS
      int a=true&&true;
      int b=true&&false;
      int c=false&&true;
      int d=false&&false;
                ///PROGRAM
                 printf("------------------------------------------");
                 printf("\n |\tOperator");
                 printf("\t |\tHasil");
                 printf("\t |");
                 printf("\n\t|\tTRUE AND TRUE    |\t = %d",a);
                 printf("\n\t|\tTRUE AND FALSE   |\t = %d",b);
                 printf("\n\t|\tFALSE AND TRUE   |\t = %d",c);
                 printf("\n\t|\tFALSE AND FALSE  |\t = %d",d);
                 printf("\n ---------------------------------------");







return 0;
}
