#include <stdio.h> 

void digitos(int n) {
	int contador = 1;
	int aux = n;
	
	while(n / 10 > 0) {
		n /= 10;
		contador++;
	}
	
	printf("\n\nNumero de digitos de %d = %d\n", aux, contador);
	printf("Primeiro digito de %d = %d\n\n", aux, n);
}

int main() {
	
	int i, n, num;
	
	printf("Insira a quantidade de numeros que deseja processar: ");
	scanf("%d", &num);
	
	for(i = 0; i < num; i++) {
		printf("Insira um numero inteiro: ");
		scanf("%d", &n);
		
		digitos(n);
	}
	
	return 0;
}
