#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int NUM,REST;
	
	printf("\n Digite um numero : ");
	scanf("%d", &NUM);
	
	system("CLS");
	
	REST = NUM % 2;
	
	if (REST == 0) {
	
	printf("\n O numero inserido e par \n");	
	}
	
	else {
	
	printf("\n O numero inserido e impar \n");	
	}
	
	system("PAUSE");
	return 0;
}
