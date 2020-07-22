#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    //receba 3 notas e calcule a média entre elas
    //se maior que 7 informe que o aluno foi aprovado
    //do contrário reprovado

    int nota1, nota2, nota3;

    printf("\nInforme as 3 notas:\n");
    scanf("%d %d %d", &nota1, &nota2, &nota3);

    if((nota1+nota2+nota3)/3 >7){
        printf("\nAprovado");
    }else{
        printf("\nReprovado");
    }



    //para evitar fazer 2 arquivos, no mesmo código coloco detalhado uma segunda opção
    printf("\n\n\n###VERSÃO DETALHADA###");

    int valor1=0, valor2=0, valor3=0;

    float media = 0.0;

    printf("\nInforme a 1ª nota:\n");
    scanf("%d", &valor1);

    printf("\nInforme a 2ª nota:\n");
    scanf("%d", &valor2);

    printf("\nInforme a 3ª nota:\n");
    scanf("%d", &valor3);

    media = (valor1+valor2+valor3)/3;
    printf("\nMédia é: %.2f", media);

    if(media >= 7){
        printf("\nAprovado");
    }else{
        printf("\nReprovado");
    }



    printf("\n\n\n");
    return 0;
}
