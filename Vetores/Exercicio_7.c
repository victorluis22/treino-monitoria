#include <stdio.h>
#include <math.h>
#define MAX 10

float produtoEscalar(float a[], float b[], int n){
	int i;
	float soma = 0.0;
	
	for(i = 0; i < n; i++){
		soma += a[i] * b[i];
	}
	
	return soma;
}

float modulo(float vetor[], int n){
	float soma = 0.0;
	int i;
	
	for(i = 0; i < n; i++) {
		soma += (vetor[i] * vetor[i]);
	}
	
	return sqrt(soma);
}

int main(){
	
	int i, n;
	float A[MAX], B[MAX], escalar, cosseno;
	
	printf("Entre com a quantidade de elementos dos vetores (maximo 10): ");
	scanf("%d", &n);
	
	printf("\n");
	for(i = 0; i < n; i++) {
		printf("Entre com A[%d]: ", i);
		scanf("%f", &A[i]);
	}
	
	printf("\n");
	for(i = 0; i < n; i++) {
		printf("Entre com B[%d]: ", i);
		scanf("%f", &B[i]);
	}
	
	escalar = produtoEscalar(A, B, n);
	cosseno = escalar/(modulo(A, n) * modulo(B, n));
	
	printf("\nO produto escalar de A e B eh: %.2f\n", escalar);
	printf("\nO cosseno entre A e B eh: %.2f\n", cosseno);
	
	if(cosseno == 0){
		printf("\nAngulo reto");
	}
	else if(cosseno > 0){
		printf("\nAngulo agudo");
	}
	else{
		printf("\nAngulo obtuso");
	}
	
	return 0;
}
