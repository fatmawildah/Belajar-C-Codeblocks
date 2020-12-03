///GALIH EKA PRAKOSO
///A11.2016.09478
///JUDUL : PENGGOLONGAN ANGKA
///KAMUS
    #include<stdio.h>
    #include<stdlib.h>
    int angka;

///ALGORITMA
    int main()
    {
        printf("MASUKAN ANGKA : ");
        scanf("%d",&angka);
        if(angka>=1&&angka<=9)
        {
            printf("GOLONGAN SATUAN");
        }
        else if(angka>=10&&angka<=99)
        {
            printf("GOLONGAN PULUHAN");
        }
        else if(angka>=100&&angka<=999)
        {
            printf("GOLONGAN RATUSAN");
        }
        else
        {
            printf("ANGKA TIDAK VALID");
        }

        return 0;
    }


