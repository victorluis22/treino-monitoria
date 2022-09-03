#include <stdio.h>

int ehBissexto(int ano){
	if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)){
		return 1;
	}
	else{
		return 0;
	}
}

void diaSeguinte(int *dia, int *mes, int *ano) {
	if (*dia == 31 && (*mes == 1 || *mes == 3 || *mes == 5 || *mes == 7 || *mes == 8 || *mes == 10 || *mes == 12)){
		if (*mes == 12){
			*dia = 1;
			*mes = 1;
			*ano += 1;
		}
		else{
			*dia = 1;
			*mes += 1;
		}
	}
	else if(*dia == 30 && (*mes == 4 || *mes == 6 || *mes == 9 || *mes == 11)){
		*dia = 1;
		*mes += 1;
	}
	else if(*dia == 28 && *mes == 2 && ehBissexto(*ano)){
		*dia += 1;
	}
	else if(*dia == 28 && *mes == 2 && !ehBissexto(*ano)){
		*dia = 1;
		*mes += 1;
	}
	else if(*dia == 29 && *mes == 2) {
		*dia = 1;
		*mes += 1;
	}
	else{
		*dia += 1;
	}
}

int main() {
	
	int n, i;
	int dia, mes, ano;
	
	printf("Insira a quantidade de datas que deseja informar: ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++) {
		printf("Insira a data (formato DD/MM/AAAA): ");
		scanf("%d/%d/%d", &dia, &mes, &ano);
		
		diaSeguinte(&dia, &mes, &ano);
		
		printf("Dia Seguinte: %d/%d/%d\n\n", dia, mes, ano);
		
	}

	
	return 0;
}
