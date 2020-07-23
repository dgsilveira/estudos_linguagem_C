#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    //informe se o número é primo ou não
    //>1
    //divide por 1 ou ele mesmo
    //não termina com 0,2,4,6 e 8
    //não termina com 5
    //não soma for divisível por 3
    //não pode ser divisível por 7
    //ou seja pode ter somente 2 divisões com resto 0, se houver mais, significa que não é primo
    //para ter mais detalhes é necessário testar todos os argumentos dos comentários (não é o caso)

    int num=0, i=0, conta=0;
    printf("\n|************MENU************|");
    printf("\n|Digite um número maior que 1|");
    printf("\n|para verificar se é primo.  |");
    printf("\n|Ou digite 1 para sair       |");
    printf("\n|****************************|\n");
    scanf("%d",&num);

    while(num != 1){
        if(num>1){
            conta=0;
            for(i=1;i<=num;i++){
                //conferir se houve divisibilidade exata
                if(num%i == 0){
                    conta++;
                }
            }
            if(conta==2){
                printf("\n%d é um número primo.\n", num);
            }else{
                printf("\n%d não é um número primo.\n", num);
            }

        }else{
            printf("\n%d é menor do que 1.\n", num);
        }
        printf("\n|************MENU************|");
        printf("\n|Digite um número maior que 1|");
        printf("\n|para verificar se é primo.  |");
        printf("\n|Ou digite 1 para sair       |");
        printf("\n|****************************|\n");
        scanf("%d",&num);
    }

    printf("\nSaindo...\n");




    return 0;
}
