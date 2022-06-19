#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE* archivo;

    archivo = fopen("/home/batata/Desktop/code/C/printefes/prueba_archivos_binarios/archivo/fulbo.dat", "r");

    printf("El archivo ha sido abierto. \n");

    int *leido = malloc(sizeof(int));

    fread(leido, 1, sizeof(int), archivo);

    printf("*leido = %i \n", *leido);

    return 0;
}