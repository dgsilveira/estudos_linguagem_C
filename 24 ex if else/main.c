#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    //receba 3 notas e calcule a m�dia entre elas
    //se maior que 7 informe que o aluno foi aprovado
    //do contr�rio reprovado

    int nota1, nota2, nota3;

    printf("\nInforme as 3 notas:\n");
    scanf("%d %d %d", &nota1, &nota2, &nota3);

    if((nota1+nota2+nota3)/3 >7){
        printf("\nAprovado");
    }else{
        printf("\nReprovado");
    }



    //para evitar fazer 2 arquivos, no mesmo c�digo coloco detalhado uma segunda op��o
    printf("\n\n\n###VERS�O DETALHADA###");

    int valor1=0, valor2=0, valor3=0;

    float media = 0.0;

    printf("\nInforme a 1� nota:\n");
    scanf("%d", &valor1);

    printf("\nInforme a 2� nota:\n");
    scanf("%d", &valor2);

    printf("\nInforme a 3� nota:\n");
    scanf("%d", &valor3);

    media = (valor1+valor2+valor3)/3;
    printf("\nM�dia �: %.2f", media);

    if(media >= 7){
        printf("\nAprovado");
    }else{
        printf("\nReprovado");
    }



    printf("\n\n\n");
    return 0;
}
