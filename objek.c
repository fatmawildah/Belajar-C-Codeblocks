//judul : ANALSS TYdPE DATA
//oleh : galih eka prakoso
// 20 september 2016
//kamus :
    #include <stdio.h>
    #include <string.h>
    char objek,bahan,warna,bentuk,merk;
    int jmlh_pintu,jmlh_sisi;

//deskrps :
   int main()

{
    printf("objek       : ");
    scanf("%s",&objek);
    printf("bahan       : ");
    scanf("%s",&bahan) ;
    printf("warna       : ");
    scanf("%s",&warna) ;
    printf("bentuk      : ");
    scanf("%s",&bentuk) ;
    printf("merk        :");
    scanf("%s",&merk) ;
    printf("jmlh sisi   : ");
    scanf("%d",&jmlh_sisi) ;
    printf("jmlh pintu  : ");
    scanf("%d",&jmlh_pintu) ;
    return 0;
}
