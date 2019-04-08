#include <stdio.h>
#include <stdlib.h>
#define CANT 5

int main(){

    int vec[CANT]={2,7,6,3,8},i,j,aux;

    for (i=0;i<CANT-1;i++){
        for (j=0;j<CANT-1;j++){
            if (vec[i]>vec[j]){

                aux=vec[i];
                vec[i]=vec[j];
                vec[j]=aux;
            }
        }
    }

}
