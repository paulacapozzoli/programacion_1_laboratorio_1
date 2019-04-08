#include <stdio.h>
#include <stdlib.h>
#define CANT 2

int main(){

    int datos [2];
    int i;
    int legajo [CANT];
    int nota1 [CANT];
    int nota2 [CANT];
    int nota3 [CANT];

    for(i=0;i<CANT;i++){ //i es el contador

        printf("Legajo:\n");
        scanf("%d",&legajo[i]);
        printf("Nota 1:\n");
        scanf("%d",&nota1[i]);
        printf("Nota 2:\n");
        scanf("%d",&nota2[i]);
        printf("Nota 3:\n");
        scanf("%d",&nota3[i]);
    }

    for (i=0;i<CANT;i++){
        printf("%d\n",legajo[i]);
        printf("%d\n",nota1[i]);
        printf("%d\n",nota2[i]);
        printf("%d\n",nota3[i]);
    }
}
