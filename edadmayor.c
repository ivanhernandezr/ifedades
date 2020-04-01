#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int edad1,edad2;
	printf("Programa que muestra que numero es Mayor\n\n");
	printf("Ingrese la edad de la primera persona\n");
	scanf("%d",&edad1);
	printf("Ingrese la edad de la segunda persona\n");
	scanf("%d",&edad2);
	if(edad1>edad2)
		printf("LA PRIMERA PERSONA ES MAYOR con %d Anios",edad1);
	else
	printf("LA SEGUNDA PERSONA ES MAYOR con %d Anios",edad2);
	return 0;
}
