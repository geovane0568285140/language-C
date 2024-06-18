/* 2. Escreva um programa que leia 9 n�meros inteiros e os armazene em uma matriz
 bidimensional quadrada (M1). Em seguida, o programa deve copiar os n�meros
 armazenados em outra matriz bidimensional quadrada (M2), dispondo esses n�meros em
 ordem inversa (ex. o n�mero armazenado na primeira posi��o de M1 deve ser copiado na
 �ltima posi��o de M2; o n�mero da segunda posi��o de M1 deve ser copiado na pen�ltima
 posi��o de M2 e assim por diante. Ao final, as duas matrizes devem ser apresentadas na tela.*/

#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	
	int M1[3][3], M2[3][3], i, j, indL = 2, indC = 2;
	
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("Digite seu n�mero: ");
			scanf("%d", &M1[i][j]);
		}
	}
	

	printf("--Matriz--");
	printf("\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf(" %d ", M1[i][j]);
		}
	printf("\n");
	}
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			M2[indL][indC] = M1[i][j];
			indC--;
		}
		indL--;
		indC = 2;
	}
	
	printf("--Matriz Inversa--");
	printf("\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf(" %d ", M2[i][j]);
		}
		printf("\n");
	}
	
	
}
