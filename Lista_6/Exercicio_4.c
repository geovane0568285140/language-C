#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int v[15], i, j, numV;
	
	for(i = 0; i < 15; i++){
		
		printf("Digite seu n�mero: ");
		scanf("%d", &numV);
		v[i] = numV;
		
	}
	
	for(j = 0; j < 15; j++){
		
		numV = v[j];
		if(numV >= 0){
		printf("Seu n�mero � positivo: %d\n", numV);	
		}
		else{
		printf("Seu n�mero � negativo: %d\n", numV);
		}
		
	}
	
	
	
}
