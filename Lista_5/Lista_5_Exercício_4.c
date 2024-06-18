#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int soma = 1 ,num_Atual = 0, num_anterior = 0, i;
	
	for(i ; i <=30 ; i++){
		num_Atual = soma;
		printf("%i ", soma);
		soma =  soma + num_anterior;
		num_anterior = num_Atual;
	}
	
}
