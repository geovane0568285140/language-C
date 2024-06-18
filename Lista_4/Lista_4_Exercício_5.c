#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int num = 1, numIN, numPAR = 0;
	
	while(num > 0){
		printf("Digite seu número: ");
		scanf("%i", &num);
		
		if(num > 0){
		if((num % 2) == 0){
	       numPAR++;
		}
		else{
		   numIN++;
		}	
		}
	}
		
		printf("Você digito %i Pares e %i Impares", numPAR, numIN);
	
}
