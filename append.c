#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE* archivo;

    // se abre el archivo en a para escribir al final del archivo
    archivo = fopen("archivo/fulbo.dat", "a");

    printf("El archivo ha sido abierto. \n");

    int *a = malloc(sizeof(int));

    printf("ingrese el valor a añadir en fulbo.dat: ");
    scanf("%i", a);

    fwrite(a, 1, sizeof(int), archivo);

    return 0;
}