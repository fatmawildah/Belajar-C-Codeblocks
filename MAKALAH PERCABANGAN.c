#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a,b,c;
    printf("masukkan a:");
    scanf("%d",&a);
    printf("masukkan b:");
    scanf("%d",&b);
    c=a+b;
    printf("\n%d+%d=%d",a,b,c);
    if(c>0)
    {
        printf("\nbilangan positif");
    }
    return 0;
}
