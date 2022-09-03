#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 30

float mediaValores(int valores[], int n){
	float soma = 0.0;
	int i;
	
	for(i = 0; i < n; i++){
		soma += valores[i];
	}
	
	return soma / n;
}

int maiorIgualMedia(int valores[], int n, float media){
	int i, maioresIgualMedia = 0;
	
	for(i = 0; i < n; i++){
		if(valores[i] >= media){
			maioresIgualMedia++;
		}
	}
	
	return maioresIgualMedia;
}

void frequencia(int valores[], int n){
	int contador[11], i;
	
	for(i = 0; i < 11; i++){
		contador[i] = 0;
	}
	
	for(i = 0; i < n; i++){
		contador[valores[i]]++;
	}
	
	printf("\nResultados de frequencia:\n\n");
	printf("Valores\t| Frequencia\n");
	for(i = 1; i < 11; i++){
		printf("%d\t|\t%d\n", i, contador[i]);
	}
	
}


int main() {
	srand(time(NULL));
	int valores[MAX], i;
	
	for(i = 0; i < MAX; i++){
		valores[i] = (rand() % 10) + 1;
	}
	
	printf("Valores do vetor: \n\n");
	for(i = 0; i < MAX-1; i++){
		printf("%d, ", valores[i]);
	}
	printf("%d", valores[MAX-1]);
	
	printf("\n\nMedia dos valores: %.2f\n", mediaValores(valores, MAX));
	printf("Quantidade de valores acima ou iguais a media: %d\n", maiorIgualMedia(valores, MAX, mediaValores(valores, MAX)));
	frequencia(valores, MAX);
	
	return 0;
}
