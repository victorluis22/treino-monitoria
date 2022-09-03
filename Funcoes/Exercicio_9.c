#include <stdio.h>

int LerVoto() {
	int voto, confirmacao = 0, cont = 0;
	
	while(confirmacao != 1){
		
		if(!cont) {
			printf("\nInsira o numero do candidato: ");
		}
		else{
			printf("\nInsira outro voto entao: ");
		}
		
		scanf("%d", &voto);
	
		printf("Tem certeza que esse e seu voto?: (1 - Sim / 0 - Nao)");
		scanf("%d", &confirmacao);
		
		cont++;
	}
	
	return voto;

}

int VerificaSenha(int num) {
	int senha = 4321;
	
	if(num == senha) {
		return 1;
	}
	else{
		return 0;
	}
}

int GeraRelatorio(int camila, int mariana, int pedro, int branco, int nulo) {
	int vencedor;
	
	printf("\n\t==== Relatorio das eleicoes ====\n\n");
	printf("Numero de votos da Camila = %d\n", camila);
	printf("Numero de votos da Mariana = %d\n", mariana);
	printf("Numero de votos do Pedro = %d\n", pedro);
	printf("Numero de votos em branco = %d\n", branco);
	printf("Numero de votos nulos = %d\n", nulo);
	
	if(camila > mariana && camila > pedro) {
		printf("\nVencedor = Camila\n");
	}
	else if(mariana > camila && mariana > pedro) {
		printf("\nVencedor = Mariana\n");
	}
	else if(pedro > camila && pedro > mariana) {
		printf("\nVencedor = Pedro\n");
	}
	else{
		printf("Empate...\n");
	}
}

int main() {
	int camila = 0, mariana = 0, pedro = 0, branco = 0, nulo = 0, voto;
	
	printf("\t>>>> Eleicoes <<<<<\n\n");
	printf("14 - Camila\n24 - Mariana\n34 - Pedro\n0 - Voto em Branco");
	
	while(1) {
		voto = LerVoto();
		
		if(voto == 14) {
			camila++;
		}
		else if(voto == 24) {
			mariana++;
		}
		else if(voto == 34) {
			pedro++;
		}
		else if(voto == 0) {
			branco++;
		}
		else if(VerificaSenha(voto)) {
			break;
		}
		else{
			nulo++;
		}
	}
	
	GeraRelatorio(camila, mariana, pedro, branco, nulo);
	return 0;
}
