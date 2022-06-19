#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE* archivo;

    archivo = fopen("/home/batata/Desktop/code/C/printefes/prueba_archivos_binarios/archivo/fulbo.dat", "r+");

    printf("El archivo ha sido abierto. \n");

    int *a = malloc(sizeof(int));

    printf("ingrese el valor a guardar en fulbo.dat: ");
    scanf("%i", a);

    fwrite(a, 1, sizeof(int), archivo);
    
    return 0;
}