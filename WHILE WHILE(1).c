#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int batas;
    int baris;
    int kolom;
    printf("MASUKKAN BARIS:");
    scanf("%d",&batas);
    baris=1;
    while(baris<=batas)
    {
        kolom=1;
        while(kolom<batas)
        {
            printf("%d\t",baris*kolom);
            kolom++;
        }
        printf("\n");
        baris++;
    }
    return 0;
}
