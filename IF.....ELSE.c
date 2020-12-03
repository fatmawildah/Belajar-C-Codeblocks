///IRHAN PRABASUKMA
///PROGRAM IF ELSE
///A11.2016.09945
///KELOMPOK 4118
///12 OKTOBER 2016

#include <stdio.h>
#include <stdlib.h>
///if else
int main ()
{
    int angka;
    printf("Masukkan Angka:\t");
    scanf("%d",&angka);///kenapa klw di ketik a jadi 2 karena a bilangan ascii.a 2

    if (angka>=0 && angka%2==0)
    {
        printf("Angka %d adalah bilangan positif dan bernilai genap",angka);
    }

    else if (angka>=0 && angka%2!=0)

    {
        printf("Angka ini %d adalah positif dan bernilai ganjil ",angka);
    }
    else if (angka<0 && angka%2==0)
    {
        printf("Angka %d itu adalah bilangan negatif dan bernilai genap",angka);
    }
    else
    {
        printf("Angka ini %d adalah bilangan negatif dan bernilai ganjil",angka);
    }

    return 0;
}
