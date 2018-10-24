#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float A,B,C,X1,X2,Delta;
	
	printf("\n Digite o valor de A : ");
	scanf("%f", &A);
	
	system("CLS");
	
	printf("\n Digite o valor de B : ");
	scanf("%f", &B);
	
	system("CLS");
	
	printf("\n Digite o valor de C : ");
	scanf("%f", &C);
	
	system("CLS");
	
	Delta = pow(B,2) - 4 * A * C;
	
	if (Delta > 0) {
		
	X1 = (-B+sqrt(Delta)) / 2 * A;
	X2 = (-B-sqrt(Delta)) / 2 * A;
	
	printf("\n O valor de X1 e : %f \n ", X1);
	printf("\n O valor de X2 e : %f \n ", X2);
}

	else {
	printf("\n o valor de delta e negativo! \n");	
	}
	
	system("PAUSE");
	return 0;
}
