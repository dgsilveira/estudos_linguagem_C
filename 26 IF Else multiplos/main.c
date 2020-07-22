#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    int num;
    printf("\nDigite um número:\n");
    scanf("%d", &num);

    if(num > 5 && num < 14){
        printf("\nO número está entre 5 e 14");
    }

    if(num < 5 || num > 14){
        printf("\nO número é menor que 5 ou maior que 14");
    }

    if((num == 5 || num == 14) && (num%2==1)){
        printf("\nO número é 5");
    }

    if((num == 5 || num == 14) && (num%2==0)){
        printf("\nO número é 14");
    }





    return 0;
}
