#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float ALTURA,PESO_ID;
	char SEXO [10];
	
	
	printf("\n Digite sua altura : ");
	scanf("%f", &ALTURA);
	
	system("CLS");
	
	printf("\n Digite o seu sexo : ");
	scanf("%s", &SEXO);
	
	system("CLS");
	
	if (strcmp(SEXO,"Masculino")==0 ) {
	
	PESO_ID = (62.1 * ALTURA) -44.7;	
	}
	
	else {
		
	PESO_ID = (72.7 * ALTURA) -58;	
	}
	
	printf("\n Seu peso ideal e : %.1f \n ", PESO_ID);
	
	system("PAUSE");
	return 0;
}
