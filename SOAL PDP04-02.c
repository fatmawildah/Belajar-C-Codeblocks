///IRHAN PRABASUKMA
///A11.2016.09945
///SOAL PDP4-02
///ANALISA KASUS 2
///PROGRAM KALKULATOR BERAT BADAN IDEAL
///19 OKTOBER 2016

#include <stdio.h>
#include <stdlib.h>


int main ()
{
    ///KAMUS
    float w;
    float h;
    float bmi;///RUMUS BMI = Berat Badan (kg) / ( Tinggi Badan (m) x Tinggi Badan (m) )
    ///ALGORITMA
    printf("Input Your Weight (Kg)\t:\t");
    scanf("%f",&w);
    printf("Input Your Height (M)\t:\t");
    scanf("%f",&h);
    bmi=w/(h*h);
    printf("Your BMI\t\t:\t%.2f",bmi);


    if (bmi<18)
    {
        printf("\nUnder Weight / Skinny - You should start to gain weight and consume foods carbohydrate balanced with exercise");
    }
    else if(bmi>=18 && bmi<=25)
    {
        printf("\nNormal Weight/Normal - Excellent, you have a ideal weight category");
    }
    else if(bmi>=25 && bmi<=27)
    {
        printf("\nOver Weight / Obesity - you have been categorized as obese. avoid foods fatty and start increasing exercise at least 2 times a week");
    }
    else
    {
        printf("\nObesity - You have to start a loss weight program , it's not good for your healthy");
    }
    return 0;
}
