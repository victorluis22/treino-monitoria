#include <stdio.h>

int main() {
	
	int dia, mes, ano;
	
	printf("Entre com o dia que voce nasceu: ");
	scanf("%d", &dia);
	
	printf("Entre com o mes que voce nasceu: ");
	scanf("%d", &mes);
	
	printf("Entre com o ano que voce nasceu: ");
	scanf("%d", &ano);
	
	printf("\n\nVoce nasceu em: %d/%d/%d\n", dia, mes, ano);
	
	return 0;
}
