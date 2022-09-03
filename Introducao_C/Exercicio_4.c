#include <stdio.h>

int main() {
	
	int numero1, numero2;
	
	printf("Entre com um numero inteiro: ");
	scanf("%d", &numero1);
	
	printf("Entre com outro numero inteiro: ");
	scanf("%d", &numero2);
	
	printf("\n%d + %d = %d\n", numero1, numero2, numero1 + numero2);
	printf("\n%d - %d = %d\n", numero1, numero2, numero1 - numero2);
	printf("\n%d * %d = %d\n", numero1, numero2, numero1 * numero2);
	printf("\n%d / %d = %d\n", numero1, numero2, numero1 / numero2);
	printf("\n%d * %d = %d\n", numero1, numero1, numero1 * numero1);
	printf("\n%d * %d = %d\n", numero2, numero2, numero2 * numero2);
	
	return 0;
}
