#include <stdio.h>

int main() {
	
	int idade;
	
	printf("Insira qual sera sua idade no final do ano atual: ");
	scanf("%d", &idade);
	
	printf("\nVoce nasceu em %d\n", 2022-idade);
	
	return 0;
}
