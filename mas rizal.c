#include <stdio.h>
#include <stdlib.h>

int main()
{
    int banyak, i;

    printf("Input banyak data : ");
    scanf("%d", &banyak);

    //int data[banyak];
    char data[banyak][30];
    int nilai[banyak];

    for(i=0;i<banyak;i++)
    {
        printf("Data ke-%d : ",i+1);
//        scanf("%d", &data[i]);
        fflush(stdin);
        gets(data[i]);
        printf("Nilai : ");
        scanf("%d", &nilai[i]);
        printf("\n");
    }

    printf("\n");

    for(i=0;i<banyak;i++)
    {
        //printf("Data ke-%d : %d\n",i+1, data[i]);
        printf("Data ke-%d : %s\n",i+1, data[i]);
        printf("Nilai : %d\n\n", nilai[i]);
    }
    return 0;
}
