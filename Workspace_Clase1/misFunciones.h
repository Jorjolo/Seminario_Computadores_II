/* 
 * @file    : misFunciones.h
 * @author  : Ioannis Vourkas
 * @date    : 23/09/2020
 * @brief   : Template de código para Lab 1 ELO 326
 */
 
#ifndef MIS_FUNCIONES_H
#define MIS_FUNCIONES_H

/*Aquí vienen las declaraciones de variables y funciones*/


/**
 * @name    	: int sumar(float op1, float op2, float* res)
 * @param op1 	: primer parametro a sumar
 * @param op2 	: segundo parametro a sumar
 * @param res	: dirección de la variable que almacena el resultado de la suma
 * @return  	: retorna -1 si res es NULL, o 0 en c.o.c.
 */
int sumar(float op1, float op2, float* res);

/**
 * @name    	: int max(int num1, int num2)
 * @param num1 	: primer parametro a evaluar
 * @param num2 	: segundo parametro a evaluar
 * @return  	: retorna num1 si es mayor, o num2 en c.o.c.
 */
int max (int num1, int num2);

/**
 * @name    	: void swap_p(int x, int y)
 * @param x 	: primer valor a acambiar
 * @param y 	: segundo valor a acambiar
 * @return  	: intercambia de posicion los valores entregados.
 */
void swap (int  *x,  int  *y); 

/**
 * @name    	         : int checkBitStatus (int num , int bitPosition)
 * @param num 	         : numero donde se bucará
* @param bitPosition	 : posicion del bit que se tiene interes
 * @return  	         : intercambia de posicion los valores entregados.
 */
int checkBitStatus (int num , int bitPosition); 


#endif	// MIS_FUNCIONES_H