#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;

    printf("\nDigite um valor de 1 a 4:\n");
    scanf("%d", &valor);

    switch(valor){
        case 1:
            printf("\nValor digitado: 1\n");
        break;

        case 2:
        printf("\nValor digitado: 2\n");
        break;

        case 3:
        printf("\nValor digitado: 3\n");
        break;

        case 4:
        printf("\nValor digitado: 4\n");
        break;

        default:
        printf("\nNao digitado na faixa\n");
    }
    printf ("\nFim do programa!");

    return 0;
}
