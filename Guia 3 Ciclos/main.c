#include <stdio.h>
#include <stdlib.h>

int main()
{

/*

1) Resolver los siguientes Ítems:
A continuación se muestra el siguiente fragmento de código. Lea con
atención y analice que muestra el programa: ……….
 Int i=0, j;
 while (i<4) {
 i++;
 printf “‘Estoy en el ciclo!!!!\n”);
 }
 j=100*i;
 printf(“‘El valor de j es %d”, j);
………

El fragmento de código dado muestra un ciclo while que se ejecuta mientras la variable i sea menor que 4. En cada iteración del ciclo, se incrementa el valor de i en 1 y se imprime el mensaje "Estoy en el ciclo!!!!" en una nueva línea.
Después de que el ciclo while se completa (es decir, cuando i alcanza el valor 4), se calcula el valor de la variable j multiplicando el valor final de i por 100. Luego, se imprime el mensaje "El valor de j es " seguido del valor de j.
En resumen, el programa muestra el mensaje "Estoy en el ciclo!!!!" cuatro veces (una vez por cada iteración del ciclo while) y luego muestra el valor de j que es igual a 400.

/**********************************************************************************************************************************************/

/*
2) Realizar un programa en C utilizando estructuras de repetición condicional
para resolver cada o de los siguientes items:
 Nota: N y K son números naturales, ambas son variables de entrada
(teclado).
• Mostrar por pantalla los 10 primeros números naturales.
• Mostrar por pantalla los N primeros números pares.
• Calcular y mostrar por pantalla la suma de los N primeros múltiplos de K.
• Mostrar por pantalla los números enteros que se encuentran
comprendidos en el intervalo [–K … K] en orden ascendente y luego en
orden descendente.
• Mostrar por pantalla los términos de la sucesión 1,3,6,10,15,21,28…..
que sean menores al número K.
• Calcular el promedio de N números

Respuestas

#include <stdio.h>

int main() {
    int N, K;

    // Mostrar los 10 primeros números naturales
    printf("Los 10 primeros números naturales son:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    // Mostrar los N primeros números pares
    printf("Ingrese el valor de N para mostrar los primeros N números pares: ");
    scanf("%d", &N);
    printf("Los primeros %d números pares son:\n", N);
    int numPares = 2;
    for (int i = 1; i <= N; i++) {
        printf("%d ", numPares);
        numPares += 2;
    }
    printf("\n\n");

    // Calcular y mostrar la suma de los N primeros múltiplos de K
    printf("Ingrese el valor de N: ");
    scanf("%d", &N);
    printf("Ingrese el valor de K: ");
    scanf("%d", &K);
    int sumaMultiplos = 0;
    int contador = 0;
    for (int i = 1; contador < N; i++) {
        if (i % K == 0) {
            sumaMultiplos += i;
            contador++;
        }
    }
    printf("La suma de los %d primeros múltiplos de %d es: %d\n\n", N, K, sumaMultiplos);

    // Mostrar los números enteros en el intervalo [-K, K] en orden ascendente y descendente
    printf("Los números enteros en el intervalo [-%d, %d] en orden ascendente son:\n", K, K);
    for (int i = -K; i <= K; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    printf("Los números enteros en el intervalo [-%d, %d] en orden descendente son:\n", K, K);
    for (int i = K; i >= -K; i--) {
        printf("%d ", i);
    }
    printf("\n\n");

    // Mostrar los términos de la sucesión 1, 3, 6, 10, 15, 21, 28... que sean menores a K
    printf("Ingrese el valor de K: ");
    scanf("%d", &K);
    printf("Los términos de la sucesión menores a %d son:\n", K);
    int termino = 1;
    int numero = 2;
    while (termino < K) {
        printf("%d ", termino);
        termino += numero;
        numero++;
    }
    printf("\n\n");

    // Calcular el promedio de N números
    printf("Ingrese el valor de N: ");
    scanf("%d", &N);
    int suma = 0;
    int numeroIngresado;
    for (int i = 1; i <= N; i++) {
        printf("Ingrese el número %d: ", i);
        scanf("%d", &numeroIngresado);
        suma += numeroIngresado;
    }
    float promedio = (float) suma / N;
    printf("El promedio de los %d números ingresados es: %.2f\n", N, promedio);

    return 0;
}

/**********************************************************************************************************************************************/

/*
3) Escriba un programa en C que escriba la suma de los N primeros números impares.

#include <stdio.h>

int main() {
    int N;
    int suma = 0;

    printf("Ingrese el valor de N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        suma += 2 * i - 1;
    }

    printf("La suma de los primeros %d números impares es: %d\n", N, suma);

    return 0;
}

/**********************************************************************************************************************************************/

/*
4) Calcular la potencia de x elevado a y (x^y).

#include <stdio.h>

int main() {
    int x, y;
    int resultado = 1;

    printf("Ingrese el valor de x: ");
    scanf("%d", &x);
    printf("Ingrese el valor de y: ");
    scanf("%d", &y);

    for (int i = 0; i < y; i++) {
        resultado *= x;
    }

    printf("%d elevado a %d es igual a %d\n", x, y, resultado);

    return 0;
}

/**********************************************************************************************************************************************/

/*
5) Escriba un programa en C que permita determinar si un numero entero Z es primo o no lo es.

#include <stdio.h>

int main() {
    int Z;
    int esPrimo = 1;

    printf("Ingrese un número entero: ");
    scanf("%d", &Z);

    if (Z <= 1) {
        esPrimo = 0;
    } else {
        for (int i = 2; i <= Z / 2; i++) {
            if (Z % i == 0) {
                esPrimo = 0;
                break;
            }
        }
    }

    if (esPrimo) {
        printf("%d es un número primo\n", Z);
    } else {
        printf("%d no es un número primo\n", Z);
    }

    return 0;
}

/**********************************************************************************************************************************************/

/*
6) Realizar programas en C que permitan resolver los siguientes problemas:
• Se leen un conjunto de números decimales distintos de cero cuya cantidad no se
conoce a priori. Se pide calcular el promedio de los números que se encuentran
entre un valor A y otro B sin tenerlos en cuenta.
Nota: A y B son datos de tipo numérico float, A<B y no necesariamente figuran
dentro del conjunto de datos.
Ej: A=3.5 , B=6.5
Conjunto=2, 4, 5.5, 7, 3.5, 5.5, 1.25, 0 promedio =5

#include <stdio.h>

int main() {
    float A, B;
    float numero;
    float suma = 0;
    int cantidad = 0;

    printf("Ingrese el valor de A: ");
    scanf("%f", &A);
    printf("Ingrese el valor de B: ");
    scanf("%f", &B);

    printf("Ingrese los números decimales (0 para finalizar):\n");

    while (scanf("%f", &numero) == 1 && numero != 0) {
        if (numero > A && numero < B) {
            suma += numero;
            cantidad++;
        }
    }

    if (cantidad > 0) {
        float promedio = suma / cantidad;
        printf("El promedio de los números entre %.2f y %.2f es %.2f\n", A, B, promedio);
    } else {
        printf("No se ingresaron números dentro del rango especificado\n");
    }

    return 0;
}

Este programa lee un conjunto de números decimales distintos de cero hasta que se ingrese el valor 0. Luego, calcula el promedio de los números que se encuentran entre los valores A y B (sin incluirlos) y muestra el resultado. Si no se ingresaron números dentro del rango especificado, se mostrará un mensaje indicando esto.

/**********************************************************************************************************************************************/

/*
7) Ingresar un texto, Este finaliza al ingresarse un asterisco ‘*’, y contar la cantidad de
palabras que el mismo contiene. (El texto debe leerse dentro de una estructura de
repetición carácter a carácter). Considerar como separadores a: “.” , “,” y “ ”

#include <stdio.h>

int main() {
    char caracter;
    int cantidadPalabras = 0;
    int enPalabra = 0;

    printf("Ingrese un texto (finaliza con asterisco '*'):\n");

    while (1) {
        scanf("%c", &caracter);

        if (caracter == '*') {
            break;
        }

        if (caracter == ' ' || caracter == '.' || caracter == ',') {
            enPalabra = 0;
        } else if (enPalabra == 0) {
            enPalabra = 1;
            cantidadPalabras++;
        }
    }

    printf("La cantidad de palabras en el texto ingresado es: %d\n", cantidadPalabras);

    return 0;
}

Este programa lee un texto ingresado carácter a carácter y cuenta la cantidad de palabras que contiene. El texto se lee dentro de un bucle infinito que se rompe cuando se ingresa un asterisco '*'. Dentro del bucle, se verifica si cada carácter es un separador (' ', '.', ',') o si es parte de una palabra. Si se encuentra un separador y la variable enPalabra es igual a 1, significa que se completó una palabra y se incrementa el contador cantidadPalabras. Al final, se muestra la cantidad de palabras encontradas en el texto ingresado.


/**********************************************************************************************************************************************/

/*
8) Realizar un programa que lea por teclado una indeterminada cantidad de números
decimales, el fin de datos está indicado por el ingreso de un (0) cero, y calcular:
• El mínimo valor ingresado
• El máximo valor ingresado
• El promedio de los valores ingresados

#include <stdio.h>

int main() {
    float numero;
    float minimo = 0;
    float maximo = 0;
    float suma = 0;
    int cantidad = 0;

    printf("Ingrese los números decimales (0 para finalizar):\n");

    while (1) {
        scanf("%f", &numero);

        if (numero == 0) {
            break;
        }

        if (cantidad == 0) {
            minimo = numero;
            maximo = numero;
        } else {
            if (numero < minimo) {
                minimo = numero;
            }
            if (numero > maximo) {
                maximo = numero;
            }
        }

        suma += numero;
        cantidad++;
    }

    if (cantidad > 0) {
        float promedio = suma / cantidad;
        printf("El mínimo valor ingresado es %.2f\n", minimo);
        printf("El máximo valor ingresado es %.2f\n", maximo);
        printf("El promedio de los valores ingresados es %.2f\n", promedio);
    } else {
        printf("No se ingresaron números\n");
    }

    return 0;
}

Este programa lee una cantidad indeterminada de números decimales hasta que se ingrese el valor 0. Luego, calcula el mínimo valor, el máximo valor y el promedio de los valores ingresados. Si no se ingresaron números, se mostrará un mensaje indicando esto. Al finalizar, se muestra el resultado obtenido.

/**********************************************************************************************************************************************/

/*
9) Leer un valor N de tipo entero e ingresar esa cantidad (N) de caracteres por teclado,
contar la cantidad de letras “B” “M” “P” y “R” que se hayan leído utilizando
preferentemente la sentencia switch. El programa debe informar lo siguiente:
Cantidad de “B” =
Cantidad de “M” =
Cantidad de “P” =
Cantidad de “R” =

#include <stdio.h>

int main() {
    int N;
    char caracter;
    int cantidadB = 0, cantidadM = 0, cantidadP = 0, cantidadR = 0;
    int i;

    printf("Ingrese la cantidad de caracteres a ingresar: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("Ingrese el caracter %d: ", i + 1);
        scanf(" %c", &caracter);

        switch (caracter) {
            case 'B':
            case 'b':
                cantidadB++;
                break;
            case 'M':
            case 'm':
                cantidadM++;
                break;
            case 'P':
            case 'p':
                cantidadP++;
                break;
            case 'R':
            case 'r':
                cantidadR++;
                break;
        }
    }

    printf("Cantidad de \"B\" = %d\n", cantidadB);
    printf("Cantidad de \"M\" = %d\n", cantidadM);
    printf("Cantidad de \"P\" = %d\n", cantidadP);
    printf("Cantidad de \"R\" = %d\n", cantidadR);

    return 0;
}

Este programa permite ingresar un valor entero N y luego ingresar N caracteres por teclado. Luego, utiliza la sentencia switch para contar la cantidad de letras "B", "M", "P" y "R" que se hayan leído. Finalmente, imprime la cantidad de cada una de las letras contadas.

}
