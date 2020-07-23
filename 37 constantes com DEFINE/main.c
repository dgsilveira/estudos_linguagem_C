#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

int main()
{
    setlocale(LC_ALL,"");
    printf("\nConstante TAM é %d\n", TAM);

    int i;

    for(i=1; i<=TAM;i++){
        printf("%d ", i);
    }

    return 0;
}
