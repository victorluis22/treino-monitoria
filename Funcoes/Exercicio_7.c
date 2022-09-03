#include <stdio.h>

void diaSeguinte(int dia, int mes, int ano) {
	if (dia >= 31 && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)) {
		if (mes == 12) {
			dia = 1;
			mes = 1;
			ano++;
		}
		else{
			dia = 1;
			mes++;	
		}
	}
	else if(dia >= 30 && (mes == 4 || mes == 6 || mes == 9 || mes == 11)){
		dia = 1;
		mes++;
	}
	else if(dia >= 29 && mes == 2 && (ano%4 == 0 && (ano%100 != 0 || ano%400 == 0))) {
		dia = 1;
		mes++;
	}
	else if(dia >= 28 && mes == 2 && !(ano%4 == 0 && (ano%100 != 0 || ano%400 == 0))){
		dia = 1;
		mes++;
	}
	else{
		dia++;
	}
	
	printf("\n\nDia Seguinte: %d/%d/%d\n", dia, mes, ano);
}

int main() {
	
	int n, dia, mes, ano, i;
	
	printf("Insira a quantidade de datas que deseja: ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++) {
		printf("Insira o dia: ");
		scanf("%d", &dia);
		
		printf("Insira o mes: ");
		scanf("%d", &mes);
		
		printf("Insira o ano: ");
		scanf("%d", &ano);
		
		diaSeguinte(dia, mes, ano);
	}
	
	return 0;
}
