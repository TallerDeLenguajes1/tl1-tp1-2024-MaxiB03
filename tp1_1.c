#include <stdio.h>
#include <stdlib.h>

int main() 
{
    printf("hola mundo\n");
    int aux=10;
    int *puntero;

    puntero=&aux;

    //Mostrar Contenido del puntero
    printf("Contenido del puntero: %d\n", *puntero);

    //Mostrar la Direccion de memoria almacenada por el puntero
    printf("Direccion de memoria almacenada por el puntero: %p\n", puntero);

    //Mostrar Direccion de memoria de la variable
    printf("Direccion de memoria de la variable: %p\n",&aux);

    //Mostrar Direccion de memoria del puntero
    printf("Direccion de memoria del puntero: %p\n",&puntero);

    //Mostrar el tamanio de la memoria utilizado por la variable
    printf("tamanio de la variable: %d", sizeof(aux));

    return 0;
}