#include <stdio.h>
 int main(void){
 	int dia, mes, ano;
 	printf("dame tu fecha de nacimiento: \n");
 	printf("dia ");
 	scanf("%d",&dia);
 	printf("mes ");
 	scanf("%d", &mes);
 	ano = 31 * (mes - 1) + dia;
 	printf("tu cumple es: %d/%d.\n",dia,mes);
 	printf("dias que an pasado %d\n",ano);
 	return 0;
 }