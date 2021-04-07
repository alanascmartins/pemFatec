#include<stdio.h>
int main(){
	int indLinha, indColuna; // indLinha para percorrer a linha e indColuna para percorrer a coluna
	int linha, coluna;
	int soma, maior;
	
	//Entrada de dados
	printf("Informe a quantidade de linhas da Matriz: ");
	scanf("%d", &linha);
	
	printf("Informe a quantidade de colunas da Matriz: ");
	scanf("%d", &coluna);
	
	int matriz[linha][coluna];
	
	printf("Informe os valores para a Matriz: ");
	for (indLinha = 0; indLinha < linha; indLinha++){
		for(indColuna = 0; indColuna < coluna; indColuna++){
			scanf("%d", &matriz[indLinha][indColuna]);
		}	
	}
	
		// Somar linhas
	maior = 0;
	for (indLinha = 0; indLinha < linha; indLinha++){
		soma = 0;
		for(indColuna = 0; indColuna < coluna; indColuna++){
			soma = soma + matriz[indLinha][indColuna];		
		}
		if(soma > maior){
			maior = soma;
		}
	}
		
	//Somar colunas
	for(indColuna = 0; indColuna < coluna; indColuna++){
		soma = 0;
		for (indLinha = 0; indLinha < linha; indLinha++){
			soma = soma + matriz[indLinha][indColuna];
		}
		if(soma > maior){
			maior = soma;
		}
	}
	
		
	printf("Maior soma: %d", maior);
	
		return 0;
}
