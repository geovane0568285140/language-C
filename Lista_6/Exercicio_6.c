#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int v[20], i, j, k = 19, numV = 2, conta, sla;
	double soma;
	  for(i = 0; i < 20; i++){
		printf("Digite seu número: ");
		scanf("%d", &v[i]);
	} 
	 for(j = 0; j < 10; j++){
		conta = (v[j] - v[k]);
		k--;
		soma = soma + pow(conta, 3);
	}
	
	printf("%lf", soma);
	
}
