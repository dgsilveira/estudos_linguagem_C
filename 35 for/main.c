#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i;

    for(i=1;i<=10;i++){
        printf("\n%d",i);
    }

    for(i=1;i<=10;i++){
        printf("\n5 x i = %d",5*i);
    }

    for(i=0;i<=20;i=i+2){
        printf("\n%d",i);
    }
    return 0;
}
