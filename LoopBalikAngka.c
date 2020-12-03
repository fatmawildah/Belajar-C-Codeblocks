#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i, angka, hasil;
    printf("=== PROGRAM BALIK ANGKA ==");
    printf("\nMasukkan Angka (6 angka) : ");
    scanf("%d", &angka);

    if(angka>999999)
        printf("ERROR!! Input lebih dari 6 angka");

    else if(angka<100000)
        printf("ERROR!! Input kurang dari 6 angka");

    else{
    printf("[ ");
    for(i=1;i<=6;i++)
    {
            hasil = angka%10;
            printf("%d ",hasil);
            angka = angka/10;
    }
    printf("]");
    }

    getch();

    return 0;
}
