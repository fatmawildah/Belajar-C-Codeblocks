///B.OPERATOR LOGIKA
///IRHAN PRABASUKMA
///A11.2016.09945
///28 SEPT 2016

#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0

int main ()
{
    ///KAMUS
    int p1 = true && true;///operator dan (&&)
    int p2 = false || false;///operator atau (||)
    int p3 = true == true;///operator sama dengan (==)

                    ///PROGRAM
                    printf("p1=%d\n",p1);
                    printf("p2=%d\n",p2);
                    printf("p3=%d\n",p3);
    return 0;
}
