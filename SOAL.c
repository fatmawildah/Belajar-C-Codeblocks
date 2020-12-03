/// IRHAN PRABASUKMA
/// A11.2016.09945
/// TEKNIK INFORMATIKA
/// LATIHAN LOOPING
/// 16 NOVEMBER 2016

#include <stdio.h>///HEADER
#include <stdlib.h>///HEADER

int main ()///BODY
{
    int angka, angka1;
    int i;
    printf("MASUKKAN ANGKA:");
    scanf("%d",&angka);
    i=1;
    while(i<=6)
    {
        angka1=angka%10;
        printf("%d ",angka1);
        angka=angka/10;
        i++;
    }
    return 0;
}



