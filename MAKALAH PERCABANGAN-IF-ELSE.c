#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a,b,c;
    printf("masukkan a");
    scanf("%d",&a);
    printf("masukkan b");
    scanf("%d",&b);
    c=a+b;
    printf("\n%d+%d=%d",a,b,c);
    if(c>=10)
    {
        printf("\n>10");
    }
    else if(c>=1 && c<10)
    {
        printf("\n<10");
    }
    else
    {
        printf("\n negatif");
    }
    return 0;
}
