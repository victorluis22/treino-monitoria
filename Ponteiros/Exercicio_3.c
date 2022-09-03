#include <stdio.h>

void ler(int *x, int *y, int *z){

	printf("\nInsira 3 numeros inteiros: \n");
	
	printf("Numero 1 = ");
	scanf("%d", x);
	
	printf("Numero 2 = ");
	scanf("%d", y);
	
	printf("Numero 3 = ");
	scanf("%d", z);
}

void ordenar(int *menor, int *intermediario, int *maior) {
	int tmp;
	int i;
	
	for(i = 0; i < 2; i++) {
		if(*menor > *intermediario) {
			tmp = *intermediario;
			*intermediario = *menor;
			*menor = tmp;
		}
		
		if(*intermediario > *maior) {
			tmp = *maior;
			*maior = *intermediario;
			*intermediario = tmp;
		}
	}
}

int par(int n) {
	if(n % 2 == 0) {
		return 1;
	}
	else{
		return 0;
	}
}

int main() {
	int menor, intermediario, maior, active = 1;
	
	while(active) {
		ler(&menor, &intermediario, &maior);
		ordenar(&menor, &intermediario, &maior);
		
		printf("\nOs numeros ordenados sao: %d, %d, %d (%s)", menor, intermediario, maior, par(maior) ? "par" : "impar");
		
		printf("\nQuer continuar? (1/0) ");
		scanf("%d", &active);
	}
	
	return 0;
}
