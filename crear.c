#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE* archivo;

    archivo = fopen("/home/batata/Desktop/code/C/printefes/prueba_archivos_binarios/archivo/fulbo.dat", "w");

    printf("El archivo ha sido creado. \n");
    
    return 0;
}