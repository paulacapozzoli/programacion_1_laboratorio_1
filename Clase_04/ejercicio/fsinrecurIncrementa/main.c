#include <stdio.h>
#include <stdlib.h>

int factorial(int );

void main(void){

    int valor,result;

    printf("\nIngrese numero:");
    scanf("%d",&valor);

    result=factorial(valor);

    printf("\nEl factorial de %d es %d",valor,result);
}
int factorial(int n){

    int resp=1,contador;

    for (contador=1; contador<=n; contador++){

        resp=resp*contador;
    }

    return (resp);
}
