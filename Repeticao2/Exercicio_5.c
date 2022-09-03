#include <stdio.h>

int main(){
	
	int n, i, j, somaPrimos = 0, numero, naoEhPrimo, divisores;
	
	printf("Insira a quantidade de numeros da sequencia: ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++) {
		naoEhPrimo = 0;
		divisores = 0;
		
		printf("Insira o %d numero inteiro positivo: ", i);
		scanf("%d", &numero);
		
		for(j = 1; j <= numero && naoEhPrimo == 0; j++) {
			if(numero % j == 0) {
				divisores++;
			}
			
			if(divisores > 2) {
				naoEhPrimo = 1;
			}
		}
		
		if(!naoEhPrimo && numero != 1){
			somaPrimos += numero;
		}
		
	}
	
	printf("\n\nSoma dos numeros primos da sequencia: %d", somaPrimos);
	
	return 0;
}
