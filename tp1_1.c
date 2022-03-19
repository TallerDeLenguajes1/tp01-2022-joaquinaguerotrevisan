// ---------- librerias

#include <stdio.h>

// ----------  main

int main(){

    printf("----- HOLA MUNDO -----\n");

    int *punt;
    int var = 10;

    punt = &var;

    printf("- El contenido del puntero: %p \n", punt);
    printf("- La direccion de memoria almacenada por el puntero: %p \n", punt);
    printf("- La direccion de memoria de la variable: %p \n", &var);
    printf("- La direccion de memoria del puntero: %p \n", &punt);

    printf("- El tamano de memoria utilizado por esa variable: %d \n",sizeof(var));

    return 0;
}