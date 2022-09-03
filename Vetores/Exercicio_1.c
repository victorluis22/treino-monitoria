#include <stdio.h>
#define MAX 100

int main(){
	int n, i;
	float numeros[MAX];
	
	printf("Entre com a quantidade de numeros da sequencia: ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		printf("Entre com um valor: ");
		scanf("%f", &numeros[i]);
	}
	
	printf("\nNumeros na ordem inserida:\n");
	for(i = 0; i < n; i++){
		printf("%.2f ", numeros[i]);
	}
	
	printf("\n\nNumeros na ordem inversa:\n");
	for(i = n-1; i >= 0; i--){
		printf("%.2f ", numeros[i]);
	}
	
	return 0;
}
