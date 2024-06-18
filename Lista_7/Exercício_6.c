/*6. Escreva um programa que leia 16 n�meros reais e os armazene em uma matriz quadrada.
 Calcule o somat�rio dos elementos da diagonal principal e o somat�rio dos elementos da
 diagonal secund�ria. O programa deve imprimir o maior somat�rio e indicar a qual diagonal
 ele pertence.*/

#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int v[4][4], i, j, somaDS, somaDP;
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("Digite seu n�mero");
			scanf("%d", &v[i][j]);
		}
	}
	
	printf("--Matriz--\n");
	for(i = 0; i< 4; i++){
		for(j = 0; j < 4; j++){
			printf(" %d ", v[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			if(i == j){
				somaDP += v[i][j];
			}
		}
	}
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			if((i + j) == 3){
				somaDS += v[i][j];
			}
		}
	}
	if(somaDP > somaDS){
		printf("Maior somatoria %d diagonal primaria\n", somaDP);
		printf("Menor somatoria %d diagonal segundaria", somaDS);
	}
	else{
		printf("Maior somatoria %d diagonal segundaria\n", somaDS);
		printf("Menor somatoria %d diagonal primaria", somaDP);
	}
	
	
	
}
