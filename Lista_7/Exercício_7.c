/*Escreva um programa que leia 25 n�meros, os armazene em uma matriz quadrada e calcule
 (1) o valor do somat�rio de todos os elementos que est�o acima da diagonal secund�ria e (2)
 a m�dia de todos os elementos que est�o abaixo da diagonal secund�ria. O programa deve
 imprimir o somat�rio e a m�dia calculados.*/

#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int v[5][5], i, j, somaAD;
	float d=0, soma;
	
	for(i = 0; i < 5; i++ ){
		for(j = 0; j < 5; j++){
			printf("Digite seu n�mero: ");
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
	
	printf("Soma dos elementos que est�o acima da diagonal segundaria: %d\n", somaAD);
	printf("media dos elemntos que est�o abaixo da diagonal segundaria: %.2f", soma / d);
	
	
	
}
