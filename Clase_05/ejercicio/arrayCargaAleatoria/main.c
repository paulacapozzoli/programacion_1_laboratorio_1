#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void main(void)
{
    int edad[MAX],i,leg,contador;
    float sueldo[MAX],suma=0,prom,aux;
    char seguir;

    for(i=0;i<MAX;i++)
    {
        edad[i]=0;
        sueldo[i]=0;
    }
    do
    {
        printf("Ingrese Legajo");
        scanf("%d",&leg);
        printf("Ingrese Edad");
        scanf("%d",&edad[leg-1]);
        printf("Ingrese el sueldo");
        scanf("%f",&aux);
        sueldo[i]=aux;
        contador++;
        suma=suma+sueldo[i];
        prom=suma/contador;
        printf("Desea ingresar otro dato S/N?");
        fflush(stdin);
        scanf("%c",&seguir);
}while(seguir=='s');

printf("El sueldo promedio es %.2f",prom);
}

