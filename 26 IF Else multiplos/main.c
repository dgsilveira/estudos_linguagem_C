#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    int num;
    printf("\nDigite um n�mero:\n");
    scanf("%d", &num);

    if(num > 5 && num < 14){
        printf("\nO n�mero est� entre 5 e 14");
    }

    if(num < 5 || num > 14){
        printf("\nO n�mero � menor que 5 ou maior que 14");
    }

    if((num == 5 || num == 14) && (num%2==1)){
        printf("\nO n�mero � 5");
    }

    if((num == 5 || num == 14) && (num%2==0)){
        printf("\nO n�mero � 14");
    }





    return 0;
}
