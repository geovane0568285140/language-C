/*Escreva um programa que leia 16 n�meros, os armazene em uma matriz bidimensional
 quadrada e calcule: (1) o somat�rio de todos os elementos que est�o acima da diagonal
 principal; e (2) a m�dia de todos os elementos que est�o abaixo da diagonal principal. O
 programa deve imprimir o somat�rio e a m�dia calculados.*/

#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int v[4][4],i, j, soma, d = 0;
	float media;
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("Digite seu n�mero: ");
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
