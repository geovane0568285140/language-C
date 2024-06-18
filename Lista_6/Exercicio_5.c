#include<stdio.h>
#include<locale.h>

int main(){
	
	int v[10], i, j, numV, maiorTemp = 0, menorTemp = 0, soma;
	
	for(i = 0; i < 10; i++){
		printf("Digite a temperatura: ");
		scanf("%d", &numV);
		v[i] = numV;
	}	
	maiorTemp = v[0];
	menorTemp = v[0];
	
	for(j = 0; j < 10; j++){
		
		if(maiorTemp < v[j]){
			maiorTemp = v[j];
		}
		if(menorTemp > v[j]){
			menorTemp = v[j];
		}
		
		soma += v[j];
		
	}
	printf("A maior temperatura é: %d\n", maiorTemp);
	printf("A menor temperatura é: %d\n", menorTemp);
	printf("A media é: %.2f\n", ((float)soma)/ 10);
	
}
