#include <stdio.h>
#define MAX 100

float produtoEscalar(float a[], float b[], int n){
	int i;
	float soma = 0.0;
	
	for(i = 0; i < n; i++){
		soma += a[i] * b[i];
	}
	
	return soma;
}

int main(){
	
	int n, i;
	float x[MAX], y[MAX];
	
	printf("Entre com a quantidade de elementos dos vetores: ");
	scanf("%d", &n);
	
	printf("\n");
	for(i = 0; i < n; i++) {
		printf("Entre com x[%d]: ", i);
		scanf("%f", &x[i]);
	}
	
	printf("\n");
	for(i = 0; i < n; i++) {
		printf("Entre com y[%d]: ", i);
		scanf("%f", &y[i]);
	}
	
	printf("\nProduto escalar de x e y eh: %.2f", produtoEscalar(x, y, n));
	
	return 0;
}
