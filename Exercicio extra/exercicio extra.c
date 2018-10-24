#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char pedido[6];
	
	printf("\n Digite o pedido: combo ou lanche: ");
	scanf("%s", &pedido);
	
	system("CLS");
	
	if(strcmp(pedido,"combo")==0) {
		printf("\n O valor sera de R$25,00 \n");
	}
	if(strcmp(pedido,"lanche")==0) {
		printf("\n O valor sera de R$13,50 \n");
	}
	
	
	
	system("PAUSE");
	return 0;
}
