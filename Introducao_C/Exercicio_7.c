#include <stdio.h>

int main() {
	
	int x, y;
	
	printf("Insira um valor inteiro: ");
	scanf("%d", &x);
	
	printf("Insira outro valor inteiro: ");
	scanf("%d", &y);
	
	x = x + y;
	y = x - y;
	x = x - y;
	
	
	printf("%d\n", x);
	printf("%d\n", y);
	
	return 0;
}
