#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5, opcao = 1;
    float b = 2.5;
    char c = 'x';


    //condicional simples
    if (a == 5){
        printf("\nA variavel a = 5");
    }
    if(b == 2.5){
        printf("\nA variavel b = 2.5");
    }
    if(c == 'x'){
        printf("\nA variavel c = 'x'");
    }

    //Número par ou impar
    if(a % 2 ==1){
        printf("\nA variavel e impar");
    }else{
        printf("\nA variavel e par");
    }

    //Condição composta
    if(opcao == 1){
        printf("\nA opcao = 1");
    }else if(opcao == 2){
        printf("\nA opcao = 2");
    }else{
        printf("\nA opcao nao e 1 ou 2");
    }
    return 0;
}
