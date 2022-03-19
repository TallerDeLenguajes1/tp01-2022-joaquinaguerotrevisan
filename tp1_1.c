// ---------- librerias

#include <stdio.h>

// ----------  main

int main(){

    printf("\n----- HOLA MUNDO -----\n\n");

    // Variables
    int *punt;
    int var = 10;
    punt = &var;

    // Prints
    printf("    - El contenido del puntero: %p \n", punt);
    printf("    - La direccion de memoria almacenada por el puntero: %p \n", punt);
    printf("    - La direccion de memoria de la variable: %p \n", &var);
    printf("    - La direccion de memoria del puntero: %p \n", &punt);
    printf("    - El tamano de memoria utilizado por esa variable: %d \n\n",sizeof(var));

    printf("----------------------\n\n");


    return 0;
}