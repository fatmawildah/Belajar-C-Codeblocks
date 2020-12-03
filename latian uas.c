# include <stdio.h>
# include <stdlib.h>

int main()
{
    int i;
    int x=0;

    for(i=0;i<=5;i++)
    {
        x=i+x;
        printf("%d",x);
    }
    return 0;
}
