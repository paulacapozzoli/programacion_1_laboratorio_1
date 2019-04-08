#include <stdio.h>
#include <stdlib.h>

/*EJJEMPLO PASAJE POR VALOR
void muestra(int x, int y);

void main(void){

    int x, y;

    printf("Ingrese un numero entero ");
    scanf ("%d",&x);
    printf("Ingrese un numero entero ");
    scanf ("%d",&y);
    muestra (x,y);
    printf("\n-----valores dentro de main-----");
    printf("\nx vale %d \ny vale %d",x,y);
}

void muestra(int x, int y){
    x=y;
    printf("\n-----valores dentro de funcion-----");
    printf("\nx vale %d \ny vale %d",*x,y);
    }
*/

void muestra(int *x, int y);//agrego * tanto en prototipo como en la función y en la llamada[...]

void main(void){

    int x, y;

    printf("Ingrese un numero entero ");
    scanf ("%d",&x);
    printf("Ingrese un numero entero ");
    scanf ("%d",&y);
    muestra (& x,y);//no le pasa el valor de x de main, sino la direccion de memoria 0x100, pasaje por referencia
    printf("\n-----valores dentro de main-----");
    printf("\nx vale %d \ny vale %d",x,y);
}

void muestra(int *x, int y){//se declaran dos variables, x con la dir de memoria
    *x=y;//cuando hacemos esto, por ej y vale 5, y reemplaza el 3 que cargué (xej) en la x de main * ES OPERADOR DE INDIRECCION
    printf("\n-----valores dentro de funcion-----");
    printf("\nx vale %d \ny vale %d",*x,y);
    }
