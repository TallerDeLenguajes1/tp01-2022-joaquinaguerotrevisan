// ----------  libreria

#include <stdio.h>

// ----------  functions

int cuadradoNum(int numero);
void cuadradoNumNull(int numero);

// ----------  main

int main(){

    int numero, cuadrado, key;
    int *punt;

    printf("----- Cuadrado de un numero -----");

    do{

        printf("    Escriba un numero: ");
        scanf("%d", &numero);

    }while(numero<0 && numero>100);

    do{

        printf("    Escriba un 1 (int) o 0 (NULL): ");
        scanf("%d", &key);

    }while(key != 0 || key != 1);

    if(key == 1){

        cuadrado = cuadradoNum(numero);   

    } else {
        
        punt = &numero;
        cuadradoNumNull();

    }

    printf("    Cuadrado: %d", &cuadrado);

    printf("---------------------------------");


    return 0;
}

// ----------  functions

int cuadradoNum(int numero){

    numero = numero * numero;

    return numero;

}

void cuadradoNumNull(int numero){



}
