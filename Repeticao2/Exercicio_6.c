#include <stdio.h>

int main() {
	
	int numero, i, naoEhPrimo = 0, divisores = 0;
	
	printf("Insira um numero inteiro positivo para saber se eh primo: ");
	scanf("%d", &numero);
	
	for(i = 1; i <= numero && naoEhPrimo == 0; i++) {
		if(numero % i == 0) {
			divisores++;
		}
		
		if(divisores > 2) {
			naoEhPrimo = 1;
		}
	}
	
	if(naoEhPrimo || numero == 1) {
		printf("\nO numero inserido nao eh primo");
	}
	else{
		printf("\nO numero inserido eh primo");
	}
	
	return 0;
}
