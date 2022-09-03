#include <stdio.h>

int main() {
	
	int n, chances = 5, chute;
	
	printf("\t===== Jogo da Senha =====\n");
	
	printf("\nInsira uma senha (numero inteiro entre 0 e 100): ");
	scanf("%d", &n);
	
	if(n > 100 || n < 0) {
		while(n > 100 || n < 0) {
			printf("\nValor invalido. Insira uma senha (numero inteiro entre 0 e 100): ");
			scanf("%d", &n);
		}
	}
	
	while(chances > 0) {
		printf("\nQual e a senha: ");
		scanf("%d", &chute);
		
		if(chute == n) {
			printf("\nParabens, a senha e realmente %d", chute);
			return 0;
		}
		else{
			if(chute > n) {
				printf("O valor digitado e maior do que a senha\n");
			}
			else{
				printf("O valor digitado e menor do que a senha\n");
			}
			
			chances--;
		}
	}
	
	printf("\nInfelizmente voce nao acertou a senha");
	
	return 0;
}
