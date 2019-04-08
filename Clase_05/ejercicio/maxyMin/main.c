#include <stdio.h>
#include <stdlib.h>
#define CANT 5

int main(){
    int nota[CANT],i,min=0,max=0;

    for(i=0;i<CANT;i++){
        printf("Ingrese una nota \n");
        scanf("%d",&nota);

        if(i==0||nota[i]>max){

            max=nota[i];
        }
        if (i==0||nota[i]<min){

            min=nota[i];
        }
    }

    printf ("La nota maxima es: %d\n",max);
    printf ("La nota minima es: %d\n",min);


}
