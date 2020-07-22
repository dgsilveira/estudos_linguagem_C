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
        printf("\nA é verdadeiro");
    }

    //Comparando o B
    if(b){
        printf("\nB é verdadeiro");
    }else{
        printf("\nB é falso");
    }


    //Comparando uma falsidade
    if(!b){
        printf("\nB é verdadeiro");
    }

    return 0;
}
