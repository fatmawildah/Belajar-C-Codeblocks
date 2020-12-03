/// IRHAN PRABASUKMA
/// A11.2016.09945
/// TEKNIK INFORMATIKA
/// LOOPING WHILE
/// 16 NOVEMBER 2016

#include <stdio.h>///HEADER
#include <stdlib.h>///HEADER

int main ()///BODY
{
    ///KAMUS
    int i;
    ///ALGORITMA
    printf("MASUKKAN ANGKA");
    scanf("%d",&i);
    while(i>=0){
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
    i--;///i++ itu maksudnya adalah i=i+1(iterasi),i--=i-1
    }
    ///nile awal i=1
    ///nile batas i=30
    ///iterator
    ///prosesnya dari i terus ke while trus masuk ke if kalau memenuhi di tampilkan klw ngga di lewati
    return 0;
}
