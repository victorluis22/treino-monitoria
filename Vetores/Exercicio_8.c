#include <stdio.h>
#define MAX 100

void soma(int a[], int b[], int n){
	int i, soma, aux;
	int C[MAX], indicador = 0;
	
	printf("\n\t  ");
	for(i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	
	printf("\n\t+ ");
	for(i = 0; i < n; i++){
		printf("%d ", b[i]);
	}
	
	for(i = n-1; i >= 0; i--){
		soma = a[i] + b[i];
		aux = i + 1;
		
		if(soma < 10){
			C[aux] = soma;
		}
		else{
			C[aux] = soma % 10;
			if(i != 0){
				a[i-1] += soma / 10;
			}		
			else
			{
				C[0] = soma / 10;
				indicador = 1;	
			}
				
		}	 
	}
	
	printf("\n\t");
	for(i = 0; i < n+1; i++){
		printf("--");
	}
	
	
	if(indicador){
		printf("\n\t");
		for(i = 0; i < n+1; i++){
			printf("%d ", C[i]);
		}
	}
	else{
		printf("\n\t  ");
		for(i = 1; i < n+1; i++){
			printf("%d ", C[i]);
		}
	}
}

int main(){
	
	int i, n;
	int A[MAX], B[MAX];
	
	printf("Entre com a quantidade de elementos dos vetores (maximo 100): ");
	scanf("%d", &n);
	
	printf("\n");
	for(i = 0; i < n; i++) {
		printf("Entre com A[%d] (inteiros entre 0 e 9): ", i);
		scanf("%d", &A[i]);
	}
	
	printf("\n");
	for(i = 0; i < n; i++) {
		printf("Entre com B[%d] (inteiros entre 0 e 9): ", i);
		scanf("%d", &B[i]);
	}
	
	soma(A, B, n);
	
	return 0;
}
