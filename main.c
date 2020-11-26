//IRHAN PRABASUKMA
//A11.2016.09945
//TEKNIK INFORMATIKA
//DASAR PEMROGRAMAN
//28 SEPT 2016



#include <stdio.h>
#include <stdlib.h>

/* contoh membaca integer dan float*/
/* kemudian menuliskan nilai yang dibaca */
int main () {
/* Kamus */
int a;
float b;
char c;
char d;//seharusnya tidak usah di beri []
/* Program */
printf ("Membaca dan menulis, ketik nilai integer: "); scanf ("%d", &a);
printf ("Nilai yang dibaca : %d \n", a);
printf ("Membaca dan menulis, ketik nilai float: "); scanf ("%f"/*ini seharunya menggunakan tanda %f karena tipe data yang di tampilakan tipe data float*/, &b);
printf ("Nilai yang dibaca : %f \n", b);
printf ("Membaca dan menulis, ketik karakter: "); scanf ("%c", &c);
printf ("Karakter yang dibaca : %c \n", c);
printf ("Membaca dan menulis, ketik kata: "); scanf ("%s", &d);
printf ("Kata yang dibaca : %s \n", d);
return 0; }
