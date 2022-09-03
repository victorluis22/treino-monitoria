#include <stdio.h>

int main() {
	int i;
	float A[5] = {2, 4, 6, 7, 2};
	float B[5] = {2, 4, 6, 7, 2};
	float C[5];
	
	for(i = 0; i < 5; i++) {
		C[i] = A[i] + B[i];
	}
	
	printf("Valores do vetor C: \n");
	for(i = 0; i < 4; i++) {
		printf("%.2f, ", C[i]);
	}
	printf("%.2f", C[4]);
	
	
	return 0;
}
