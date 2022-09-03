#include <stdio.h>

float areaTriangulo(float bas, float alt) {	
	return (bas * alt) / 2;
}

int main() {
	
	float bas, alt;
	
	printf("\tCalculadora de area de triangulo\n");
	
	printf("\nInsira o tamanho da base: ");
	scanf("%f", &bas);
	
	printf("Insira a altura do triangulo: ");
	scanf("%f", &alt);
	
	printf("\nA area do triangulo inserido e: %.2f u.a", areaTriangulo(bas, alt));
	
	return 0;
}
