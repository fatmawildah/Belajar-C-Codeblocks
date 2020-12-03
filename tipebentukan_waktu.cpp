#include <stdio.h>
#include <conio.h>

typedef struct{int j;
					int m;
               int d;}juju;
	juju time[3];
   int i;
  //int tot1,tot2,tot3;

int main()
{
	 int TotalJam=0 , menit=0,detik;

	printf("masukkan waktu\n");
   printf("------------------\n");
   for(i=0; i<3; i++)
   {
   	printf("masukkan jam : "); scanf("%d",&time[i].j);
   	printf("masukkan menit : "); scanf("%d",&time[i].m);
   	printf("masukkan detik : "); scanf("%d",&time[i].d);
      printf("------------------\n");
   }
   printf("waktu sesuai inputan : \n");
   for(i=0; i<3; i++){
   printf("waktu ke-%d.  %d : %d : %d\n",i,time[i].j,time[i].m,time[i].d);
   }

   detik = time[0].d +time[1].d+time[2].d;
   if (detik>60)
   	{
      detik = detik - 60;
      menit = 1;
      }
  menit = menit + time[0].m +time[1].m+time[2].m;
  if (menit>60)
   	{
      menit  = menit - 60;
      TotalJam =  1;
      }
  TotalJam = TotalJam  + time[0].j +time[1].j+time[2].j;

  printf("waktu setelah dijumlah %d : %d : %d",TotalJam,menit,detik);
   getch();
	return 0;
}