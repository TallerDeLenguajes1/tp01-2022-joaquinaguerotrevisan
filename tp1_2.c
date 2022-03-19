// ----------  librerias

#include <stdio.h>
#include <math.h>

// ----------  functions

int cuadradoNum(int numero1);
void cuadradoNumNull(int *puntNumero2);

void direccionContenido(int *punt);

void invertir(int *punta, int *puntb);
void order(int *puntc, int *puntd);

// ----------  main

int main(){

    int *puntNumero2, *punt, *punta, *puntb, *puntc, *puntd;
    int numero1, numero2, var, a, b, c, d;
    
    printf("\n-------------- FUNCIONES --------------\n\n");

    printf(" - Ingrese los siguientes numeros:\n\n");

    // Función Punto 3.a) --------------
    do
    {
        printf("    Ingrese numero1: ");
        scanf("%d", &numero1);        
    } while (numero1<0 || numero1>100);

    numero1 = cuadradoNum(numero1);
    printf("    Cuadrado de Numero1: %d\n\n", numero1);

    
    // Función Punto 3.b) --------------
    do
    {
        printf("    Ingrese numero2: "); 
        scanf("%d", &numero2);       
    } while (numero2<0 || numero2>100);

    puntNumero2 = &numero2;
    cuadradoNumNull(puntNumero2);
    printf("    Cuadrado de Numero2: %d\n\n", numero2);


    // Función Punto 3.c) --------------
    do
    {
        printf("    Ingrese var: ");      
        scanf("%d", &var);  
    } while (var<0 || var>100);

    punt = &var;
    direccionContenido(punt);


    // Función Punto 3.d) --------------
    do
    {
        printf("    Ingrese a: "); 
        scanf("%d", &a);       
    } while (a<0 || a>100);

    do
    {
        printf("    Ingrese b: ");  
        scanf("%d", &b);      
    } while (b<0 || b>100);

    punta = &a;
    puntb = &b;
    invertir(punta, puntb);

    // Función Punto 3.e) --------------
    do
    {
        printf("    Ingrese a: ");
        scanf("%d", &c);        
    } while (c<0 || c>100);

    do
    {
        printf("    Ingrese b: ");
        scanf("%d", &d);        
    } while (d<0 || d>100);

    puntc = &c;
    puntd = &d;
    order(puntc, puntd);


    printf("---------------------------------------\n\n");

    return 0;
}

// ----------  functions

int cuadradoNum(int numero1){

    numero1 = numero1*numero1;

    return numero1;
}

void cuadradoNumNull(int *puntNumero2){

    *puntNumero2 = (*puntNumero2)*(*puntNumero2);
}

void direccionContenido(int *punt){

    printf("    Direccion de var: %p\n", punt);
    printf("    Contenido de var: %d\n\n", *punt);
}

void invertir(int *punta, int *puntb){

    int aux = *punta;

    *punta = *puntb;
    *puntb = aux;

    printf("    - a (Valor menor): %d\n", *punta);
    printf("    - b (Valor mayor): %d\n\n", *puntb);
}

void order(int *puntc, int *puntd){

    if ((*puntc) != (*puntd))
    {
        if ((*puntc) > (*puntd))
        {
            /*
            int aux = *puntc;

            *puntc = *puntd;
            *puntd = aux;

            printf("    - c (Valor menor): %d\n", *puntc);
            printf("    - d (Valor mayor): %d\n\n", *puntd);
            */

           invertir(puntc, puntd);

        } else
        {
            printf("    - a (Valor menor): %d\n", *puntc);
            printf("    - b (Valor mayor): %d\n\n", *puntd);
        }
        
    } else
    {
        printf("Los valores de A y B son iguales...\n\n");
    }

}