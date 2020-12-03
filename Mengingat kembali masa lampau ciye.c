#include <stdio.h>
#include <stdlib.h>
int main()
{
/* kamus */
int Celcius;
int CeltoFah;
int CeltoKel;
int CeltoRea;
printf("Masukkan Jumlah Celcius\t: ");
scanf("%d",&Celcius);///kurangnya tanda & disini,juga ini bukan %c tapi %d
///Program///pada bagian ini seharusnya komentar /* di hapus agar program dapat berjalan di ganti dengan // agar tulisan program tetap dapat menjadi komentar atau bisa menambahkan */ di akhir
CeltoFah=9.0/5.0* Celcius + 32;
CeltoKel=Celcius+273;
CeltoRea=4.0/5.0*Celcius;///program belum di akhiri , dengan cara ;
printf("Dalam Skala Celcius menunjukkan %d \n ",Celcius);///untuk menampilkan sebuah variabel , pada akhri printf perlu di tambahkan ,namavariabel
printf("Bila dikonversi menjadi Fahrenheit menjadi\t: %d\n",CeltoFah);
printf("Bila dikonversi menjadi Reamur menjadi\t: %d\n",CeltoRea);///%x , tidak ada dalam aturan type data , karena int maka %d , juga nama variabel terbalik dengan Reamur
printf("Bila dikonversi menjadi Kelvin menjadi\t: %d\n",CeltoKel);///%f digunakkan untuk type data float bukan int , lalu terbaliknya nama variabel dengan reamur
return 0;
}
