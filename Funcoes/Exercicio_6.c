#include <stdio.h>

int bissexto(int ano) {
	if(ano%4 == 0 && (ano%100 != 0 || ano%400 == 0)){
		return 1;
	}
	else{
		return 0;
	}
}

int main() {
	int ano, ehBissexto;
	
	printf("\nInsira um ano para verificar se ele eh bissexto: ");
	scanf("%d", &ano);
	
	ehBissexto = bissexto(ano);
	
	if(ehBissexto) {
		printf("O ano eh bissexto!");
	}
	else{
		printf("O ano nao eh bissexto!");
	}
	
	return 0;
}
