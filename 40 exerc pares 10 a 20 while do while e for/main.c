#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    //imprima os números pares de 10 a 20
    //While, Do While e For

    int i=10;

    while(i<=20){
        printf("\n%d",i);
        i+=2;
    }

    printf("\n\n");

    i=10;
    do{
        printf("\n%d",i);
        i+=2;
    }while(i<=20);

    printf("\n\n");

    for(i=10;i<=20;i+=2){
        printf("\n%d",i);
    }

    printf("\n\n");

    //exemplo dado com alteração no enunciado
    for(i = 10; i <= 20; i++){
        if(i % 2 == 0){
            printf("%d é par \n", i);
        }else{
            printf("%d é ímpar \n", i);
        }
    }



    return 0;
}
