#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //respon�vel por alimentar o rand de forma diferente
    srand((unsigned)time(NULL));

    //vari�vel que recebe o numero
    int aleatorio = rand();

    //imprime o valor
    printf("%d\n", aleatorio);

    //vari�vel que recebe o resto da divis�o do n�mero por 3 (aleat�rio entre 0 e 2)
    int aleatorioSegundo = rand() % 3;

    //imprime o valor
    printf("%d\n", aleatorioSegundo);

    //vari�vel que recebe o resto da divis�o do n�mero por 5 (aleat�rio entre 0 e 4)
    int aleatorioTerceiro = rand() % 5;

    //imprime o valor
    printf("%d\n", aleatorioTerceiro);

    return 0;
}
