/*
 * menu.c
 *
 *  Created on: 12 abr. 2020
 *      Author: Manuel
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#include "menu.h"

void menuPrincipal(int numeroA, int numeroB){
	printf("1. Ingrese el 1er operador - Operador actual:%d\n", numeroA);
	printf("2. Ingrese el 2er operador - Operador actual:%d\n", numeroB);
	printf("3. Calcular todas las operaciones\n");
	printf("4. Informar resultado\n");
    printf("5. Salir\n");
    printf("Elige ->\n");
}
void menuMostrar (int numeroA, int numeroB, int resultadoSuma, int resultadoResta, float resultadoDivision, int error, int resultadoMultiplicacion, int resultadoFacA, int resultadoFacB){
	printf("\n\nR E S U L T A D O S\n");
	printf("\n");
	printf("Primer operando  = %d\n", numeroA);
	printf("Segundo operando = %d\n", numeroB);
	printf("a) El resultado de %d + %d es: %d\n", numeroA, numeroB, resultadoSuma);
	printf("b) El resultado de %d - %d es: %d\n", numeroA, numeroB, resultadoResta);


	if(error==1){
			printf("c) No se puede dividir\n");
		}else{
			printf("c) El resultado de %d / %d es: %f\n", numeroA, numeroB, resultadoDivision);
		}

	printf("d) El resultado de %d * %d es: %d\n", numeroA, numeroB, resultadoMultiplicacion);
	printf("e) El factorial del primer operando es: %d, y del segundo numero es: %d\n", resultadoFacA, resultadoFacB);
	printf("\n\n");
}
