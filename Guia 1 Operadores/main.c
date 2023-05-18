#include <stdio.h>
#include <stdlib.h>

int main()
{

/*1) ¿Cuál de los siguientes identificadores son válidos?
a) _MiVariable
b) switch
c) Registro1
d) 1Registro
e) M&m
f) @nombre
g) Do 15
h) 92
i) Nombre_y_Apellidos
j) Saldo_Actual
k) BBBBBBBB
l) * 143Edad

a) _MiVariable: Válido. Los identificadores pueden comenzar con un guión bajo.

b) switch: Inválido. "switch" es una palabra reservada en C y no puede usarse como identificador.

c) Registro1: Válido. Los identificadores pueden contener letras y números, pero no pueden comenzar con un número.

d) 1Registro: Inválido. Los identificadores no pueden comenzar con un número.

e) M&m: Inválido. Los identificadores no pueden contener caracteres especiales como "&".

f) @nombre: Inválido. Los identificadores no pueden comenzar con un símbolo como "@".

g) Do 15: Inválido. Los identificadores no pueden contener espacios.

h) 92: Inválido. Los identificadores no pueden consistir únicamente en números.

i) Nombre_y_Apellidos: Válido. Los identificadores pueden contener guiones bajos.

j) Saldo_Actual: Válido. Los identificadores pueden contener guiones bajos.

k) BBBBBBBB: Válido. Los identificadores pueden consistir en letras.

l) * 143Edad: Inválido. Los identificadores no pueden contener caracteres especiales como "*".


/**********************************************************************************************************************************************/

/*
2) Dada la siguiente secuencia de programa, indicar sus salidas: …………….
 int a=10,b=20;
 char c=120,d='G';
 printf("\t\n%d\n",a);
 printf("\t%d\n",b);
 printf("\n%c\n",c);
 printf("\n\t%d\n",c);
 printf("\t%c\n",d);
 printf("\t\nSu valor es….%d\n",d);


La salida del programa sería:

10
20
x
120
G
Su valor es....71

Explicación:

La primera instrucción printf("\t\n%d\n",a); muestra el valor de la variable a, que es 10.
La segunda instrucción printf("\t%d\n",b); muestra el valor de la variable b, que es 20.
La tercera instrucción printf("\n%c\n",c); muestra el carácter correspondiente al valor de la variable c, que es 'x' (el código ASCII 120 corresponde al carácter 'x').
La cuarta instrucción printf("\n\t%d\n",c); muestra el valor numérico de la variable c, que es 120.
La quinta instrucción printf("\t%c\n",d); muestra el valor de la variable d, que es 'G'.
La sexta instrucción printf("\t\nSu valor es....%d\n",d); muestra el valor numérico correspondiente al carácter 'G', que es 71 según el código ASCII.



/**********************************************************************************************************************************************/

/*
3) Escribir un programa que convierta un número dado en segundos en su equivalente en Horas,
Minutos y Segundos.
Ejemplo: Segundos=4000, el programa muestra 1H: 6M: 40S.

#include <stdio.h>

int main() {
    int segundos, horas, minutos, segundos_restantes;

    printf("Ingrese la cantidad de segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600; // Divide los segundos por 3600 para obtener las horas
    segundos_restantes = segundos % 3600; // Calcula los segundos restantes después de obtener las horas
    minutos = segundos_restantes / 60; // Divide los segundos restantes por 60 para obtener los minutos
    segundos_restantes = segundos_restantes % 60; // Calcula los segundos restantes después de obtener los minutos

    printf("Equivalente: %dH : %dM : %dS\n", horas, minutos, segundos_restantes);

    return 0;
}

/**********************************************************************************************************************************************/

/*
4) Escribir un programa para convertir una medida dada en pies a sus equivalentes en: Yardas,
Pulgadas, Centímetros, Metros.
1 pie = 12 pulgadas, 1 yarda = 3 pies, 1 pulgada = 2,54 Cm
Leer el número de pies e imprimir el número de yardas, pulgadas, centímetros y metros.

#include <stdio.h>

int main() {
    float pies, yardas, pulgadas, centimetros, metros;

    printf("Ingrese la medida en pies: ");
    scanf("%f", &pies);

    yardas = pies / 3.0; // Convierte pies a yardas dividiendo por 3
    pulgadas = pies * 12.0; // Convierte pies a pulgadas multiplicando por 12
    centimetros = pulgadas * 2.54; // Convierte pulgadas a centímetros multiplicando por 2.54
    metros = centimetros / 100.0; // Convierte centímetros a metros dividiendo por 100

    printf("Equivalente:\n");
    printf("Yardas: %.2f\n", yardas);
    printf("Pulgadas: %.2f\n", pulgadas);
    printf("Centímetros: %.2f\n", centimetros);
    printf("Metros: %.2f\n", metros);

    return 0;
}

/**********************************************************************************************************************************************/

/*
5) Un valor de temperatura en grados Celsius puede ser convertida a su equivalente en grados
Fahrenheit.
Escribir un programa en lenguaje C que lea una temperatura en grados Celsius como valor
decimal y obtenga la temperatura Fahrenheit equivalente

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Ingrese la temperatura en grados Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32; // Convierte Celsius a Fahrenheit utilizando la fórmula

    printf("Temperatura en grados Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}

/**********************************************************************************************************************************************/

/*
6) Escribir un programa que dibuje el rectángulo siguiente
 ********************
 *                  *
 *                  *
 *                  *
 ********************

 Respuesta: No es la forma mas clara, pero considero que es la mejor

 #include <stdio.h>

int main() {
    int altura = 5; // Altura del rectángulo
    int anchura = 20; // Anchura del rectángulo

    // Dibujo del rectángulo
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < anchura; j++) {
            if (i == 0 || i == altura - 1 || j == 0 || j == anchura - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

/**********************************************************************************************************************************************/

/*
7) Modificar el programa anterior de modo que lea una palabra de 5 letras y se imprima en el
centro del rectángulo

#include <stdio.h>
#include <string.h>

int main() {
    int altura = 5; // Altura del rectángulo
    int anchura = 20; // Anchura del rectángulo
    char palabra[6]; // Palabra a imprimir en el centro del rectángulo

    printf("Ingrese una palabra de 5 letras: ");
    scanf("%5s", palabra);

    int palabra_length = strlen(palabra);
    int margen_izquierdo = (anchura - palabra_length) / 2;
    int margen_derecho = anchura - margen_izquierdo - palabra_length;

    // Dibujo del rectángulo
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < anchura; j++) {
            if (i == 0 || i == altura - 1 || j == 0 || j == anchura - 1) {
                printf("*");
            } else if (i == altura / 2 && j >= margen_izquierdo && j < margen_izquierdo + palabra_length) {
                printf("%c", palabra[j - margen_izquierdo]);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

/**********************************************************************************************************************************************/

/*
8) Construir un programa que al recibir como dato un número de 4 dígitos, genere una
impresión como la que se muestra a continuación:
El número 6352:
6
3
5
2

#include <stdio.h>

int main() {
    int numero;

    printf("Ingrese un número de 4 dígitos: ");
    scanf("%d", &numero);

    // Obtener cada dígito del número
    int digito1 = numero / 1000;
    int digito2 = (numero / 100) % 10;
    int digito3 = (numero / 10) % 10;
    int digito4 = numero % 10;

    // Imprimir cada dígito en una línea separada
    printf("%d\n", digito1);
    printf("%d\n", digito2);
    printf("%d\n", digito3);
    printf("%d\n", digito4);

    return 0;
}

/**********************************************************************************************************************************************/

/*
9) Escribir un programa que lea dos enteros en las variables X e Y, y a continuación obtenga los
valores de: X / Y, y X % Y. Ejecute el programa varias veces con diferentes pares de enteros
como entrada.

#include <stdio.h>

int main() {
    int x, y;

    printf("Ingrese el valor de X: ");
    scanf("%d", &x);

    printf("Ingrese el valor de Y: ");
    scanf("%d", &y);

    int division = x / y;
    int modulo = x % y;

    printf("División: %d\n", division);
    printf("Residuo: %d\n", modulo);

    return 0;
}

/**********************************************************************************************************************************************/


}
