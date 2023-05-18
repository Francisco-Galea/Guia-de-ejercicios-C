#include <stdio.h>
#include <stdlib.h>

int main()
{

/*1) 

a) _MiVariable: V�lido. Los identificadores pueden comenzar con un gui�n bajo.

b) switch: Inv�lido. "switch" es una palabra reservada en C y no puede usarse como identificador.

c) Registro1: V�lido. Los identificadores pueden contener letras y n�meros, pero no pueden comenzar con un n�mero.

d) 1Registro: Inv�lido. Los identificadores no pueden comenzar con un n�mero.

e) M&m: Inv�lido. Los identificadores no pueden contener caracteres especiales como "&".

f) @nombre: Inv�lido. Los identificadores no pueden comenzar con un s�mbolo como "@".

g) Do 15: Inv�lido. Los identificadores no pueden contener espacios.

h) 92: Inv�lido. Los identificadores no pueden consistir �nicamente en n�meros.

i) Nombre_y_Apellidos: V�lido. Los identificadores pueden contener guiones bajos.

j) Saldo_Actual: V�lido. Los identificadores pueden contener guiones bajos.

k) BBBBBBBB: V�lido. Los identificadores pueden consistir en letras.

l) * 143Edad: Inv�lido. Los identificadores no pueden contener caracteres especiales como "*".


/**********************************************************************************************************************************************/

/*
2) 
int main() {
	
	printf("(x+y)/(x-y) \n");
	printf("[(a+b)^2]^2 \n");
	printf("(a+b)*(c/d) \n");
	printf("(x*y)/(1-4Z*x) \n");
	printf("[(x+(y/z))/(x-(y/z))] \n");
		
		return 0;
}


/**********************************************************************************************************************************************/

/*
3)

La salida del programa ser�a:

10
20
x
120
G
Su valor es....71

Explicaci�n:

La primera instrucci�n printf("\t\n%d\n",a); muestra el valor de la variable a, que es 10.
La segunda instrucci�n printf("\t%d\n",b); muestra el valor de la variable b, que es 20.
La tercera instrucci�n printf("\n%c\n",c); muestra el car�cter correspondiente al valor de la variable c, que es 'x' (el c�digo ASCII 120 corresponde al car�cter 'x').
La cuarta instrucci�n printf("\n\t%d\n",c); muestra el valor num�rico de la variable c, que es 120.
La quinta instrucci�n printf("\t%c\n",d); muestra el valor de la variable d, que es 'G'.
La sexta instrucci�n printf("\t\nSu valor es....%d\n",d); muestra el valor num�rico correspondiente al car�cter 'G', que es 71 seg�n el c�digo ASCII.



/**********************************************************************************************************************************************/

/*
4)

int main(){
	
	a=11
	b=4
	c=
	d=15
	e=7
	x=10/3
	y=11/4
	return 0;
}	

/**********************************************************************************************************************************************/

/*
5) 

int main() {
    int segundos, horas, minutos, segundos_restantes;

    printf("Ingrese la cantidad de segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600; // Divide los segundos por 3600 para obtener las horas
    segundos_restantes = segundos % 3600; // Calcula los segundos restantes despu�s de obtener las horas
    minutos = segundos_restantes / 60; // Divide los segundos restantes por 60 para obtener los minutos
    segundos_restantes = segundos_restantes % 60; // Calcula los segundos restantes despu�s de obtener los minutos

    printf("Equivalente: %dH : %dM : %dS\n", horas, minutos, segundos_restantes);

    return 0;
}

/**********************************************************************************************************************************************/

/*
6) 

int main() {
    float pies, yardas, pulgadas, centimetros, metros;

    printf("Ingrese la medida en pies: ");
    scanf("%f", &pies);

    yardas = pies / 3.0; // Convierte pies a yardas dividiendo por 3
    pulgadas = pies * 12.0; // Convierte pies a pulgadas multiplicando por 12
    centimetros = pulgadas * 2.54; // Convierte pulgadas a cent�metros multiplicando por 2.54
    metros = centimetros / 100.0; // Convierte cent�metros a metros dividiendo por 100

    printf("Equivalente:\n");
    printf("Yardas: %.2f\n", yardas);
    printf("Pulgadas: %.2f\n", pulgadas);
    printf("Cent�metros: %.2f\n", centimetros);
    printf("Metros: %.2f\n", metros);

    return 0;
}

/**********************************************************************************************************************************************/

/*
7)

int main() {
    float celsius, fahrenheit;

    printf("Ingrese la temperatura en grados Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32; // Convierte Celsius a Fahrenheit utilizando la f�rmula

    printf("Temperatura en grados Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}

/**********************************************************************************************************************************************/

/*
8) 

int main() {
    int altura = 5; // Altura del rect�ngulo
    int anchura = 20; // Anchura del rect�ngulo

    // Dibujo del rect�ngulo
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
9) 

int main() {
    int altura = 5; // Altura del rect�ngulo
    int anchura = 20; // Anchura del rect�ngulo
    char palabra[6]; // Palabra a imprimir en el centro del rect�ngulo

    printf("Ingrese una palabra de 5 letras: ");
    scanf("%5s", palabra);

    int palabra_length = strlen(palabra);
    int margen_izquierdo = (anchura - palabra_length) / 2;
    int margen_derecho = anchura - margen_izquierdo - palabra_length;

    // Dibujo del rect�ngulo
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
10) 
int main(){
	
	int Num1=0,Num2=0,resultado1=0,resultado2=0,resultado3=0,resultadoFinal=0;
	
printf("Ingrese el Numero 1 a multiplicar: \n");
fflush(stdin);
scanf("%i",&Num1);
printf("Ingrese el Numero 2 a multiplicar por el Numero 1: \n"),
fflush(stdin);
scanf("%i",&Num2);

resultado1=(Num2%10)*Num1;	
resultado2=(Num2%100)*Num1;
resultado3=(Num2%1000)*Num1;

resultadoFinal=resultado1+resultado2+resultado3;
	
printf("\t%i \n",Num1);
printf("x \t%i \n",Num2);
printf("__________________\n");
printf("\t%i\n",resultado1);
printf("+ \t%i\n",resultado2);
printf("+ \t%i\n",resultado3);	
printf("__________________\n");
printf("\t%i\n",resultadoFinal);	
			
	return 0;
}


/**********************************************************************************************************************************************/

/*
11) 

int main() {
    int numero;

    printf("Ingrese un n�mero de 4 d�gitos: ");
    scanf("%d", &numero);

    // Obtener cada d�gito del n�mero
    int digito1 = numero / 1000;
    int digito2 = (numero / 100) % 10;
    int digito3 = (numero / 10) % 10;
    int digito4 = numero % 10;

    // Imprimir cada d�gito en una l�nea separada
    printf("%d\n", digito1);
    printf("%d\n", digito2);
    printf("%d\n", digito3);
    printf("%d\n", digito4);

    return 0;
}

/**********************************************************************************************************************************************/

/*
12) 

int main() {
    int x, y;

    printf("Ingrese el valor de X: ");
    scanf("%d", &x);

    printf("Ingrese el valor de Y: ");
    scanf("%d", &y);

    int division = x / y;
    int modulo = x % y;

    printf("Divisi�n: %d\n", division);
    printf("Residuo: %d\n", modulo);

    return 0;
}

/**********************************************************************************************************************************************/

/*
13) 
int main(){
//13)
printf("\t   XXXX\n");
printf("\tXX\n");
printf("    XXX\n");
printf("XXX\n");
printf("    XXX\n");
printf("\tXX\n");
printf("\t   XXXX\n");	
		
	return 0;
}
*/

}
