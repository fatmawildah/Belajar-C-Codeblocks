///IRHAN PRABASUKMA
///A11.2016.09945
///ASCII CLASIFICATION PROGRAM

    #include<stdio.h>
    #include<stdlib.h>
    int main()
    {
        ///KAMUS
        int angka;
        ///ALGORITMA
        printf("MASUKAN ANGKA :");
        scanf("%d",&angka);
        if(angka>=0&&angka<=32)
        {
            printf("TOMBOL PERINTAH");
        }
        else if(angka>=33&&angka<=47)
        {
            printf("TOMBOL SYMBOL");
        }
        else if(angka==65||angka==73||angka==85||angka==69||angka==79)
        {
            printf("HURUF VOCAL BESAR");
        }
        else if(angka>=66 || angka<=68 || angka>=70||angka<=78||angka>=80||angka<=84||angka>=86||angka<=90)
        {
            printf("HURUF KONSONAN BESAR");
        }
        else if(angka>=58||angka<=64)
        {
            printf("TOMBOL SYMBOL");
        }
        else if(angka>=91&&angka<=96)
        {
            printf("TOMBOL SYMBOL");
        }
        else if(angka==97||angka==105||angka==117||angka==101||angka==111)\
        {
            printf("HURUF VOKAL KECIL");
        }
        else if(angka>=98&&angka<=100&&angka>=102&&angka<=110&&angka>=112&&angka<=116&&angka>=118&&angka<122)
        {
            printf("HURUF KONSONAN KECIL");
        }
        else if(angka>=123&&angka<=126)
        {
            printf("TOMBOL SYMBOL");
        }
        else if(angka==127)
        {
            printf("TOMBOL PERINTAH");
        }
        else if(angka<0)
        {
            printf("SALAH INPUTAN KURANG DARI 0,COBA INPUTKAN LAGI");
        }
        else if(angka>127)
        {
            printf("SALAH INPUTAN LEBIH DARI 127,COBA INPUTAN LAGI");
        }
        else if(angka>=48&&angka<=57)
        {
            printf("TOMBOL ANGKA");
        }
        else
        {
            printf("ERROR");
        }




        return 0;
    }

