#include <stdio.h>

int maiorTemp(int temps[], int n){
	int maior = temps[0];
	int i;
	
	for(i = 0; i < n; i++) {
		if(temps[i] > maior){
			maior = temps[i];
		}
	}
	
	return maior;
}

int menorTemp(int temps[], int n){
	int menor = temps[0];
	int i;
	
	for(i = 0; i < n; i++) {
		if(temps[i] < menor){
			menor = temps[i];
		}
	}
	
	return menor;
}

float mediaTemp(int temps[], int n){
	float soma = 0.0;
	int i;
	
	for(i = 0; i < n; i++) {
		soma += temps[i];
	}
	
	return soma / n;
}

int main(){
	
	int monsTemperatureData[11] = {-7, -9, -2, 0, 1, 2, 5, 2, -2, -4, -8};
	
	printf("Maior temperatura em Mons: %d\n", maiorTemp(monsTemperatureData, 11));
	printf("Menor temperatura em Mons: %d\n", menorTemp(monsTemperatureData, 11));
	printf("Media de temperatura em Mons: %.2f\n", mediaTemp(monsTemperatureData, 11));
	
	return 0;
}
