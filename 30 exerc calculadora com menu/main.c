#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    //leia dois valores e crie um menu de 4 op��es
    //1-soma, 2-subtrair, 3-dividir e 4-multiplicar
    //mostre o resultado escolhido

    float valor1, valor2, buffer;
    int opcao;

    printf("\nDigite dois valores:\n");
    scanf("%f %f", &valor1, &valor2);


    printf("\n|*******MENU*******|");
    printf("\n|1 - soma          |");
    printf("\n|2 - subtra��o     |");
    printf("\n|3 - dividir       |");
    printf("\n|4 - multiplicar   |");
    printf("\n|******************|\n\n");

    scanf("%d",&opcao);

    switch(opcao){
    case 1:
        buffer=valor1+valor2;
        printf("\nA soma de %.1f e %.1f � %.1f.\n", valor1, valor2, buffer);
        break;

    case 2:
        buffer=valor1-valor2;
        printf("\nA subtra��o de %.1f e %.1f � %.1f.\n", valor1, valor2, buffer);
        break;

    case 3:
        buffer=valor1/valor2;
        printf("\nA divis�o de %.1f e %.1f � %.1f.\n", valor1, valor2, buffer);
        break;

    case 4:
        buffer=valor1*valor2;
        printf("\nA multiplica��o de %.1f e %.1f � %.1f.\n", valor1, valor2, buffer);
        break;

    default:
        printf("\nNenhuma das op��es foram escolhidas\n");
        break;
    }
    return 0;
}
