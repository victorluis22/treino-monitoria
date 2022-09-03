#include <stdio.h>

int main() {
	int hora1, minuto1, hora2, minuto2, minutosTotais1, minutosTotais2;
	
	printf("Insira um horario (no formato horas:minutos): ");
	scanf("%d:%d", &hora1, &minuto1);
	
	printf("Insira outro horario mais tarde do que o anterior (no formato horas:minutos): ");
	scanf("%d:%d", &hora2, &minuto2);
	
	minutosTotais1 = (hora1 * 60) + minuto1;
	minutosTotais2 = (hora2 * 60) + minuto2;
	
	printf("\nTotal de minutos do primeiro horario: %d\n", minutosTotais1);
	printf("Total de minutos do segundo horario: %d\n", minutosTotais2);
	printf("Diferenca entre os dois horarios: %d minutos", minutosTotais2 - minutosTotais1);
	
	return 0;
}
