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

    int resp;

    if(n==1)
    return 1;//cuando se ingrese 1 retorna 1, cuando llegue a n-1=1, retorna 1
    //pero despuès, me quedan 3 ejecuciones(si cargo 3 por ej) de la funcion detenidas
    //despuès empieza a retornar, liberando memoria en cada funcion que retorna
    //hasta llegar al return (resp) que va a dar 6

    resp=n* factorial(n-1);//acá la vuelve a llamar a la funciòn factorial y
    //se vuelve a ejecutar en otra parte de la memoria
    //cuantas veces correspondan por el valor ingresado
    return (resp);// PUEDE SER CON O SIN PARENTESIS, O SEA: return resp;
}
