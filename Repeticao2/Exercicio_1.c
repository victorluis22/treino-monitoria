#include <stdio.h>

int main() {
	int n, i, cont = 0;
	
	printf("Insira um numero inteiro positivo n: ");
	scanf("%d", &n);
	
	printf("\nSequencia dos %d primeiros numeros impares\n", n);
	for(i = 1; cont < n; i+=2) {
		printf("%d ", i);
		cont++;
	}
	
	return 0;
}
