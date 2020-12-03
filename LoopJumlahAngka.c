#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i, bil, hasil=0;
    printf("=== PROGRAM JUMLAH DERET ANGKA ==");

    printf("\nMasukkan Suatu Bilangan : ");
    scanf("%d", &bil);

    for(i=1;i<=bil;i++)
    {
      hasil=hasil+i;
    }
    printf("Hasilnya = %d", hasil);

    getch();

    return 0;
}
