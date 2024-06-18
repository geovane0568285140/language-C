#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int num, soma;
	
	while( num != 0 ){
	
	printf("Digite seu numero: ");
	scanf("%i", &num);
	
		if( num != 0){
		soma = soma + num;	
		}
	}
	
	printf("O resultado é: %i", soma);
	
}
