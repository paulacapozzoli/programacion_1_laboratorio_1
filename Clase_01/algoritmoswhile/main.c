#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;//puede tener cualquier valor, por eso la inicializo luego con 0, por ejemplo
    i=0;

    while(i<10){
        i++;
        printf("%d\n", i);
    }
    return 0;
}
