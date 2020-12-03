/// IRHAN PRABASUKMA
/// A11.2016.09945
/// TEKNIK INFORMATIKA
/// LOOPING DO WHILE
/// 16 NOVEMBER 2016

#include <stdio.h>///HEADER
#include <stdlib.h>///HEADER

int main ()///BODY
{
    ///KAMUS
    int i;
    ///ALGORITMA
    i=0;
    do{
        ///if(i%2!=0)
        ///{
            printf("%d\n",i);
        ///}
        i=i+4;///angka di samping adalah jarak angka
    ///i++(increment/penambahan)
    ///i--(decrement/pengurangan)
    ///i=i+2 artinya angka di tambah 2
    }while(i<=20);
    ///nile awal i=1
    ///nile batas i=30
    ///iterator
    ///i+1/i++ artinya sama yaotu i+1
    return 0;
}
