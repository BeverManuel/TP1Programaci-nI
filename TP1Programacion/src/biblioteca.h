/*
 * biblioteca.h
 *
 *  Created on: 7 abr. 2020
 *      Author: Manuel Ignacio Bever
 */

#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_

int esNumerica(char* cadena);

int getInt(int* pResultado);

int utn_getNumero(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos);

void ClearScreen();


#endif /* LIBRERIA_H_ */
