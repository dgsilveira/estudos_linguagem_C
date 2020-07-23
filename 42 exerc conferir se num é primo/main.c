#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    //informe se o n�mero � primo ou n�o
    //>1
    //divide por 1 ou ele mesmo
    //n�o termina com 0,2,4,6 e 8
    //n�o termina com 5
    //n�o soma for divis�vel por 3
    //n�o pode ser divis�vel por 7
    //ou seja pode ter somente 2 divis�es com resto 0, se houver mais, significa que n�o � primo
    //para ter mais detalhes � necess�rio testar todos os argumentos dos coment�rios (n�o � o caso)

    int num=0, i=0, conta=0;
    printf("\n|************MENU************|");
    printf("\n|Digite um n�mero maior que 1|");
    printf("\n|para verificar se � primo.  |");
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
                printf("\n%d � um n�mero primo.\n", num);
            }else{
                printf("\n%d n�o � um n�mero primo.\n", num);
            }

        }else{
            printf("\n%d � menor do que 1.\n", num);
        }
        printf("\n|************MENU************|");
        printf("\n|Digite um n�mero maior que 1|");
        printf("\n|para verificar se � primo.  |");
        printf("\n|Ou digite 1 para sair       |");
        printf("\n|****************************|\n");
        scanf("%d",&num);
    }

    printf("\nSaindo...\n");




    return 0;
}
