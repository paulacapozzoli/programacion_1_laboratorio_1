#include <stdio.h>
#include <stdlib.h>

int suma (int OP1, int OP2); //declaraci�n o PROTOTIPO de la funci�n
//int OP1, int OP2 son par�metros formales, representa una rigurosidad

int main(){
    int n1,n2,result;
    printf("Numero1: ");
    scanf("%d", &n1);
    printf("Numero2: ");
    scanf("%d", &n2);
    result=suma(n1,n2);//LLAMADA A LA FUNCI�N
    printf("La suma es: %d", result);
    return 0;
}

int suma (int OP1, int OP2){//aca tmb es declaraci�n de variables
//int OP1, int OP2 tambi�n ac�, son par�metros formales, representa una rigurosidad
    int res;
    res=OP1+OP2;
    return res;
    //todo esto es el CUERPO, DESARROLLO O DEFINICI�N
    }
