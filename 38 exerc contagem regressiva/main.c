#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    //imprima os números de 10 até 0
    //while, do while e for

    int i = 10;

    //while

    while(i>=1){
        printf("\n%d",i);
        i--;
    }

    //do while
    i = 10;
    do{
        printf("\n%d",i);
        i--;
    }while(i>=1);

    //for
    for(i=10;i>=1;i--){
        printf("\n%d",i);
    }

    return 0;
}
