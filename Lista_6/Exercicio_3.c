#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int v[20], numV, i, j;
	
	for(i = 0; i < 20; i++){
		
		printf("Digite seu n�mero: ");
		scanf("%d", &numV);
		v[i] = numV;
		
		
	}

	
	for(j = 0; j < 20; j++){
		
		numV = v[j];
		if((numV % 2) == 0){
			printf("Este n�mero e par: %d\n", numV);
		}
		else{
			printf("Este n�mero e impar: %d\n", numV);
		}
		
	}
	
}
