/// IRHAN PRABASUKMA
/// A11.2016.09945
/// TEKNIK INFORMATIKA
/// LOOPING DO BREAK
/// 16 NOVEMBER 2016

#include <stdio.h>///HEADER
#include <stdlib.h>///HEADER

int main ()///BODY
{
    ///KAMUS
    int i;
    ///ALGORITMA
    for (i=1; i<=10; i++)
    {
        if(i%3==0)
        {
            continue;
        }
        printf("%d",i);
    }
    ///i++(increment/penambahan)
    ///i--(decrement/pengurangan)
    ///i=i+2 artinya angka di tambah 2
    ///nile awal i=1
    ///nile batas i=30
    ///iterator
    ///i+1/i++ artinya sama yaotu i+1
    return 0;
}
