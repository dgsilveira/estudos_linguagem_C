#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //para usar acentos
    setlocale(LC_ALL,"");

    //crie um algoritmo que leia 2 notas
    //e mostre a média entre elas

    float a = 0.0, b = 0.0, media = 0.0;
    printf("\nDigite a primeira nota");
    scanf("%f",&a);

    printf("\Digite a segunda nota");
    scanf("%f", &b);

    media=(a+b)/2;

    printf("A media entre %.2f e %.2f = %.2f", a, b, media);

    return 0;
}
