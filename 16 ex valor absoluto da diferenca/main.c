#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //para usar acentos
    setlocale(LC_ALL,"");

    //crie um algoritmo que leia 2 notas e mostre o valor absoluto diferença entre elas

    float nota1 = 0.0, nota2 = 0.0, media = 0.0;

    printf("\nDigite a primeira nota: ");
    scanf("%f",&nota1);

    printf("\Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("\nA diferença entre os dois é: %d", abs(nota1-nota2));

    return 0;
}
