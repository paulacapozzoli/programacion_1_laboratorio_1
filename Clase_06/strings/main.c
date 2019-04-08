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
void main(void){

    char texto[20];
    printf("\nIngrese el password: ");
    gets(texto);

    if(strcmp(texto,"1234")==0)
        printf("Password correcto");
    else
        printf("Password incorrecto");
}
void main(void){

    char texto1[20];
    char texto2[20];
    printf("\nIngrese una palabra: ");
    gets(texto1);

    strcpy(texto2,texto1);

    printf("Se ingreso:%s la copia es:%s",texto1,texto2);
}*/

#define MAX 10
void main(void){

    char vec[MAX];
    int i,x;

    printf("\ningrese nombre: ");
    gets(vec);
    x=strlen (vec);
    printf("\nla cantidad de letras es: %d ",x);
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







*/
