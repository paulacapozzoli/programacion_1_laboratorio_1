#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char buffer[64];
    int cantidad;

    printf("Nombre: ");
    //fgets(buffer, 62, stdin);
    fgets(buffer,sizeof(buffer)-2,stdin);//3 parametros:
    /*
    sizeof: es un operador binario que recibe un tipo de dato o variable
    y nos dice la cant de bytes que ocupa el tipo de dato o la variable
    (buffer)-2: asegura que puedo escribir solo hasta 62 caracteres
    stdin: es el standard de teclado, le indica ¿desde donde trabajo
    todo esto?
    */

    cantidad = strlen(buffer);//strlen devuelve cantidad de caracteres que tiene una cadena, sin contar el finalizador, y lo asigna a 'cantidad'

    buffer[cantidad-1] = '\0';//aca a buffer se le resta uno, por el caracter especial que lo va a contar si no le resto 1 y asigno '\0' al caracter especial

    printf("%s", buffer);

    return 0;
}
/*
*si escribo juan con fgets, va a tomar
*los 4 caracteres validos, luego coloca
*un caracter especial que no forma parte de la
*cadena y recien despues el terminador de
*caracteres luego tengo que ver como hacer para
*que no imprima el caracter especial le tengo que
*restar 2 para no desbordar en 2 de caracteres
*si uso fgets tengo que pensar siempre en 2
*caracteres extra fgets ES MULTIPLATAFORMA,
*puedo usarlo en cualquier ambiente tampoco tiene
*problemas de vulnerabilidad como gets
*puedo hacer funcion que se llame por ej getString
*le paso una cadena y luego este código que vimos arriba
*/
