#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    //leia 3 n�meros inteiros de uma s� vez e
    //salve a multiplica��o dos 3 em uma vari�vel
    //exiba a vari�vel

    int num1, num2, num3, resultado;

    printf("\nDigite 3 n�meros:\n");
    scanf("%d %d %d",&num1, &num2, &num3);

    resultado=num1*num2*num3;

    printf("\Resultado �: %d\n", resultado);

    return 0;
}
