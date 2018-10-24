#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int NUM1,NUM2,SOMA;
	
	printf("\n Digite um numero : ");
	scanf("%d", &NUM1);
	
	system("CLS");
	
	printf("\n Digite outro numero : ");
	scanf("%d", &NUM2);
	
	system("CLS");
	
	SOMA = NUM1 + NUM2;
	
	if (SOMA > 25) {
		
	printf("\n A soma e maior que 25");	
	}
	
	

	system("PAUSE");
	return 0;
}
