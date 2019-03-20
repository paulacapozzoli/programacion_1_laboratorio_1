#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //biblioteca para tipo char

int main(){
    int nro;
    int max;
    int min;
    int flag;

    flag=0;
    char rta;

    do {
       printf("Ingrese un nro: ");
       scanf ("%d", &nro);
       if (flag==0||nro>max){
            max=nro;
       }
       if (flag==0||nro<min){
            min=nro;
            flag=1;//a partir del segundo nro ya me va a comparar el primer nro cargado como max y lo mismo si es min
       }
       do {
           printf("Continuar?");
           fflush(stdin);
           scanf("%c", &rta);
           rta=toupper(rta);//pasa el valor de rta a MAYUSCULAS //si quiero pasar algo a MINUSCULAS uso: tolower
        }while (rta!='S'&&rta!='N');

    }while(rta=='S');

    system("cls");//limpia pantalla
    printf ("El nro maximo es %d\nEl nro minimo es %d",max,min);

    return 0;
}
