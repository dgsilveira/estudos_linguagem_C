#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int main()
{
    setlocale(LC_ALL,"");

    bool a = true, b = false;


    //Se A for verdadeiro
    if(a){
        printf("\nA � verdadeiro");
    }

    //Comparando o B
    if(b){
        printf("\nB � verdadeiro");
    }else{
        printf("\nB � falso");
    }


    //Comparando uma falsidade
    if(!b){
        printf("\nB � verdadeiro");
    }

    return 0;
}
