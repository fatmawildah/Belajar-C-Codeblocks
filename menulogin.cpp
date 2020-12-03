#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

void data();
void segitiga();
void tanya();
void selesai();

int main(void){
   int pil;
   char pass1[15];
   char pass2[15];
   int data1, data2;
   clrscr();

   printf ("Input Username = ");
   scanf ("%s", pass1);
   printf ("Input Password  = ");
   scanf ("%s", pass2);

   data1 = strcmp (pass1, "aditya");
   data2  = strcmp (pass2, "anggraine");

   if (data1 == 0 && data2 == 0){
      goto menu;
      }

   else
      {
      printf ("error!");  
      return(0);		 
      }

menu:
   printf("==============MENU============");
   printf("\n");
   printf("\n1. Input Nama ");
   printf("\n2. Segitiga");
   printf("\n3. Keluar");
   printf("\n");
   printf("\nPilihan anda[1-3] : ");
   scanf("%d",&pil);
   switch(pil)
   {
   case 1:
      data();
      tanya();
      break;
	 
   case 2:
      segitiga();
      tanya();
      break;
	 
   case 3:
      return 0;
      default:
      printf("Maaf, tidak ada pilihan\n\n");
      tanya();
   }
   return 0;
   }

void data(){
   struct mhs{
      char nama[20];
      int uts,uas;
      float total;
   } pmhs[5];
   int i,n;
printf("masukkan banyak data: ");
scanf("%d",&n);
printf("\n");
for (i=0; i<n; i++){
printf("input data ke-%d\n",i+1);
printf("Nama : ");
scanf("%s",&pmhs[i].nama);
printf("UTS : ");
scanf("%d",&pmhs[i].uts);
printf("UAS : ");
scanf("%d",&pmhs[i].uas);
printf("\n");
pmhs[i].total=(pmhs[i].uts*0.70)+(pmhs[i].uas*0.30);
}
getch();
clrscr();
printf("============================================\n");
printf("No  Nama      UTS      UAS      Total\n");
printf("============================================\n");
for(i=0;i<n;i++){
gotoxy(2, i+6); printf("%d.",i+1);
gotoxy(7, i+6); printf("%s",pmhs[i].nama);
gotoxy(17, i+6); printf("%d",pmhs[i].uts);
gotoxy(22, i+6); printf("%d",pmhs[i].uas);
gotoxy(27, i+6); printf("%.2f",pmhs[i].total);
}
}

void segitiga(){
   int i,j,tinggi;
   printf("Masukkan Tinggi : ");
   scanf("%d",&tinggi);
   for (i=1;i<=tinggi;i++){
      for (j=1;j<=i;j++){
         printf("+");
         }
      printf("\n");
      }
   getch();
   }

void tanya(){
   char tny;
   printf("\nkembali ke menu(y/n) : ");
   scanf("%s",&tny);
   if(tny=='Y'||tny=='y'){
      main();
      }
   else if(tny=='N'||tny=='n'){
      selesai();
      }
   else{
      printf("\nTidak ada pilihan");
      tanya();
      }
      }

void selesai(){
   printf("Terima Kasih :) ");
   getch();
   }