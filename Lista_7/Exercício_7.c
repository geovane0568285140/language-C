/*Escreva um programa que leia 25 números, os armazene em uma matriz quadrada e calcule
 (1) o valor do somatório de todos os elementos que estão acima da diagonal secundária e (2)
 a média de todos os elementos que estão abaixo da diagonal secundária. O programa deve
 imprimir o somatório e a média calculados.*/

#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int v[5][5], i, j, somaAD;
	float d=0, soma;
	
	for(i = 0; i < 5; i++ ){
		for(j = 0; j < 5; j++){
			printf("Digite seu número: ");
			scanf("%d", &v[i][j]);
		}
	}
	
	printf("--Matriz--\n");
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			printf(" %d ", v[i][j]);
		}
		printf("\n");
	}
	
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			if(i + j < 4){
				somaAD += v[i][j];
			}
		}
	}
	
	
	for(i = 0; i < 5; i++ ){
		for(j = 0; j < 5; j++){
			if(i + j >= 5){
				soma += v[i][j];
				d++;
			}
		}
	}
	
	printf("Soma dos elementos que estão acima da diagonal segundaria: %d\n", somaAD);
	printf("media dos elemntos que estão abaixo da diagonal segundaria: %.2f", soma / d);
	
	
	
}
