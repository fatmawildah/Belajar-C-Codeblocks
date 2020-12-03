/// NAMA            :   IRHAN PRABASUKMA
/// NIM             :   A11.2016.09945
/// KELOMPOK        :   A11.4118
/// PROGRAM STUDI   :   TEKNIK INFORMATIKA
/// JUDUL           :   MENJELASKAN TENATANG STRUCT

# include <stdio.h>
# include <stdlib.h>

///kalau struct di atas int
typedef struct
{
    int x;
    int y;
}POINT_2;///ini tipe data bentukan namanya point_2
///ibaratnya folder ada int x sama y

struct POINT
{
    int x;
    int y;
};

int main()
{
    POINT_2 titik_2;
    struct POINT titik;

    titik.x = 10;
    titik.y = 32;

    titik_2.x = 41;
    titik_2.y = 18;

    printf("NILAI X = %d\n",titik.x);
    printf("NILAI Y = %d\n\n",titik.y);
            printf("NILAI X = %d\n",titik_2.x);
            printf("NILAI Y = %d\n",titik_2.y);

            getch();
    return 0;
}
