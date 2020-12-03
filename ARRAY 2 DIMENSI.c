# include <stdio.h>
# include <stdlib.h>

int main()
{
    ///Array 2 dimensi
    int x[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int looping1,looping2;

    for(looping1=0;looping1<3;looping1++)
    {
        for(looping2=0;looping2<3;looping2++)
        {
            printf("\t[%d][%d]:%d \n",looping1,looping2,x[looping1][looping2]);
        }
        printf("\n");
    }
    return 0;
}
