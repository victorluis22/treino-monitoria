#include <stdio.h>
#define PI 3.14

void calcula_circulo(float r, float *area, float *circunferencia){
	*area = PI * (r * r);
	*circunferencia = 2 * PI * r;
}

int main() {
	
	float area, circunferencia, raio;
	
	printf("Insira o tamanho do raio da circunferencia: ");
	scanf("%f", &raio);
	
	calcula_circulo(raio, &area, &circunferencia);
	
	printf("\nDados do circulo de raio %.2f:\n", raio);
	printf("Area = %.2f\n", area);
	printf("Circunferencia = %.2f\n", circunferencia);
	
	return 0;
}
