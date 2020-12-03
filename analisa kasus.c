#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("keterangan\n");
    printf("p=panjang\n");
    printf("l=lebar\n");
    printf("Luas\n");
    float p,l,L;
    printf("Masukkan panjangnya:");
    scanf("%f",&p);
    printf("Masukkan lebarnya :");
    scanf("%f",&l);
    printf("masukkan luasnya:");
    scanf("%f",&L);
    if(p==0)
    {
        p=L/l;
        printf("panjangnya adalah:%f",p);
        printf("meter");
    }
    else if(l==0)
    {
        l=L/p;
        printf("lebarnya adalah:%f",l);
        printf("meter");
    }
    else
    {
        L=p*l;
        printf("luasnya adalah:%f",L);
        printf("meter2");
    }
        printf("\nkategori:");
    }

    if(L>75);
    {
        printf("sangat luas");
    }
    else if(L<75&&L>25);
    {
        printf("Cukup Luas");
    }
    else
    {
        printf("kurang luas");
    }
}

    return 0;

