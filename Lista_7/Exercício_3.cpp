/*3. Escreva um programa que leia 25 números inteiros, os armazene em uma matriz 5x5 e
 apresente na tela o somatório dos elementos da diagonal principal.*/

#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int v[5][5], i, j, soma = 0;
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			printf("Digite seu número: ");
			scanf("%d", &v[i][j]);
		}
	}
	
	printf("  --Matriz--");
	printf("\n");
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			printf(" %d ", v[i][j]);
		}
		printf("\n");
	}
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			if(i == j){
				soma = soma + v[i][j];
			}
		}
	}
	
	printf("Somatoria da Diagonal Principal: %d", soma);
	
		
}
