/*  Prog5.c -- floats y scanf() */
 
#include <stdio.h>
 
int main( void )
{
  float peso, valor;
 
  printf( "¿sabe usted su peso en rhodium?\n" );
  printf( "Vamos a ver.\n" );
  printf( "Ingrese su peso en libras: " );
 
  /* Obtener peso del usuario                         */
  scanf( "%f", &peso );
 
  /* Si rhodium vale $770 la onza                     */
  /* 14.5833 para convertir libras avd. al onzas troy */

  valor = 770.0 * peso * 14.5833;

  printf( "Su peso en rhodium vale $%.2f.\n", valor );
  printf( "Si el valor de rhodium baja,\n" );
  printf( "come más para mantener su valor.\n" );
 
  return 0;
}