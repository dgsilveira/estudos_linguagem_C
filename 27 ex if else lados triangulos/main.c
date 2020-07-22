#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    //leia 3 lados do triângulo
    //defina o triângulo
    //equilátero, isósceles, escaleno

    int a, b, c;

    printf("\nDigite os 3 lados do triângulo:\n");
    scanf("%d %d %d", &a, &b, &c);

    if((a==b) && (b==c) && (a!=0) && (b!=0) && (c!=0)){
        printf("\nTriângulo equilátero\n");
    }else if((a==b) && (b!=c) && (a!=0) && (b!=0) && (c!=0)){
        printf("\nTriângulo isósceles\n");
    }else if ((a!=0) && (b!=0) && (c!=0)){
        printf("\nTriângulo escaleno\n");
    }else{
        printf("\nNão existe triângulo com lado igual a ZERO\n");
    }
    return 0;
}
