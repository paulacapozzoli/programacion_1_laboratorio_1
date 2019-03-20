#include <stdio.h>
#include <stdlib.h>
int main(){
    char hora;//si es char, los cases van con comillas simples
    printf("Ingrese una hora: ");
    fflush(stdin);
    scanf("%c", &hora);

    switch (hora){
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
            printf("es de madrugada");
            break;
        case '6':
        case '7':
        case '8':
        case '9':
            printf("es de madrugada");
            break;
        case '10':
        case '11':
        case '12':
            printf("buen dia");
            break;
    }
    return 0;
}
