#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    char letra = 'x';

    if(letra =='x'){
        printf("\nA letra � x.");
    }

    //usar %d para representar vari�vel char, trar� o c�digo ASCII
    printf("\ncodigo da letra ASCII = %d", letra);

    //vai comparar transformando em um inteiro
    if(letra == 120){
        printf("\nA letra � x comparado com um inteiro");
    }
    return 0;
}
