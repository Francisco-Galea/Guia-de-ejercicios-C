#include <stdio.h>
#include <stdlib.h>

int main()
{

/*
1) 

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
2) 

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
3)

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
4) 

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
5)

int main(){
	
	float X=0,resultadoTramo1=0,resultadoTramo2=0;
	
printf("La funcion por tramos es esta: \n5*X+2");
printf("\nEvalue X para esta primera funcion. X debe ser menor o igual que 3:");
fflush(stdin);
scanf("%f",&X);	
if(X<=3){ 
	//if 1
	resultadoTramo1=5*X+2;

printf("La segunda funcion por tramos es esta: \n4*X-5");
printf("\nReevalue X para esta funcion. X debe ser mayor a 3:");
fflush(stdin);
scanf("%f",&X);	
	if(X>3){ 
		//if 2
		resultadoTramo2=4*X-5;
		printf("El resultado de las funciones son:\nFuncion Tramo1:%.2f\n_______\nFuncion Tramo2:%.2f",resultadoTramo1,resultadoTramo2);	
		   }		
		else{
			//else 2
			printf("El valor ingresado no es MAYOR que 3");	
	   }	
else{
	//else 1
	printf("El valor ingresado no es MENOR o Igual a 3");	
	}

	return 0;
}

/**********************************************************************************************************************************************/

/*
6) 

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
7) 

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
8) 

int main(){

	int a=0;
scanf("%d",&a);
	if (a / 2 == 0) {
 	printf("%d es m�ltiplo de %d",a);
 
 		if (a / 3 == 0) { 
 		printf("y tambi�n de%d \n");
 		printf("por lo tanto lo es de%d \n");
 						}
 		else {
 		printf("pero no de %d \n");
 			}
 }
			else
 				if (a / 3 == 0) { 
 				printf("%d es multiplo de %d pero no de %d", a);
				 }
 				else {
 				printf("%d no es m�ltiplo de %d ni de %d", a);
 					}	
	return 0;
}

/**********************************************************************************************************************************************/

/*
9) 

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
10) 

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
11) 

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

/**********************************************************************************************************************************************/

/*
12)

int main(){
	
	int opc;
	float pulsos=0,cantidadPagar=0;

printf("Seleccione su tipo de abono.\n");
printf("1)Particular.\n");
printf("2)Profesional.\n");
printf("3)Comercial.\n");
fflush(stdin);
scanf("%i",&opc);	
	
switch(opc){

	case 1:printf("Usted eligio Particular, ahora ingrese la cantidad de pulsos:");
			fflush(stdin);
			scanf("%f",&pulsos);
			if(pulsos>0 && pulsos<=200){
				cantidadPagar=pulsos*0.05+30;
			}
			else
				if(pulsos>201 && pulsos<=400){
					cantidadPagar=pulsos*0.07+30;
				}	
				else
					if(pulsos>401 && pulsos<=1000){
						cantidadPagar=pulsos*0.1+30;
					}
					else
						if(pulsos>1000){
							cantidadPagar=pulsos*0.12+30;
						}
			printf("Usted como Particular, le corresponde pagar %.2f",cantidadPagar);			
			break;
	
	case 2:printf("Usted eligio Profesinal, ahora ingrese la cantidad de pulsos:");
			fflush(stdin);
			scanf("%f",&pulsos);
			if(pulsos>0 && pulsos<=250){
				cantidadPagar=pulsos*0.07+50;
			}
			else
				if(pulsos>251 && pulsos<=500){
					cantidadPagar=pulsos*0.11+50;
				}	
				else
					if(pulsos>501 && pulsos<=1000){
						cantidadPagar=pulsos*0.13+50;
					}
					else
						if(pulsos>1000){
							cantidadPagar=pulsos*0.15+50;
						}
			printf("Usted como Profesional, le corresponde pagar %.2f",cantidadPagar);			
			break;					

	case 3:printf("Usted eligio Comercial, ahora ingrese la cantidad de pulsos:");
			fflush(stdin);
			scanf("%f",&pulsos);
			if(pulsos>0 && pulsos<=300){
				cantidadPagar=pulsos*0.09+70;
			}
			else
				if(pulsos>301 && pulsos<=600){
					cantidadPagar=pulsos*0.12+70;
				}	
				else
					if(pulsos>601 && pulsos<=1000){
						cantidadPagar=pulsos*0.15+70;
					}
					else
						if(pulsos>1000){
							cantidadPagar=pulsos*0.17+70;
						}
			printf("Usted como Comercial, le corresponde pagar %.2f",cantidadPagar);				
			break;			
	
	default:printf("La opcion ingresada no coincide con ninguna de las opciones, intentelo de nuevo.");		
}	
		
	return 0;
}

*/
}