#include <stdio.h>

float absolute(float num) {
	if(num < 0) {
		num *= -1;
	}
	
	return num;
}

int main() {
	
	float num;
	
	printf("Insira um numero qualquer: ");
	scanf("%f", &num);
	
	printf("\nO valor inserido em modulo e: %.2f", absolute(num));
	
	return 0;
}
