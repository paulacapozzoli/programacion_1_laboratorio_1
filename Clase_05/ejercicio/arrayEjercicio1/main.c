#include <stdio.h>
#include <stdlib.h>
#define CANT 50

int main(){
    int datos [50];
    int i;

    for(i=0;i<CANT;i++){
        printf("Edad:\n");
        scanf("%d",&datos[i]);
    }

    for (i=0;i<CANT;i++){
        printf("%d\n",datos[i]);
    }
}
