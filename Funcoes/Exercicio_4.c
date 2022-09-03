#include <stdio.h>

float maior(float num1, float num2){
	if(num1 > num2) {
		return num1;
	}
	else{
		return num2;
	}
}

int main() {
	
	float num1, num2;
	
	printf("Entre com um numero qualquer: ");
	scanf("%f", &num1);
	
	printf("Entre com outro numero qualquer: ");
	scanf("%f", &num2);
	
	printf("\nO maior valor entre os informados e: %.2f", maior(num1, num2));
	
	return 0;
}
