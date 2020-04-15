/*
 ============================================================================
 Name        : TP1Programacion.c
 Author      : Manuel Ignacio Bever
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#include "biblioteca.h"
#include "operaciones.h"
#include "menu.h"

int main(void)
{
	int numeroA=0;
	int numeroB=0;
	int resultadoPrimerMenu;
	int resultadoSuma;
	int resultadoResta;
	int resultadoMultiplicacion;
	float resultadoDivision;
	int resultadoFacA;
	int resultadoFacB;
	int retHuboError;

	menuPrincipal(numeroA,numeroB);
	if(utn_getNumero(&resultadoPrimerMenu,"","Error - El dato cargado no es valido\n",1,5,3)==0)
	{
		while(resultadoPrimerMenu!=5)
		{
			switch(resultadoPrimerMenu)
			{
			case 1:
				if((utn_getNumero(&numeroA,"Ingrese el 1er operador\n","Error - El dato cargado no es valido\n",-9999,9999,3)==0))
				{
					printf("\nvalor %d - cargado correctamente\n\n",numeroA);
				}
				break;

			case 2:
				if((utn_getNumero(&numeroB,"Ingrese el 2do operador\n","Error - El dato cargado no es valido\n",-9999,9999,3)==0))
				{
					printf("\nvalor %d - cargado correctamente\n\n",numeroB);
				}
				break;

			case 3:
				resultadoSuma=cargarSumas(numeroA,numeroB);
				resultadoResta=cargarRestas(numeroA,numeroB);
				retHuboError = cargarDivisiones(numeroA,numeroB,&resultadoDivision);
				resultadoMultiplicacion=cargarMultiplicaciones(numeroA,numeroB);
				resultadoFacA=cargarFactorial(numeroA);
				resultadoFacB=cargarFactorial(numeroB);
				printf("\n\nOperaciones cargadas.\n\n");
				break;

			case 4:
				menuMostrar (numeroA,numeroB,resultadoSuma,resultadoResta,resultadoDivision,retHuboError,resultadoMultiplicacion,resultadoFacA, resultadoFacB);
				break;

			case 5:break;
			}
			if(resultadoPrimerMenu!=5){
			//ClearScreen();
			menuPrincipal(numeroA,numeroB);
			utn_getNumero(&resultadoPrimerMenu,"","Error - El dato cargado no es valido\n",1,5,100);
			}
		}
	}
	printf("salio....\n");
	return EXIT_SUCCESS;
}
