#include<stdio.h>
//Somar todos os elementos acima da diagonal principal
int somarAcimaDiagonal(int linha, int coluna, int matriz[linha][coluna]){

	if(linha != coluna) return 0;
	int indLinha, indColuna, soma = 0; // indLinha é o índice da linha e indColuna é o índice da coluna	
	
	for(indLinha = 0; indLinha < linha; indLinha++){
		for(indColuna = 0; indColuna < coluna; indColuna++){ 
			if(indColuna > indLinha){
			soma = soma + matriz[indLinha][indColuna];		
			}
		}
	}
	return soma;
}

int main(){
int matriz[4][4];
int linha, coluna;
//Entrada de dados
	printf("Informe um valor para os elementos da matriz: \n\n");
	
	for(linha = 0; linha < 4; linha++)
		for(coluna = 0; coluna < 4; coluna++){
			printf("Elemento[%d][%d] = ", linha,coluna);
			scanf("%d", &matriz[linha][coluna]);
	}
		printf("\nA soma acima da diagonal principal vale: %d\n", somarAcimaDiagonal(4, 4, matriz));
		
	return 0;
}
