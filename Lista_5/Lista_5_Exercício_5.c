#include<stdio.h>
#include<locale.h>]

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int i, num_x, par, impar;
	
	for(i; i<20; i++){
		
		printf("Digite seu número: ");
		scanf("%i   ", &num_x);
		printf("%i", i);
		
		if((num_x % 2) == 0){
			par++;
		}
		else{
			impar++;
		}
		
		
	}
	
	printf("Você digitou %i pares e %i impares :)", par,impar);
	
	
}
