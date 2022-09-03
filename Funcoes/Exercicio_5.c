#include <stdio.h>
#define TRUE 1
#define FALSE 0


int ehMultiplo(int num1, int num2) {
	if(num1 % num2 == 0) {
		return TRUE;
	}
	else{
		return FALSE;
	}
}


int main() {
	
	int num1, num2;
	
	printf("Insira um numero inteiro: ");
	scanf("%d", &num1);
	
	printf("Insira um outro numero inteiro: ");
	scanf("%d", &num2);
	
	if(ehMultiplo(num1, num2)){
		printf("\n%d eh multiplo de %d", num1, num2);
	}
	else{
		printf("\n%d nao eh multiplo de %d", num1, num2);
	}
	return 0;
}
