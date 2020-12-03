/// NAMA            :   IRHAN PRABASUKMA
/// NIM             :   A11.2016.09945
/// PROGRAM STUDI   :   TEKNIK INFORMATIKA
/// JUDUL           :   PROGRAM LATIHAN MENGINPUT DAN MENGOUTPUT DATA

# include <stdio.h>
# include <stdlib.h>

/* contoh membaca integer dan float*/
/* kemudian menuliskan nilai yang dibaca */
int main ()
 {
/* Kamus */
    int     a;
    float   b;
    char    c;
    char    d[10];
/* Program */


    printf ("Membaca dan menulis, ketik karakter: ");
    scanf ("%c", &c);
    printf ("Karakter yang dibaca : %c \n", c);

    printf ("Membaca dan menulis, ketik kata: ");
    scanf ("%s", &d);
    printf ("Kata yang dibaca : %s \n", d);

    printf ("Membaca dan menulis, ketik nilai integer: ");
    scanf ("%d", &a);
    printf ("Nilai yang dibaca : %d \n", a);

    printf ("Membaca dan menulis, ketik nilai float: ");
    scanf ("%f", &b);
    printf ("Nilai yang dibaca : %f \n", b);
return 0;
}
