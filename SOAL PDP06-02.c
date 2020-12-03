///IRHAN PRABASUKMA
///A11.2016.09945
///SOAL PDP06-02
///ASCII DETECTION PROGRAM
///16 OCTOBER 2016

#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///KAMUS
    int ascii;
    ///ALGORITMA
    printf("\n\t\tINSERT ASCII CODE\t:\t");
    scanf("%d",&ascii);
    if(ascii>=0 && ascii<=32)
    {
        printf("\t\t\tYOUR INPUT IS COMMAND BUTTON");
    }
    else if(ascii>32 && ascii<=47)
    {
        printf("\t\t\tYOUR INPUT IS SYMBOL BUTTON");
    }
    else if(ascii>47 && ascii<=57)
    {
        printf("\t\t\tYOUR INPUT IS NUMBER BUTTON");
    }
    else if(ascii>57 && ascii<=64)
    {
        printf("\t\t\tYOUR INPUT IS SYMBOL BUTTON");
    }
    else if(ascii==65 || ascii==73 || ascii==69 || ascii==79 || ascii==85)
    {
        printf("\t\tYOUR INPUT IS VOCAL UPPER CASE BUTTON");
    }
    else if(ascii>65 && ascii<=68)
    {
        printf("\t\t\tYOUR INPUT IS CONSONANT UPPER CASE BUTTON");
    }
    else if(ascii>69 && ascii<=72)
    {
        printf("\t\t\tYOUR INPUT IS CONSONANT UPPER CASE BUTTON");
    }
    else if(ascii>73 && ascii<=78)
    {
        printf("\t\t\tYOUR INPUT IS CONSONANT UPPER CASE BUTTON");
    }
    else if(ascii>79 && ascii<=84)
    {
        printf("\t\t\tYOUR INPUT IS CONSONANT UPPER CASE BUTTON");
    }
    else if(ascii>85 && ascii<=90)
    {
        printf("\t\t\tYOUR INPUT IS CONSONANT UPPER CASE BUTTON");
    }
    else if(ascii>90 && ascii<=96)
    {
        printf("\t\t\tYOUR INPUT IS SYMBOL BUTTON BUTTON");
    }
    else if(ascii==97 || ascii==101 || ascii==117 || ascii==101 || ascii==111)
    {
        printf("\t\tYOUR INPUT IS VOCAL LOWER CASE BUTTON");
    }
    else if(ascii>97 && ascii<=100)
    {
        printf("\t\t\tYOUR INPUT IS CONSONANT LOWER CASE BUTTON");
    }
    else if(ascii>101 && ascii<=104)
    {
        printf("\t\t\tYOUR INPUT IS CONSONANT LOWER CASE BUTTON");
    }
    else if(ascii>105 && ascii<=110)
    {
        printf("\t\t\tYOUR INPUT IS CONSONANT LOWER CASE BUTTON");
    }
    else if(ascii>111 && ascii<=116)
    {
        printf("\t\t\tYOUR INPUT IS CONSONANT LOWER CASE BUTTON");
    }
    else if(ascii>117 && ascii<=122)
    {
        printf("\t\t\tYOUR INPUT IS CONSONANT LOWER CASE BUTTON");
    }
    else if(ascii>122 && ascii<=126)
    {
        printf("\t\t\tYOUR INPUT IS SYMBOL BUTTON");
    }
    else if(ascii==127)
    {
        printf("\t\t\tYOUR INPUT IS COMMAND BUTTON");
    }
    else if(ascii<0)
    {
        printf("INPUT ERROR LESS THAN 0 , PLEASE RE INPUT AGAIN");
    }
    else
    {
        printf("INPUT ERROR MORE THAN 127 , PLEASE RE INPUT AGAIN");
    }
    return 0;
}
