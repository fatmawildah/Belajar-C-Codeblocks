/// NAMA            :   IRHAN PRABASUKMA
/// NIM             :   A11.2016.09945
/// PROGRAM STUDI   :   TEKNIK INFORMATIKA
/// JUDUL           :   PROGRAM FIXING CONVERTER SUHU

#include <stdio.h>
#include <stdlib.h>
int main()
{
    ///Mobil pada mulanya diam. Setelah 12,5 sekon(t), kelajuan mobil bertambah menjadi 21,55 m/s(vt). Buatlah
    ///program untuk menghitung percepatan mobil(a)!

    float v0=0;
    float t=12.5;
    float vt=21.55;
    float a;

    ///Vt = v0 + a t
    printf("V0\t=\t%f",v0);
    printf("\nt\t=\t%.2f",t);
    printf("\nVt\t=\t%.2f",vt);
    a=(vt-v0)/t;
    printf("\na=(vt-vo)/t");
    printf("\na=(%.2f-%.2f)/%.2f",vt,v0,t);
    printf("\na=%.2f",a);
    return 0;
}
