#include <stdio.h>
#include <stdlib.h>

int suma (int OP1, int OP2); //declaración o PROTOTIPO de la función
//int OP1, int OP2 son parámetros formales, representa una rigurosidad

int main(){
    int n1,n2,result;
    printf("Numero1: ");
    scanf("%d", &n1);
    printf("Numero2: ");
    scanf("%d", &n2);
    result=suma(n1,n2);//LLAMADA A LA FUNCIÓN
    printf("La suma es: %d", result);
    return 0;
}

int suma (int OP1, int OP2){//aca tmb es declaración de variables
//int OP1, int OP2 también acá, son parámetros formales, representa una rigurosidad
    int res;
    res=OP1+OP2;
    return res;
    //todo esto es el CUERPO, DESARROLLO O DEFINICIÓN
    }
