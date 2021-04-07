#include<stdio.h>
//Soma da Diagonal principal
int somarDiagonal(int linha, int coluna, int matriz[linha][coluna]){

	if(linha != coluna) return 0;
	int indLinha, soma = 0;	
	
	for(indLinha = 0; indLinha < linha; indLinha++){
		soma = soma + matriz[indLinha][indLinha];
	}
	return soma;
}

int main(void){
int matriz[4][4];
int linha, coluna;
//Entrada de dados
	printf("Informe um valor para os elementos da matriz: \n\n");
	
	for(linha = 0; linha < 4; linha++)
		for(coluna = 0; coluna < 4; coluna++){
			printf("Elemento[%d][%d] = ", linha,coluna);
			scanf("%d", &matriz[linha][coluna]);
	}
	
		printf("\nA soma da diagonal principal vale: %d\n", somarDiagonal(4, 4, matriz));
		
	return 0;
}

	
