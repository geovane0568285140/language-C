#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int num_x, num_y, num_maior, num_menor;
	
	printf("Digite seu número: ");
	scanf("%i", &num_x);
	printf("Digite seu número: ");
	scanf("%i", &num_y);
	
	if(num_x > num_y){
		num_maior = num_x;
		num_menor = num_y;
	}
	else{
		num_maior = num_y;
		num_menor = num_x;
	}
	printf("O número maior é: %i\nO número menor é: %i \n", num_maior, num_menor);
	
	printf("O intervalo entre os númeors em orden crescente incluindo os próprios números: ");
	for(num_menor; num_menor <= num_maior; num_menor++){
		
		printf(" %i ", num_menor);
		
	}
	
}
