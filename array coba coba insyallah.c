# include <stdio.h>
# include <stdlib.h>

int main()
{
    int nilai[10];
    int a,b;
    for(a=1;a<=10;a++)
    {
        printf("MASUKKAN NILAI:");
        scanf("%d",&nilai[a]);
    }
    for(b=1;b<=10;b++)
    {
        printf("MENAMPILKAN ARRAY KE =\t%d",nilai[b]);
        printf("\n");
    }
    return 0;
}
