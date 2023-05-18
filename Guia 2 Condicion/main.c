#include <stdio.h>
#include <stdlib.h>

int main()
{

/*
1) Escribir un programa C que ordene y muestre de menor a mayor, dos variables
enteras distintas, cuyos contenidos son ingresados por teclado.

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Ingrese el primer n�mero entero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo n�mero entero: ");
    scanf("%d", &num2);

    // Ordenar los n�meros de menor a mayor
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("Orden de menor a mayor: %d, %d\n", num1, num2);

    return 0;
}

/**********************************************************************************************************************************************/

/*
2) Modificar el ejercicio n�mero uno de manera que contenga tres variables

#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Ingrese el primer n�mero entero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo n�mero entero: ");
    scanf("%d", &num2);

    printf("Ingrese el tercer n�mero entero: ");
    scanf("%d", &num3);

    // Ordenar los n�meros de menor a mayor
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    if (num2 > num3) {
        int temp = num2;
        num2 = num3;
        num3 = temp;

        if (num1 > num2) {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
    }

    printf("Orden de menor a mayor: %d, %d, %d\n", num1, num2, num3);

    return 0;
}

/**********************************************************************************************************************************************/

/*
3) Escribir un programa C que determine si un n�mero natural es par o impar.
Suponer que el valor ingresado es entero y positivo

#include <stdio.h>

int main() {
    int numero;

    printf("Ingrese un n�mero natural: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("El n�mero es par.\n");
    } else {
        printf("El n�mero es impar.\n");
    }

    return 0;
}

/**********************************************************************************************************************************************/

/*
4) Para el siguiente programa C:
 ��������
int a,b;
 printf(�\nIngrese un numero entero\n�);
 scanf(�%d�,&a);
 printf(�\nIngrese otro n�mero entero\n�);
 scanf(�%d�,&b);
 printf(�\n�);
 if (a>b) {
 printf(�%d %d� es mayor que�,a,b);}
 else
 if (a<b) {
 printf(�%d %d�,��es mayor que�,b,a);}
 else {
 printf(�%d , %d�,��es igual a�,a,b);}
 printf(�\n�);
system(�pause�);
�������..
A - Explique que hace este programa y escr�balo como un comentario.
B - Comp�relo con el programa obtenido en el ejercicio 1 �Cu�l es la diferencia?
C - �Qu� pasa si se ingresan n�meros reales o caracteres en lugar de enteros?
D - Modificar el programa para que escriba siempre el n�mero a en todas las
salidas.
E - Modificarlo para que solo decida si a = b o a != b.


Respuestas
A) El programa solicita al usuario que ingrese dos n�meros enteros. Luego, compara los valores de los n�meros utilizando una estructura condicional ('if') y muestra un mensaje indicando cu�l de los dos n�meros es mayor o si son iguales. Finalmente, el programa pausa su ejecuci�n para que el resultado pueda ser visualizado antes de finalizar.

int a, b;
printf("\nIngrese un n�mero entero\n");
scanf("%d", &a);
printf("\nIngrese otro n�mero entero\n");
scanf("%d", &b);
printf("\n");
if (a > b) {
    printf("%d es mayor que %d", a, b);
} else if (a < b) {
    printf("%d es mayor que %d", b, a);
} else {
    printf("%d es igual a %d", a, b);
}
printf("\n");
system("pause");

B) La diferencia principal entre este programa y el obtenido en el ejercicio 1 es que este programa compara dos n�meros enteros ingresados por el usuario y muestra un mensaje indicando cu�l de los dos es mayor, en lugar de simplemente ordenarlos de menor a mayor.

C) Si se ingresan n�meros reales o caracteres en lugar de enteros, el programa producir� resultados inesperados. En el caso de los n�meros reales, el programa puede redondear autom�ticamente los valores ingresados al tipo entero m�s cercano debido al uso de 'scanf' con el especificador '%d'. En el caso de los caracteres, el programa puede interpretarlos como valores num�ricos seg�n su representaci�n en la tabla ASCII. Es importante asegurarse de ingresar n�meros enteros v�lidos para obtener resultados correctos.

D) Aqu� est� el programa modificado para que siempre escriba el n�mero 'a' en todas las salidas:

int a, b;
printf("\nIngrese un n�mero entero\n");
scanf("%d", &a);
printf("\nIngrese otro n�mero entero\n");
scanf("%d", &b);
printf("\n");
if (a > b) {
    printf("%d es mayor que %d", a, a);
} else if (a < b) {
    printf("%d es mayor que %d", a, b);
} else {
    printf("%d es igual a %d", a, b);
}
printf("\n");
system("pause");

E) Aqu� est� el programa modificado para que solo decida si a es igual a b o si son diferentes:

int a, b;
printf("\nIngrese un n�mero entero\n");
scanf("%d", &a);
printf("\nIngrese otro n�mero entero\n");
scanf("%d", &b);
printf("\n");
if (a == b) {
    printf("%d es igual a %d", a, b);
} else {
    printf("%d es diferente a %d", a, b);
}
printf("\n");
system("pause");

/**********************************************************************************************************************************************/

/*
5) Ingresar el nombre, Nro. de Libreta de un alumno y tres notas correspondientes
a los parciales de una materia, calcular el promedio e imprimir el nombre, nro. de
libreta y condici�n del alumno, considerando:
�APROBADO� con un promedio mayor o igual a 6.
�SOBRESALIENTE� si es igual o superior a 9.
�DESAPROBADO� en cualquier otro caso.

#include <stdio.h>

int main() {
    char nombre[50];
    int libreta;
    float nota1, nota2, nota3, promedio;

    // Ingreso de datos
    printf("Ingrese el nombre del alumno: ");
    scanf("%s", nombre);

    printf("Ingrese el n�mero de libreta: ");
    scanf("%d", &libreta);

    printf("Ingrese la primera nota: ");
    scanf("%f", &nota1);

    printf("Ingrese la segunda nota: ");
    scanf("%f", &nota2);

    printf("Ingrese la tercera nota: ");
    scanf("%f", &nota3);

    // C�lculo del promedio
    promedio = (nota1 + nota2 + nota3) / 3.0;

    // Impresi�n de resultados
    printf("\nNombre del alumno: %s\n", nombre);
    printf("N�mero de libreta: %d\n", libreta);
    printf("Promedio: %.2f\n", promedio);

    if (promedio >= 9.0) {
        printf("Condici�n: SOBRESALIENTE\n");
    } else if (promedio >= 6.0) {
        printf("Condici�n: APROBADO\n");
    } else {
        printf("Condici�n: DESAPROBADO\n");
    }

    return 0;
}

/**********************************************************************************************************************************************/

/*
6) Dadas las componentes de un punto en el plano, determinar a qu� cuadrante
corresponde teniendo en cuenta que se pueden encontrar sobre los ejes o en el
origen.

#include <stdio.h>

int main() {
    float x, y;

    // Ingreso de las coordenadas del punto
    printf("Ingrese la coordenada X: ");
    scanf("%f", &x);

    printf("Ingrese la coordenada Y: ");
    scanf("%f", &y);

    // Determinar el cuadrante
    if (x > 0 && y > 0) {
        printf("El punto se encuentra en el primer cuadrante.\n");
    } else if (x < 0 && y > 0) {
        printf("El punto se encuentra en el segundo cuadrante.\n");
    } else if (x < 0 && y < 0) {
        printf("El punto se encuentra en el tercer cuadrante.\n");
    } else if (x > 0 && y < 0) {
        printf("El punto se encuentra en el cuarto cuadrante.\n");
    } else if (x == 0 && y != 0) {
        printf("El punto se encuentra sobre el eje Y.\n");
    } else if (x != 0 && y == 0) {
        printf("El punto se encuentra sobre el eje X.\n");
    } else {
        printf("El punto se encuentra en el origen.\n");
    }

    return 0;
}

/**********************************************************************************************************************************************/

/*
7) Reescribir el siguiente programa utilizando la sentencia SWITCH y BREAK sin
alterar sus salidas.
���.
#define x 2
#define y 3
#define z 4
����
int m;
 scanf(�%d�,&m);
If (m==x) {
 printf(�El valor de %d es igual a %d�,m,x);}
else
 If (m==y) {
 printf(�El valor de %d es igual a %d�,m,y);}
 else
 If (m==z) {
 printf(�El valor de %d es igual a %d� ,m,z);}
 else
 printf(�El valor de %d no coincide con ninguno de los ingresados�,m);
}

Respuesta

#include <stdio.h>

#define x 2
#define y 3
#define z 4

int main() {
    int m;
    scanf("%d", &m);

    switch (m) {
        case x:
            printf("El valor de %d es igual a %d", m, x);
            break;
        case y:
            printf("El valor de %d es igual a %d", m, y);
            break;
        case z:
            printf("El valor de %d es igual a %d", m, z);
            break;
        default:
            printf("El valor de %d no coincide con ninguno de los ingresados", m);
            break;
    }

    return 0;
}

En el programa reescrito, se utiliza la sentencia switch para evaluar el valor de la variable m. Dentro de cada caso, se ejecuta la instrucci�n correspondiente y luego se utiliza break para salir del switch y evitar que se ejecuten los casos siguientes.
El caso default se utiliza cuando el valor de m no coincide con ninguno de los valores definidos (x, y y z). En este caso, se imprime el mensaje correspondiente y tambi�n se utiliza break para finalizar el switch.
El programa reescrito tiene la misma salida que el programa original, pero utiliza la estructura switch en lugar de m�ltiples estructuras if-else anidadas.

/**********************************************************************************************************************************************/

/*
8) Decidir a cuales de las siguientes situaciones se puede aplicar la sentencia
SWITCH y escribir para dichos casos los programas correspondientes.
� Ingresar las componentes reales e imaginarias de los n�meros complejos y
luego, ingresando uno de los s�mbolos +,-,* o /, elegir la operaci�n que se
desea realizar.
� Modificar el caso anterior eligiendo la opci�n con S o s, R o r, M o m y D o d.

La sentencia switch en C se utiliza para tomar decisiones basadas en el valor de una variable. Sin embargo, tiene ciertas limitaciones en cuanto a los tipos de datos que puede evaluar.
En el primer caso, en el que se ingresan componentes reales e imaginarias de n�meros complejos y se desea seleccionar una operaci�n utilizando los s�mbolos +, -, * o /, la sentencia switch no es adecuada. Esto se debe a que la sentencia switch en C solo puede evaluar tipos de datos enteros (int o char).
En cambio, puedes utilizar una estructura de if-else para realizar la selecci�n de la operaci�n deseada. Aqu� hay un ejemplo de c�mo podr�a ser el programa:

#include <stdio.h>

int main() {
    float real1, imag1, real2, imag2;
    char operacion;

    printf("Ingrese la parte real del primer n�mero complejo: ");
    scanf("%f", &real1);

    printf("Ingrese la parte imaginaria del primer n�mero complejo: ");
    scanf("%f", &imag1);

    printf("Ingrese la parte real del segundo n�mero complejo: ");
    scanf("%f", &real2);

    printf("Ingrese la parte imaginaria del segundo n�mero complejo: ");
    scanf("%f", &imag2);

    printf("Ingrese la operaci�n a realizar (+, -, *, /): ");
    scanf(" %c", &operacion);

    float resultado_real, resultado_imag;

    if (operacion == '+') {
        resultado_real = real1 + real2;
        resultado_imag = imag1 + imag2;
        printf("Resultado: %.2f + %.2fi\n", resultado_real, resultado_imag);
    } else if (operacion == '-') {
        resultado_real = real1 - real2;
        resultado_imag = imag1 - imag2;
        printf("Resultado: %.2f + %.2fi\n", resultado_real, resultado_imag);
    } else if (operacion == '*') {
        resultado_real = (real1 * real2) - (imag1 * imag2);
        resultado_imag = (real1 * imag2) + (real2 * imag1);
        printf("Resultado: %.2f + %.2fi\n", resultado_real, resultado_imag);
    } else if (operacion == '/') {
        float denominador = (real2 * real2) + (imag2 * imag2);
        resultado_real = ((real1 * real2) + (imag1 * imag2)) / denominador;
        resultado_imag = ((imag1 * real2) - (real1 * imag2)) / denominador;
        printf("Resultado: %.2f + %.2fi\n", resultado_real, resultado_imag);
    } else {
        printf("Operaci�n inv�lida\n");
    }

    return 0;
}


En el segundo caso, en el que se desea utilizar opciones con letras, como S o s, R o r, M o m y D o d, se puede aplicar la sentencia switch. Aqu� hay un ejemplo de c�mo podr�a ser el programa:

#include <stdio.h>

int main() {
    float real1, imag1, real2, imag2;
    char operacion;

    printf("Ingrese la parte real del primer n�mero complejo: ");
    scanf("%f", &real1);

    printf("Ingrese la parte imaginaria del primer n�mero complejo: ");
    scanf("%f", &imag1);

    printf("Ingrese la parte real del segundo n�mero complejo: ");
    scanf("%f", &real2);

    printf("Ingrese la parte imaginaria del segundo n�mero complejo: ");
    scanf("%f", &imag2);

    printf("Ingrese la operaci�n a realizar (S/s para suma, R/r para resta, M/m para multiplicaci�n, D/d para divisi�n): ");
    scanf(" %c", &operacion);

    float resultado_real, resultado_imag;

    switch (operacion) {
        case 'S':
        case 's':
            resultado_real = real1 + real2;
            resultado_imag = imag1 + imag2;
            printf("Resultado: %.2f + %.2fi\n", resultado_real, resultado_imag);
            break;
        case 'R':
        case 'r':
            resultado_real = real1 - real2;
            resultado_imag = imag1 - imag2;
            printf("Resultado: %.2f + %.2fi\n", resultado_real, resultado_imag);
            break;
        case 'M':
        case 'm':
            resultado_real = (real1 * real2) - (imag1 * imag2);
            resultado_imag = (real1 * imag2) + (real2 * imag1);
            printf("Resultado: %.2f + %.2fi\n", resultado_real, resultado_imag);
            break;
        case 'D':
        case 'd':
            float denominador = (real2 * real2) + (imag2 * imag2);
            resultado_real = ((real1 * real2) + (imag1 * imag2)) / denominador;
            resultado_imag = ((imag1 * real2) - (real1 * imag2)) / denominador;
            printf("Resultado: %.2f + %.2fi\n", resultado_real, resultado_imag);
            break;
        default:
            printf("Operaci�n inv�lida\n");
            break;
    }

    return 0;
}

En este caso, se utiliza la sentencia switch para evaluar el valor de la variable operacion. Dependiendo del valor de operacion, se realiza la operaci�n correspondiente y se muestra el resultado. Si el valor de operacion no coincide con ninguna de las opciones especificadas en los casos, se ejecuta el caso default y se muestra un mensaje de "Operaci�n inv�lida".


/**********************************************************************************************************************************************/

/*
9) Leer una variable real PESO, e informar el estado de la persona de acuerdo con
la siguiente tabla:
Peso < 40 �DELGADA�
40<= Peso < 60 �NORMAL�
60 <= Peso < 80 �SOBREPESO�
80 <= Peso �OBESA�

#include <stdio.h>

int main() {
    float peso;

    printf("Ingrese el peso de la persona: ");
    scanf("%f", &peso);

    if (peso < 40) {
        printf("DELGADA\n");
    } else if (peso >= 40 && peso < 60) {
        printf("NORMAL\n");
    } else if (peso >= 60 && peso < 80) {
        printf("SOBREPESO\n");
    } else {
        printf("OBESA\n");
    }

    return 0;
}

El programa lee el valor del peso ingresado por el usuario y luego utiliza una estructura de if-else para evaluar el peso y mostrar el estado correspondiente. Si el peso es menor que 40, se muestra "DELGADA". Si el peso es mayor o igual a 40 y menor que 60, se muestra "NORMAL". Si el peso es mayor o igual a 60 y menor que 80, se muestra "SOBREPESO". Y si el peso es mayor o igual a 80, se muestra "OBESA".


}
