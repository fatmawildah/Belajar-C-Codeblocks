/// NAMA            :   IRHAN PRABASUKMA
/// NIM             :   A11.2016.09945
/// PROGRAM STUDI   :   TEKNIK INFORMATIKA
/// JUDUL           :   PROGRAM LATIHAN MENGINPUT DAN MENGOUTPUT DATA BERDASARKAN OBJEK

# include <stdio.h>
# include <stdlib.h>

int main()
{
    printf("\t\t\t\t\tIDENTIFIKASI OBJEK");
    printf("\n\t\t\t\t\t\tKUDA");
    int kaki;
    int mata;
    char makan[10];
    char warna[10];

    printf("\n\tKAKI KUDA\t:\t");
    scanf("%d",&kaki);
    printf("\tMATA KUDA\t:\t");
    scanf("%d",&mata);
    printf("\tMAKANAN KUDA\t:\t");
    scanf("%s",&makan);
    printf("\tWARNA KUDA\t:\t");
    scanf("%s",&warna);
        printf("\n\tKAKI KUDA\t:\t%d",kaki);
        printf("\n\tMATA KUDA\t:\t%d",mata);
        printf("\n\tMAKANAN KUDA\t:\t%s",&makan);
        printf("\n\tWARNA KUDA\t:\t%s",warna);

    return 0;
}

