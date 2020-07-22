#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    char letra = 'x';

    if(letra =='x'){
        printf("\nA letra é x.");
    }

    //usar %d para representar variável char, trará o código ASCII
    printf("\ncodigo da letra ASCII = %d", letra);

    //vai comparar transformando em um inteiro
    if(letra == 120){
        printf("\nA letra é x comparado com um inteiro");
    }
    return 0;
}
