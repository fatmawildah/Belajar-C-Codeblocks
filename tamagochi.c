///IRHAN PRABASUKMA
///TAMAGOCHI
///A11.2016.09945
///KELOMPOK 4118
///19 OKTOBER 2016
///19.31-19.51

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    ///KAMUS
    char nama[20];
    int berat;
    char choose;
    int nambah;
    int makan;
    int main;
    int ngurang;

    ///ALGORITMA
    printf("PET NAME:");
    gets(nama);
    printf("PET WEIGHT:");
    scanf("%d",&berat);
    printf("\a\nA.EAT");
    printf("\a\nB.PLAY!");

    printf("\nYOU WANT TO DO ?");
    scanf(" %c",&choose);
    switch (choose)
    {
        case 'a':
        case 'A':
            printf("EAT?:");
            scanf("%d",&makan);

            if(makan>=3)
            {
                printf("%s, i dont want to eat . weight:%d",nama,berat);
            }
            else
            {
                nambah=berat+1;
                printf("Lets eat,%s hungry%d",nama,nambah);
            }
            break;
        case 'b':
        case 'B':
            printf("PLAY?");
            scanf("%d",&main);


            if(main>=3)
            {
                printf("%s, i dont want to play im tired . weight:%d",nama,berat);
            }
            else
            {
                ngurang=berat-1;
                printf("Lets eat,%s hungry%d",nama,ngurang);
            }
            break;
        default:
            printf("SORRY THERE ARE NO CHOOSE");
            break;
    }

    return 0;
}
