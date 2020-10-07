/* 
 * @file    : main.c
 * @author  : Ioannis Vourkas
 * @date    : 23/09/2020
 * @brief   : Template de código para Lab 1 ELO 326
 */

#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include "misFunciones.h" // ¿cuándo usar "" y cuándo <> con #include?

#define LENGTH 15
#define WIDTH  5


/*Variables globales  --> dónde se almacenan*/
char globalCh1 = 'A';
char globalCh2 = '\0';
unsigned char globalCh3;            // ¿qué valor tiene inicialmente globalCh3?
unsigned int globalInt1 = UINT_MAX; // ¿qué representa UINT_MAX?

const int valorInicial = 1;
float globalFarr[] = {3.45, 2.6666, 9.0};

int main(void)

{
  //Imprimir mensaje de inicio --> ¿de qué include depende puts()?
  puts("Inicio del programa.\n\n");
  // Imprimir tamaños de almacenamiento
  printf("Storage size for char : %d bytes \n", sizeof (char));   
  printf("Storage size for int : %d bytes \n", sizeof (int));
  printf("Storage size for long int : %d bytes \n", sizeof (long int));
  printf("Storage size for float : %d bytes \n", sizeof (float));
  printf("Storage size for double : %d bytes \n", sizeof (double));
  
  //Trabajo con variables globales
  globalCh1 = globalCh1 + 1;
  printf("Valor de globalCh1 : %c\n", globalCh1);
  printf("Valor de globalCh2 : %d\n", globalCh2);
  printf("Valor de globalCh3 : %d\n", globalCh3);
  printf("Valor de globalInt1 : %u\n", globalInt1);
  printf("Valor inicial : %d\n", valorInicial);  

   for(int i=0; i<3; i++){
    globalFarr[i]--;
  }
  
  /*Variables locales --> dónde se almacenan*/
  int area = LENGTH * WIDTH;
  double darr[5] = {3.45, 2.6666, 9.0, acos(-1), sqrt(2)};
  
  printf ("Valor de area : %d\n", area);
  
  long int counter = 0;
  do {
    printf("Counter: %lu\n", counter++); //¿qué valores imprime si ponemos ++counter?
  }while (counter <= 500);
  
  /*Trabajar con operadores a BIT*/
  char byte0 = 0xA5; // 0b10100101
  char byte1 = 0x5A; // 0b01011010
  char byteAND = byte0 & byte1;
  char byteOR = byte0 | byte1;
  char byteXOR = byte0 ^ byte1;
  char byteLeftShift = byte1 << 1; // corrimiento a la izquierda por 1 posición
  char byteRightShift = byte0 >> 1;
  /*¿Cómo calcular el maximo valor de un tipo usando el operador NOT ~?*/
  
  /*do{
    unsigned int i;
    
    byte0 ^= 0x08;  // toggle un bit
    
    for (i = 0; i < 1000; i++); // manera de generar retardo por software
  }while(true); */

  /*Ahora a practicar...*/
  
  /* Punto 1
   * Incluir invocaciones de las funciones disponibles en misFunciones.h
   */
    
  float res = 0 ;
  sumar(12.3, 5.4, &res);
   
  /* Punto 2
   * Agregar la función swap y mostrar un ejemplo usando paso por referencia
   */
  int x1 = 12;
  int x2 = 35;
  swap(&x1,&x2);
  
  /* Punto 3
   * Agregar una nueva funcion cuyo prototipo es:
   * int checkBitStatus (int num , int bitPosition)
   * La funcion examinará el estado del bit en la posición indicada dentro de num
   * y retornara 0 si es 0 y 1 si es 1 (ver diapositivas de clase 0).
   * Mostrar un ejemplo de uso. Tomar en consideración valores incorrectos de posición.
   */
  int bit_0 = checkBitStatus(226,0); // en binario 1110_0010
  int bit_1 = checkBitStatus(226,1);
   
  puts("Termino del programa.\n");
  return 0;
}
