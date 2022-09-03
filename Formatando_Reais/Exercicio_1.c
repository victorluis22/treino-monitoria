#include <stdio.h>

int main() {
	float gasto;
	
	printf("Insira o valor gasto: ");
	scanf("%f", &gasto);
	
	printf("Valor total a ser pago: R$ %0.2f", 1.1*gasto);
	return 0;
}
