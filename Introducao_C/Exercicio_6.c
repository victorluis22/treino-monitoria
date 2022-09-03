#include <stdio.h>

int main(){
	int x, y, temp;
	
	printf("Insira um valor inteiro: ");
	scanf("%d", &x);
	
	printf("Insira outro valor inteiro: ");
	scanf("%d", &y);
	
	temp = x;
	x = y;
	y = temp;
	
	printf("%d\n", x);
	printf("%d\n", y);
	
	return 0;
}
