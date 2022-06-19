#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE* archivo;

    // se lo abre en r porque solamente voy a leer lo que hay.
    archivo = fopen("archivo/fulbo.dat", "r");
    int posicion = 0;

    printf("El archivo ha sido abierto. \n");

    printf("Ingrese la posicion a la cual desea ir: ");
    scanf("%i", &posicion);

    // fseek(puntero a archivo, cantidad de posiciones a desplazar, modo de busqueda de posicion)
    // modos de busqueda:
    // SEEK_SET: busca desde el principio
    // SEEK_CUT: busca desde la posicion actual del puntero
    // SEEK_END: fin de archivo ( no se como se usa este xD )
    fseek(archivo, sizeof(int) * posicion, SEEK_SET);

    
    int *leido = malloc(sizeof(int));

    fread(leido, 1, sizeof(int), archivo);

    printf("*leido = %i \n", *leido);

    return 0;
}