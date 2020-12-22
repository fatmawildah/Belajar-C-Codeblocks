//Judul : Luas dan Keliling Segitiga
//Oleh  : Mochamad Afan Pambudiaji (A11.2016.09467)
//23 september 2016

//kamus:
    #include <stdio.h>
    #include <string.h>
    char RUMUSLUASSEGITIGA,RUMUSKELILINGSEGITIGA;
    int alasSegitiga;
    int tinggiSegitiga;
    int luasSegitiga;
    int kelilingSegitiga;
    int sisi1;
    int sisi2;
    int sisi3;

//deskripsi:

    int main ()

{

        printf("Masukkan Alas Segitiga   :");
        scanf("%d",&alasSegitiga);
        printf("Masukkan Tinggi Segitiga :");
        scanf("%d",&tinggiSegitiga);
        luasSegitiga= 0.5*alasSegitiga*tinggiSegitiga;
        printf("\n\t Luas Segitiga  = %d",luasSegitiga);
        printf("\n----------------------------------------\n");
        printf("\n Masukkan Panjang Sisi 1:");
        scanf("%d",&sisi1);
        printf("\n Masukkan Panjang Sisi 2  :");
        scanf("%d",&sisi2);
        printf("\n Masukkan Panjang Sisi 3  :");
        scanf("%d",&sisi3);
        kelilingSegitiga = sisi1+sisi2+sisi3;
        printf("\n\t Keliling Segitiga   = %d",kelilingSegitiga);
        
        return 0;


}

