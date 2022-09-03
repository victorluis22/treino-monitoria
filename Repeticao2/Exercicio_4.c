#include <stdio.h>

int main() {
	int n, i;
	float x, y;
	
	printf("Insira a quantidade de pontos que deseja verificar: ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++) {
		printf("\nInsira o valor de x: ");
		scanf("%f", &x);
		
		printf("Insira o valor de y: ");
		scanf("%f", &y);
		
		if(x >= 0 && y >= 0 && ((x*x) + (y*y) == 2)) {
			printf("O par ordenado (%.2f, %.2f) pertence a area H e faz parte da borda\n", x, y);
		}
		else if(x >= 0 && y >= 0 && ((x*x) + (y*y) < 2)){
			printf("O par ordenado (%.2f, %.2f) pertence a area H\n", x, y);
		}
		else{
			printf("O par ordenado (%.2f, %.2f) nao pertence a area H\n", x, y);
		}
	}
	
	return 0;
}
