# include <stdio.h>
# include <stdlib.h>

int main()
{
    int loop;
    int input;
    printf("\t\t\tARRAY SIZE\t:\t");
    scanf("%d",&input);
    int number[input];
    int genap;
    int choose;
    int jum=0;
        ///INPUT
        for(loop=0;loop<input;loop++)
        {
            input   :
            printf("\n\tINDEX\t[%d]\tSEQUENCE\t[%d]\t:\t",loop,loop+1);
            scanf("%d",&number[loop]);
        }
        ///OUTPUT
        for(loop=0;loop<input;loop++)
        {
            if(number[loop]%2==0)
            {
                jum++;
                if(jum==2)
                {
                    genap=number[loop];
                }
            }

        }
        printf("\n\tINDEX\t[%d]\tSEQUENCE\t[%d]\t:\t%d",loop,loop+1,genap);
    return 0;
}
