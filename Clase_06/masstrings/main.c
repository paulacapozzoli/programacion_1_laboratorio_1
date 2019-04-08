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
