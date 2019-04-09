#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void main()
{
    char nombre[21], apellido[31], apellidoNombre[52];

    printf("Ingrese su nombre\n");
    scanf("%s",nombre);
    printf("Ingrese su apellido\n");
    scanf("%s",apellido);

    strlwr(nombre);//paso nombre a minus
    strlwr(apellido);//paso apellido a minus

    nombre[0]=toupper(nombre[0]);//pasa a mayus el primer caracter (en la posicion 0)
    apellido[0]=toupper(apellido[0]);//pasa a mayus el primer caracter (en la posicion 0)

    //para limpiar antes de concatenar
    apellidoNombre[0]='\0'; //lo manda al principio para que arranque a concatenar del primer espacio

    //strcpy(apellidoNombre,apellido); es otra opcion para ocupar los primeros espacios

    strcat(apellidoNombre,apellido);//quiero que empiece con apellido, y como la memoria no esta limpia, puede empezar desde cualquier lugar por eso antes hice = '\0'
    strcat(apellidoNombre," ");//no poner comilla simple porque esto trabaja con cadenas
    strcat(apellidoNombre,nombre);

    printf("Su nombre y apellido es: %s",apellidoNombre);
}

/*strcat para concatenar cadenas de caracteres

strcat(cad1, cad2);

strcat(apellidoynombre, apellido);
declarar nombre apellido otra apellido y nombre, pedir cargar todo
pasar a minus el nombre el apellido, pasar a mayus inicial de ambos
en la variable apellidoynombre concatenar apellido, espacio y nombre
el sistema al concatenar no va a usar memoria limpia

concateno



*/
