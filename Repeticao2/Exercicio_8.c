#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	
	int n, chances, chute, active = 1, vencedor, tipoJogo;
	srand(time(NULL));
	
	while(active == 1) {
		
		chances = 5;
		vencedor = 0;
		
		printf("\n\t===== Jogo da Senha =====\n");
		
		printf("\nDeseja jogar em dupla ou com o computador?(1- Dupla/ 0 - Computador) ");
		scanf("%d", &tipoJogo);
		
		if(tipoJogo){
			printf("\nInsira uma senha (numero inteiro entre 0 e 100): ");
			scanf("%d", &n);
			
			if(n > 100 || n < 0) {
				while(n > 100 || n < 0) {
					printf("\nValor invalido. Insira uma senha (numero inteiro entre 0 e 100): ");
					scanf("%d", &n);
				}
			}
		}
		else{
			n = rand() % 100;
		}
		
		while(chances > 0 && vencedor == 0) {
			printf("\nQual e a senha: ");
			scanf("%d", &chute);
			
			if(chute == n) {
				printf("\nParabens, a senha e realmente %d", chute);
				vencedor = 1;
			}
			else{
				if(chute > n) {
					if(chute - n == 1) {
						printf("TA QUENTE!!!\n");
					}
					else{
						printf("O valor digitado e maior do que a senha\n");
					}
				}
				else{
					if(n - chute == 1) {
						printf("TA QUENTE!!!\n");
					}
					else{
						printf("O valor digitado e menor do que a senha\n");
					}
				}
				
				chances--;
			}
		}
		
		if(!vencedor) printf("\nNao foi desta vez!");
		
		printf("\nDeseja jogar novamente?(1 - Sim/ 0 - Nao): ");
		scanf("%d", &active);
	}
	
	return 0;
}
