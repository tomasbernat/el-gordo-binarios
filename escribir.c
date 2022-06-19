#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE* archivo;

    // se abre el archivo en r+ para poder escribir sin tener que crear el archivo.
    archivo = fopen("archivo/fulbo.dat", "r+");

    printf("El archivo ha sido abierto. \n");

    // en la direccion a la que apunta este puntero esta la data a escribir.
    int *a = malloc(sizeof(int));

    printf("ingrese el valor a guardar en fulbo.dat: ");
    scanf("%i", a);

    // fwrite(puntero con la data a escribir, cantidad de elementos que se van a escribir, tamanio en bytes, puntero al archivo);
    fwrite(a, 1, sizeof(int), archivo);
    
    return 0;
}