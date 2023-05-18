#include <stdio.h>
#include <stdlib.h>

int main()
{

/*
1) Sea B un arreglo de elementos enteros. Desarrollar un programa en C que permita
mediante el uso de un men�, seleccionar una de las siguientes opciones:
� Asignar el valor (9) a todos los elementos de sub�ndice impar e imprimir el
arreglo modificado
� Calcular la suma de todos los elementos del arreglo e imprimirla
� Construir un arreglo C tal que sea B permutado (C[0]=A[N], C[1]=A[N-1],� )
� Imprimir los elementos pares del vector B

#include <stdio.h>

int main() {
    int B[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int opcion;

    do {
        printf("Seleccione una opci�n:\n");
        printf("1. Asignar el valor (9) a los elementos de sub�ndice impar e imprimir el arreglo modificado\n");
        printf("2. Calcular la suma de todos los elementos del arreglo e imprimirla\n");
        printf("3. Construir un arreglo C permutado de B e imprimirlo\n");
        printf("4. Imprimir los elementos pares del vector B\n");
        printf("5. Salir\n");
        printf("Opci�n: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                for (int i = 0; i < 10; i++) {
                    if (i % 2 != 0) {
                        B[i] = 9;
                    }
                }
                printf("Arreglo modificado:\n");
                for (int i = 0; i < 10; i++) {
                    printf("%d ", B[i]);
                }
                printf("\n");
                break;
            case 2:
                int suma = 0;
                for (int i = 0; i < 10; i++) {
                    suma += B[i];
                }
                printf("La suma de los elementos del arreglo es: %d\n", suma);
                break;
            case 3:
                int C[10];
                for (int i = 0; i < 10; i++) {
                    C[i] = B[9 - i];
                }
                printf("Arreglo C permutado de B:\n");
                for (int i = 0; i < 10; i++) {
                    printf("%d ", C[i]);
                }
                printf("\n");
                break;
            case 4:
                printf("Elementos pares del vector B:\n");
                for (int i = 0; i < 10; i++) {
                    if (B[i] % 2 == 0) {
                        printf("%d ", B[i]);
                    }
                }
                printf("\n");
                break;
            case 5:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opci�n inv�lida. Intente nuevamente.\n");
                break;
        }

        printf("\n");
    } while (opcion != 5);

    return 0;
}

Este programa utiliza un arreglo B predefinido de 10 elementos para realizar las operaciones seleccionadas a trav�s de un men�. Permite asignar el valor 9 a los elementos de sub�ndice impar, calcular la suma de los elementos, construir un arreglo C permutado de B y imprimir los elementos pares del vector B. El programa continuar� mostrando el men� hasta que se seleccione la opci�n de salida.

/**********************************************************************************************************************************************/

/*
2) Se ingresan: un entero N, un vector V de N elementos float y un valor float K. Se pide
escribir un programa que permita recorrer el vector, verificando si se encuentra el
valor K e imprima la cantidad de ocurrencias o el cartel �NO ESTA� en caso de no
hallarlo

#include <stdio.h>

int main() {
    int N;
    printf("Ingrese la cantidad de elementos del vector: ");
    scanf("%d", &N);

    float V[N];
    printf("Ingrese los elementos del vector:\n");
    for (int i = 0; i < N; i++) {
        printf("V[%d]: ", i);
        scanf("%f", &V[i]);
    }

    float K;
    printf("Ingrese el valor K a buscar: ");
    scanf("%f", &K);

    int ocurrencias = 0;
    for (int i = 0; i < N; i++) {
        if (V[i] == K) {
            ocurrencias++;
        }
    }

    if (ocurrencias > 0) {
        printf("Se encontraron %d ocurrencias del valor K en el vector.\n", ocurrencias);
    } else {
        printf("NO ESTA\n");
    }

    return 0;
}

Este programa lee la cantidad de elementos N del vector V y luego solicita al usuario que ingrese los valores de cada elemento. Luego se lee el valor K a buscar. Despu�s, se recorre el vector para contar las ocurrencias del valor K. Si se encuentran ocurrencias, se imprime la cantidad de ocurrencias. De lo contrario, se muestra el mensaje "NO ESTA".

/**********************************************************************************************************************************************/

/*
3) Dados los siguientes problemas, realizar los programas correspondientes:

� A) Dado un arreglo A, generar un nuevo arreglo B, eliminando del arreglo A los
elementos que sean iguales a K.(K valor ingresado previamente).

� B) Dado un arreglo A de N componentes float, crear dos nuevos vectores B y C tales
que: B, tenga solo las componentes de A que ocupan lugar par y C solo las
componentes de A que ocupan lugar impar. Imprimir los tres vectores.

� C) Calcular la suma de los valores negativos y el producto de los valores positivos
distintos de cero de un vector A de N componentes enteras.


A)
#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int A[MAX_SIZE], B[MAX_SIZE];
    int N, K;
    int sizeB = 0;

    printf("Ingrese la cantidad de elementos del arreglo A: ");
    scanf("%d", &N);

    printf("Ingrese los elementos del arreglo A:\n");
    for (int i = 0; i < N; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("Ingrese el valor K a eliminar: ");
    scanf("%d", &K);

    for (int i = 0; i < N; i++) {
        if (A[i] != K) {
            B[sizeB] = A[i];
            sizeB++;
        }
    }

    printf("Arreglo B sin elementos iguales a K:\n");
    for (int i = 0; i < sizeB; i++) {
        printf("B[%d]: %d\n", i, B[i]);
    }

    return 0;
}

B)
#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int A[MAX_SIZE], B[MAX_SIZE], C[MAX_SIZE];
    int N;
    int sizeB = 0, sizeC = 0;

    printf("Ingrese la cantidad de elementos del arreglo A: ");
    scanf("%d", &N);

    printf("Ingrese los elementos del arreglo A:\n");
    for (int i = 0; i < N; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);

        if (i % 2 == 0) {
            B[sizeB] = A[i];
            sizeB++;
        } else {
            C[sizeC] = A[i];
            sizeC++;
        }
    }

    printf("Arreglo A:\n");
    for (int i = 0; i < N; i++) {
        printf("A[%d]: %d\n", i, A[i]);
    }

    printf("Arreglo B (elementos pares):\n");
    for (int i = 0; i < sizeB; i++) {
        printf("B[%d]: %d\n", i, B[i]);
    }

    printf("Arreglo C (elementos impares):\n");
    for (int i = 0; i < sizeC; i++) {
        printf("C[%d]: %d\n", i, C[i]);
    }

    return 0;
}

C)
#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int A[MAX_SIZE];
    int N;
    int sumaNegativos = 0;
    long long int productoPositivos = 1;

    printf("Ingrese la cantidad de elementos del arreglo A: ");
    scanf("%d", &N);

    printf("Ingrese los elementos del arreglo A:\n");
    for (int i = 0; i < N; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);

        if (A[i] < 0) {
            sumaNegativos += A[i];
        } else if (A[i] > 0) {
            productoPositivos *= A[i];
        }
    }

    printf("Suma de los valores negativos: %d\n", sumaNegativos);
    printf("Producto de los valores positivos distintos de cero: %lld\n", productoPositivos);

    return 0;
}

/**********************************************************************************************************************************************/

/*
4) En una competencia de ciclismo, cada participante realiza dos pruebas, una por
tiempo y otra por n�mero de vueltas. Se tienen almacenados en tres arreglos los
siguientes datos de cada participante:
- Nombre
- Tiempo en la primera prueba
- Numero de vueltas en la segunda prueba.
Realizar un programa que permita obtener:
� El nombre del participante que hizo el menor tiempo en la primera prueba.
� El nombre y el tiempo en la primera prueba del participante que hizo el mayor
n�mero de vueltas en la segunda prueba

#include <stdio.h>
#include <string.h>

#define MAX_PARTICIPANTS 100

int main() {
    char nombres[MAX_PARTICIPANTS][50];
    float tiempos[MAX_PARTICIPANTS];
    int vueltas[MAX_PARTICIPANTS];
    int numParticipantes;

    printf("Ingrese el n�mero de participantes: ");
    scanf("%d", &numParticipantes);

    // Inicializar los arreglos
    for (int i = 0; i < numParticipantes; i++) {
        printf("Ingrese el nombre del participante %d: ", i + 1);
        scanf("%s", nombres[i]);

        printf("Ingrese el tiempo en la primera prueba del participante %d: ", i + 1);
        scanf("%f", &tiempos[i]);

        printf("Ingrese el n�mero de vueltas en la segunda prueba del participante %d: ", i + 1);
        scanf("%d", &vueltas[i]);
    }

    // Obtener el participante con el menor tiempo en la primera prueba
    int indiceMenorTiempo = 0;
    float menorTiempo = tiempos[0];

    for (int i = 1; i < numParticipantes; i++) {
        if (tiempos[i] < menorTiempo) {
            indiceMenorTiempo = i;
            menorTiempo = tiempos[i];
        }
    }

    printf("El participante con el menor tiempo en la primera prueba es: %s\n", nombres[indiceMenorTiempo]);

    // Obtener el participante con el mayor n�mero de vueltas en la segunda prueba
    int indiceMayorVueltas = 0;
    int mayorVueltas = vueltas[0];

    for (int i = 1; i < numParticipantes; i++) {
        if (vueltas[i] > mayorVueltas) {
            indiceMayorVueltas = i;
            mayorVueltas = vueltas[i];
        }
    }

    printf("El participante con el mayor n�mero de vueltas en la segunda prueba es: %s\n", nombres[indiceMayorVueltas]);
    printf("Tiempo en la primera prueba: %.2f\n", tiempos[indiceMayorVueltas]);

    return 0;
}

Este programa te permitir� ingresar los datos de los participantes, y luego calcular� el nombre del participante con el menor tiempo en la primera prueba, as� como el nombre y tiempo en la primera prueba del participante que hizo el mayor n�mero de vueltas en la segunda prueba.

/**********************************************************************************************************************************************/

/*
5) En un comercio se registran las ventas por cada uno de los siete d�as de la semana,
de la siguiente forma: en CAJA1 se indica el dinero que ingreso en efectivo y en
CAJA2 el monto facturado en tarjetas de cr�dito.
Al final de la semana se desea determinar:

� El total de las ventas
� Cual fue el d�a que ingreso menos efectivo
� El d�a que m�s se facturo, porcentaje facturado en efectivo y porcentaje
facturado en tarjetas de cr�dito

#include <stdio.h>

#define NUM_DIAS 7

int main() {
    float caja1[NUM_DIAS];
    float caja2[NUM_DIAS];
    float totalVentas = 0;
    int diaMenorEfectivo = 0;
    float menorEfectivo = 0;
    int diaMayorFacturacion = 0;
    float mayorFacturacion = 0;
    float porcentajeEfectivo, porcentajeTarjeta;

    // Ingresar las ventas de cada d�a
    for (int i = 0; i < NUM_DIAS; i++) {
        printf("Ingrese el monto en efectivo para el d�a %d: ", i + 1);
        scanf("%f", &caja1[i]);

        printf("Ingrese el monto facturado en tarjetas de cr�dito para el d�a %d: ", i + 1);
        scanf("%f", &caja2[i]);

        totalVentas += caja1[i] + caja2[i];

        // Determinar el d�a con menor efectivo
        if (i == 0 || caja1[i] < menorEfectivo) {
            diaMenorEfectivo = i;
            menorEfectivo = caja1[i];
        }

        // Determinar el d�a con mayor facturaci�n
        if (i == 0 || (caja1[i] + caja2[i]) > mayorFacturacion) {
            diaMayorFacturacion = i;
            mayorFacturacion = caja1[i] + caja2[i];
        }
    }

    // Calcular porcentajes de facturaci�n en efectivo y tarjetas de cr�dito
    porcentajeEfectivo = (caja1[diaMayorFacturacion] / mayorFacturacion) * 100;
    porcentajeTarjeta = (caja2[diaMayorFacturacion] / mayorFacturacion) * 100;

    printf("El total de las ventas de la semana es: %.2f\n", totalVentas);
    printf("El d�a que ingres� menos efectivo fue el d�a %d\n", diaMenorEfectivo + 1);
    printf("El d�a que m�s se factur� fue el d�a %d\n", diaMayorFacturacion + 1);
    printf("Porcentaje facturado en efectivo: %.2f%%\n", porcentajeEfectivo);
    printf("Porcentaje facturado en tarjetas de cr�dito: %.2f%%\n", porcentajeTarjeta);

    return 0;
}

Este programa te permitir� ingresar las ventas de cada d�a de la semana, calcular el total de las ventas, determinar el d�a que ingres� menos efectivo, encontrar el d�a que m�s se factur� y calcular el porcentaje facturado en efectivo y tarjetas de cr�dito para ese d�a.


/**********************************************************************************************************************************************/

/*
6) 
int main(){
	
		int N=0,i=0,posicionMasCaro=0;
		
printf("�Cuantos productos desea ingresar?");
fflush(stdin);
scanf("%i",&N);	
	
	char Producto[N][30];
	float Precio[N],promedioPrecio=0,prodMasCaro=0;
	
for(i=0;i<N;i++){
	printf("Ingrese el nombre del producto %i:",i+1);
	fflush(stdin);
	scanf("%s",&Producto[i]);
	printf("Ingrese el precio del producto %s:",Producto[i]);
	fflush(stdin);
	scanf("%f",&Precio[i]);
}	

for(i=0;i<N;i++){
	printf("\nProducto: %s \nPrecio: $%.2f",Producto[i],Precio[i]);
}

for(i=0;i<N;i++){
	promedioPrecio+=Precio[i];
}
promedioPrecio=promedioPrecio/N;
printf("\nEl promedio de los precios es: $%.2f",promedioPrecio);

for(i=0;i<N;i++){
	if(Precio[i]>prodMasCaro){
		prodMasCaro=Precio[i];
		posicionMasCaro=i;
	}
}
printf("\nEl producto mas caro es: %s y su precio es de: $%.2f",Producto[posicionMasCaro],Precio[posicionMasCaro]);
	
	return 0;
}




}
