#include <stdio.h>
#include <stdlib.h>

int main(void){
    // PUNTERO A ARCHIVO: FILE* archivo
    FILE* archivo;

    // PARA ABRIR UN ARCHIVO, SE USA fopen(path absoluto, modo de apertura) Y SE LO ASIGNA AL PUNTERO
    // LOS MODOS DE APERTURA SON:
    // "r" = leer. el archivo debe existir antes.
    // "w" = escribir. el archivo se crea en el momento de ejecucion. si ya existia uno se reemplaza.
    // "a" = append. se agrega contenido al final del archivo.
    // "r+" = read+. se abre un archivo ya existente tanto para leer como para escribir.
    // "w+" = write+. se crea un archivo y se puede tanto leer como escribir.
    // "a+" = append+. se abre un archivo ya existente y se puede leer o agregar al final.
    archivo = fopen("archivo/fulbo.dat", "w");

    printf("El archivo ha sido creado. \n");
    
    return 0;
}