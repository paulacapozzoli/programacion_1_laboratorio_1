#include <stdio.h>
#include <stdlib.h>

int factorial(int );

void main(void){

    int valor,result;

    printf("\nIngrese numero:");
    scanf("%d",&valor);

    result=factorial(valor);//podría no hacer esta llamada y en su lugar meter el algoritmo hecho con FOR
    /*arriba en int valor,result; remplazo por int resp=1,n;
    for (contador=n; contador>0; contador--){

        resp=resp*contador;
    }
    */

    printf("\nEl factorial de %d es %d",valor,result);
}
int factorial(int n){

    int resp=1,contador;//ojo con redeclarar lo que ya declaré en la primera línea de código

    for (contador=n; contador>0; contador--){//la i funciona como contador

        resp=resp*contador;
    }

    return (resp);
}
