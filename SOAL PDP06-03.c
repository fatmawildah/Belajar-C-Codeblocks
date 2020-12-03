///IRHAN PRABASUKMA
///A11.2016.09945
///TRIANGLE TYPE IDENTIFICATION
///KAMUS
    #include<stdio.h>
    #include<stdlib.h>
    #include<math.h>
    int sisi1;
    int sisi2;
    int sisi3;
    float luas;
    int keliling;
    double tinggi;
    int kuadrat;
    int t_sembarang;
///ALGORITMA
int main()
{
    printf("MASUKAN SISI 1 : ");
    scanf("%d",&sisi1);
    printf("MASUKAN SISI 2 : ");
    scanf("%d",&sisi2);
    printf("MASUKAN SISI 3 : ");
    scanf("%d",&sisi3);
    if(sisi1==sisi2&&sisi2==sisi3)
    {
        printf("SEGITIGA SAMA SISI");
        kuadrat=(sisi1*sisi1)-(sisi2/2*sisi2/2);
        tinggi=sqrt(kuadrat);
        printf("\n\tTINGGI : %g",tinggi);
        luas=0.5*sisi1*tinggi;
        printf("\n\tLUAS : %f",luas);
        keliling=sisi1+sisi2+sisi3;
        printf("\n\tKELILING : %d",keliling);
    }
    else if(sisi1==sisi2)
    {
        printf(" SEGITIGA SAMA KAKI");
        kuadrat=(sisi1*sisi1)-(sisi2/2*sisi2/2);
        tinggi=sqrt(kuadrat);
        printf("\n\tTINGGI : %g",tinggi);
        luas=0.5*sisi1*tinggi;
        printf("\n\tLUAS : %f",luas);
        keliling=sisi1+sisi2+sisi3;
        printf("\n\tKELILING :%d",keliling);

    }
    else if(sisi1!=sisi2&&sisi2!=sisi3)
    {
        printf("SEGITIGA SEMBARANG");
        printf("\n\tMASUKAN TINGGI :");
        scanf("%d",&t_sembarang);
        luas=0.5*sisi1*t_sembarang;
        printf("\tLUAS : %f",luas);
        keliling=sisi1+sisi2+sisi3;
        printf("\n\tKELILING :%d",keliling);
    }
    else
    {
        printf("TIDAK ADA");
    }


    return 0;

}
