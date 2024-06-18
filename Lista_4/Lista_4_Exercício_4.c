#include<stdio.h>
#include<locale.h>

int main(){
	
setlocale(LC_ALL, "portuguese");

	int num, maior;
	
	while( /*num != 0*/ num > 0 ){
		
		printf("Digite seu numero: ");
		scanf("%i", &num);
		
		if (maior < num){
			maior = num;
		}
		
	}
	
	printf("O maior número é: %i", maior);
	
	
}
