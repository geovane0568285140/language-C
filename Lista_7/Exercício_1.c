/*1. Escreva um programa que leia 36 números reais, os armazene em uma matriz bidimensional
 quadrada e apresente na tela os números que estão armazenados na diagonal secundária.*/

#include<stdio.h>
#include<locale.h>

int main(){
	
	
	setlocale(LC_ALL, "portuguese");
	
	float v[6][6];
	int i, j;
	
	for(i = 0 ; i < 6; i++){
		for(j = 0; j < 6; j++){
			 printf("Digite seu número: ");
			 scanf("%f", &v[i][j]);
		}
	}
	
	printf("\n");
	printf("---Matriz----\n");
	for(i = 0; i<6; i++){
		for(j = 0; j<6; j++){
			printf("%.2f ", v[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < 6; i++){	
	for(j = 0; j < 6; j++){
		if( i + j == (6 - 1)){
			printf("Diagonal segundária: %.2f\n", v[i][j]);
		}
	}
	}
	
	
	
	
}
