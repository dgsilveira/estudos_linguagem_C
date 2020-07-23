#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a =0;

    do{
        printf("%d ",a);
        a++;
    }while(a<=10);

    printf("\n");

    a=10;

    do{
        printf("%d ",a);
        a--;
    }while(a>=0);

    return 0;
}
