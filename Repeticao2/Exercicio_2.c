#include <stdio.h>

int main() {
	int n, i;
	double fatorial = 1;
	
	printf("Insira um numero inteiro nao negativo para o calculo do fatorial: ");
	scanf("%d", &n);
	
	for(i = n; i > 0; i--) {
		fatorial *= i;
	}
	
	printf("\n%d! = %g\n", n, fatorial);
	
	
	return 0;
}
