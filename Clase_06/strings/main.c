#include <stdio.h>
#include <string.h>
/*void main(void){

    char texto[20];
    printf("\nIngrese nombre: ");
    scanf("%s", texto);

    printf("\nNombre: %s ",texto);
}

void main(void){

    char texto[20];
    printf("\nIngrese nombre: ");
    gets(texto);

    printf("\nNombre: %s ",texto);
}

COMPARAR
void main(void){

    char texto[20];
    printf("\nIngrese el password: ");
    gets(texto);

    if(strcmp(texto,"1234")==0)
        printf("Password correcto");
    else
        printf("Password incorrecto");
}

*si ambas cadenas comparadas son iguales, devuelve 0
*si la primera es menor a la segunda, devuelve <0
*si la primera es mayor a la segunda, devuelve >0
*
*siempre la comparacion va de la primera cadena
*a la segunda
*una cadena es mayor a otra, en cuanto al orden alfabetico
*
*"hoja" y "hola" va caracter por caracter, moviendose a los siguientes
*hasta que encuentra que la j es menor que la l (porque j esta antes que la l
*por orden alfabetico
*
*"zoe" "zapato" en el segundo lugar a es mas
*pequeña que o con lo cual es independiente a
*la cantidad de letras porque al ordenarlo
*alfabeticamente, primero va zapato y despues zoe

*en la tabla de alt, se compara en funcion al nro
*en el que se encuentra el caracter:
*'a' 97
*'A' 65

por eso las cadenas de caracteres en mayusculas
son menores (mas pequeñas) que las cadenas de
caracteres en minusculas

strcmp es sensible a mayusculas y minusculas
strupr(nombre); convierte cadena completa a mayusculas
strlwr(nombre); convierte cadena completa a minusculas
**************************

void main(void){

    char texto1[20];
    char texto2[20];
    printf("\nIngrese una palabra: ");
    gets(texto1);

    strcpy(texto2,texto1);1er argumento, si o si debe ser una var, y no constante, el 2do argumento lo asigna a lo que està a la izq(la variable mencionada primero)

    printf("Se ingreso:%s la copia es:%s",texto1,texto2);
}

strcpy (a la derecha puede haber variable o constante, a la izq solo variable)

puts (me sirve solo para mostrar de forma literal) no muestra combinado texto y variable

usamos printf que es màs completo que el puts que solo muestra el contenido de la variable


al tener enter se debe limpiar el buffer

fflush(stdin);
printf ("%s", saludo);
printf ("El saludo diciendo %s", saludo);
printf ("El dijo Hola");

como tomo el dato por teclado?

scanf("%s", nombre); sin & porque es un vector (porque nombre equivale a &nombre[0])

*/

#define MAX 10
void main(void){

    char vec[MAX];
    int i,x;

    printf("\nIngrese nombre: ");
    gets(vec);
    x=strlen (vec);
    printf("\nLa cantidad de letras es: %d ",x);
}

/*
string no pertenece a C, porque los tipos de datos nativos son:
* void
* int
* char
* float
* double

para un caracter tengo el tipo de variable char

char letra; voy a tener el espacio de guardar
un solo caracter en esa variable

debemos fabricar nuestra cadena de caracteres
a traves de un vector del tio caracter (char)

char nombre[41];41 caracteres de forma consecutiva
pongo la cantidad aprox que puede tener un nombre
sumandole el finalizador de caracter '\0'
o sea que si quiero que entren hasta 40 letras,
son en total 41 caracteres. asi le digo al sistema
donde tiene que cortar el ingreso y que no se
imprima cualquier cosa en memoria, si sigo escribiendo
más de la cantidad indicada, se rompe el sistema.

char saludo[10]="hola"; (aca el terminador va implicito)
char saludo[10]={'h','o','l','a','\0'}; aca como es caracter a caracter debo poner el finalizador de forma explicita
char saludo[ ]="hola";
char menu [ ][3]={"Archivo","Nuevo","Abrir"};son 3 menu de x cant de caracteres c/u

al existir vector, no puedo decir
saludo="hola"; esta mal porque es un vector, solo
se hace al momento de declarar donde se va a guardar
ese vector (en la variable, al declararla)





*/
