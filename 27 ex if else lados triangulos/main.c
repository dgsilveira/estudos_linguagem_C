#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    //leia 3 lados do tri�ngulo
    //defina o tri�ngulo
    //equil�tero, is�sceles, escaleno

    int a, b, c;

    printf("\nDigite os 3 lados do tri�ngulo:\n");
    scanf("%d %d %d", &a, &b, &c);

    if((a==b) && (b==c) && (a!=0) && (b!=0) && (c!=0)){
        printf("\nTri�ngulo equil�tero\n");
    }else if((a==b) && (b!=c) && (a!=0) && (b!=0) && (c!=0)){
        printf("\nTri�ngulo is�sceles\n");
    }else if ((a!=0) && (b!=0) && (c!=0)){
        printf("\nTri�ngulo escaleno\n");
    }else{
        printf("\nN�o existe tri�ngulo com lado igual a ZERO\n");
    }
    return 0;
}
