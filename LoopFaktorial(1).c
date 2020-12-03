#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i, bil, hasil=1;
    printf("=== PROGRAM FAKTORIAL ==");

      printf("\nMasukkan bilangan faktorial: ");
      scanf("%d", &bil);

    for(i=1;i<=bil;i++)
    {
      hasil=i*hasil;
    }
    printf("Faktorial dari %d! = %d", bil, hasil);

    getch();

    return 0;
}
