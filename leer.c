#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE* archivo;

    // se lo abre en r porque solamente voy a leer lo que hay.
    archivo = fopen("archivo/fulbo.dat", "r");


    printf("El archivo ha sido abierto. \n");

    // aca voy a pegar la data leida
    int *leido = malloc(sizeof(int));

    // en esencia funciona igual que fwrite
    fread(leido, 1, sizeof(int), archivo);

    printf("*leido = %i \n", *leido);

    return 0;
}