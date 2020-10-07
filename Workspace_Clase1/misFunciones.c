/* 
 * @file    : misFunciones.c
 * @author  : Ioannis Vourkas
 * @date    : 23/09/2020
 * @brief   : Template de código para Lab 1 ELO 326
 */

/*Aquí hacer include a todo lo necesario para este archivo*/
/* Ejemplo*/
#include <stdio.h>

#include "misFunciones.h"

int sumar(float op1, float op2, float *res){
  
  if (res == NULL) return -1;
     
  *res = op1 + op2;
     
  return 0;
}

int max (int num1, int num2) {
  
  /* definición de variable local*/
  int result;
 
  if (num1 > num2)
    result = num1;
  else
    result = num2;
 
  return result; 
}

void swap (int *x, int *y){
    int temp;
    temp = *x; //Guarda el valor de x en variable local
    *x = *y; // Coloca el valor de y en la posicion de x
    *y = temp; //coloca el valor de temp en y
    return;
}

int checkBitStatus (int num , int bitPosition){
    return(1&(num>>bitPosition));
}

