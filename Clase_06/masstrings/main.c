#include <stdio.h>
#include <stdlib.h>

void main()
{
    char nombre[41];

    printf("Ingrese su nombre\n");
    fflush(stdin);
    gets(nombre);
    //scanf("%s", nombre);corta el ingreso si dejo un espacio
    printf("Su nombre es: %s",nombre);//solo imprime el primer nombre porque no toma espacios
}
//la solucion es utilizar: gets (nombre); no la vamos a usar
//gets existe solamente para Microsoft,
//con lo cual no sirve para el resto de los SO
//ademas tiene problemas de seguridad, causa
//vulnerabilidad en nuestro sistema

//podemos generar nuestra propia funcion

/*
*   fgets
*   sirve para varias cosas, y controlar de no
excederme de la cantidad de caracteres declaradas
*


