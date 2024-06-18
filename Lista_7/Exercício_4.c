/*Escreva um programa que leia 16 números, os armazene em uma matriz bidimensional
 quadrada e calcule: (1) o somatório de todos os elementos que estão acima da diagonal
 principal; e (2) a média de todos os elementos que estão abaixo da diagonal principal. O
 programa deve imprimir o somatório e a média calculados.*/

#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int v[4][4],i, j, soma, d = 0;
	float media;
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("Digite seu número: ");
			scanf("%d", &v[i][j]);
		}
	}
	
	printf("--Matriz--\n");
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf(" %d ", v[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			if(i < j){
				soma = soma + v[i][j];
			}
		}
	}
	printf("Somatoria dos elementos a cima da diagonal principal: %d\n", soma);
	soma = 0;
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			if(i > j){
				soma = soma + v[i][j];
				d++;
			}
		}
	}
	printf("Media dos elementos a baixo da diagonal principal: %.2f", media = + (float)(soma / d));
	
	
}
