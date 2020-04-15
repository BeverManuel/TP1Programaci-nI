/*
 * operaciones.c
 *
 *  Created on: 12 abr. 2020
 *      Author: Manuel
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#include "operaciones.h"

/**
 * \brief Solicita dos numeros al usuario, luego realiza su suma
 * \return Retorna el resultado de la suma
 */

int cargarSumas (int operador1, int operador2){

	int resultado;

	resultado=operador1+operador2;

	return resultado;
}

/**
 * \brief Solicita dos numeros al usuario, luego realiza su resta
 * \return Retorna el resultado de la resta
 */

int cargarRestas (int operador1, int operador2){

	int resultado;

	resultado=operador1-operador2;

	return resultado;
}

/**
 * \brief Solicita dos numeros al usuario, luego realiza su multiplicacion
 * \return Retorna el resultado de la multiplicacion
 */

int cargarMultiplicaciones (int operador1, int operador2){

	int resultado;

	resultado=operador1*operador2;

	return resultado;
}

/**
 * \brief Solicita dos numeros al usuario, luego realiza su division
 * \return Retorna el resultado de la division
 */

int cargarDivisiones (int operador1, int operador2, float* divisionPuntero)
{
	float resultado;
	int huboError;
	if(operador2!=0){
		resultado=(float)operador1/operador2;
		(*divisionPuntero)=resultado;
		huboError=0; // no hubo error
		}
	else{
		huboError=1; // hubo error
		}
	return huboError;
}

/**
 * \brief Solicita un numero al usuario, luego realiza su factorial
 * \return Retorna el resultado de la factorial
 */

int cargarFactorial(int operador1){
	int resultado;
	int factorial=1;
	int i;
	if(operador1<0) factorial =0;
	else if(operador1==0) factorial=1;
	else{
		for (i = 1; i <= operador1; i++){
			resultado = factorial*i;
	      }
	   }
	return resultado;
}
