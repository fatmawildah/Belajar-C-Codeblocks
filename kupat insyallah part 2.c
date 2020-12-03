#include <stdio.h>
#include <stdlib.h>

int main()
{
    int loop1,n,loop2;
    printf("MASUKKAN BATAS\t:");///batas untuk looping pertama
    scanf("%d",&n);
        for(loop1=1;loop1<=n;loop1++)
        {
                for(loop2=1;loop2<=loop1;loop2++)
                {
                    printf("*");
                }
            printf("\n");
        }
    return 0;
}
