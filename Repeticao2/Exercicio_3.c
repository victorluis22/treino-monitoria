#include <stdio.h>

int main() {
	int n, k;
	float numeroHarmonico = 0;
	
	printf("Insira um numero inteiro positivo para o calculo do numero harmonico: ");
	scanf("%d", &n);
	
	for(k = 1; k <= n; k++) {
		numeroHarmonico += (1.0/k);
	}
	
	printf("\nH%d = %.2f", n, numeroHarmonico);
	return 0;
}
