#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE* archivo;

    // se lo abre en r porque solamente voy a leer lo que hay.
    archivo = fopen("archivo/fulbo.dat", "r");
    int* leido = malloc(sizeof(int));

    fread(leido, 1, sizeof(int), archivo);
    while(!feof(archivo)){
        printf("lei %i \n", *leido);
        fread(leido, 1, sizeof(int), archivo);
    }  

    return 0;
}