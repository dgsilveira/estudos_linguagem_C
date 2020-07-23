#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //responável por alimentar o rand de forma diferente
    srand((unsigned)time(NULL));

    //variável que recebe o numero
    int aleatorio = rand();

    //imprime o valor
    printf("%d\n", aleatorio);

    //variável que recebe o resto da divisão do número por 3 (aleatório entre 0 e 2)
    int aleatorioSegundo = rand() % 3;

    //imprime o valor
    printf("%d\n", aleatorioSegundo);

    //variável que recebe o resto da divisão do número por 5 (aleatório entre 0 e 4)
    int aleatorioTerceiro = rand() % 5;

    //imprime o valor
    printf("%d\n", aleatorioTerceiro);

    return 0;
}
