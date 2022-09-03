#include <stdio.h>
#define MAX 100

int negativos(int vet[], int n){
	int i, negativos = 0;
	
	for(i = 0; i < n; i++) {
		if(vet[i] < 0){
			negativos++;
		}
	}
	
	return negativos;
}

int main() {
	
	int numeros[MAX], n, i;
	
	printf("Entre com a quantidade de valores do vetor: ");
	scanf("%d", &n);
	
	printf("\n");
	for(i = 0; i < n; i++){
		printf("Entre com vetor[%d]: ", i);
		scanf("%d", &numeros[i]);
	}
	
	printf("\nQuantidade de valores negativos no vetor: %d", negativos(numeros, n));
	
	return 0;
}
